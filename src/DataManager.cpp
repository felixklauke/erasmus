//
// Created by Felix Klauke on 16.03.18.
//

#include <iostream>
#include "DataManager.h"

DataManager::DataManager(DataStorage *dataStorage, uint blockSize) : dataStorage(dataStorage), blockSize(blockSize) {

}


DataBlock DataManager::ReadDataBlock(uint position) {
    uint blockPosition = blockSize * position;

    std::cout << "================= READING =================" << std::endl;

    char buffer[8];

    dataStorage->ReadBlock(blockPosition, 8, buffer);

    int nextBlockId;
    memcpy(&nextBlockId, &buffer, sizeof(nextBlockId));
    std::cout << "Next block id size " << sizeof(nextBlockId) << " with value " << nextBlockId << std::endl;

    uint dataSectionSize;
    memcpy(&dataSectionSize, &buffer[4], sizeof(dataSectionSize));
    std::cout << "DateSectionSize " << sizeof(dataSectionSize) << " with value " << dataSectionSize << std::endl;

    char dataSection[dataSectionSize];
    dataStorage->ReadBlock(blockPosition + 8, dataSectionSize, dataSection);

    std::cout << "================= READING END =================" << std::endl;

    return DataBlock(position, nextBlockId, dataSectionSize, dataSection);
}

void DataManager::WriteDataBlock(DataBlock dataBlock) {
    uint initialPosition = blockSize * dataBlock.GetBlockId();

    std::cout << "================= WRITING =================" << std::endl;

    uint headerSize = sizeof(*dataBlock.GetNextBlockId()) + sizeof(*dataBlock.GetDataSectionSize());

    std::cout << "Header size " << sizeof(headerSize) << " with value " << headerSize << std::endl;

    char buffer[headerSize];
    memcpy(&buffer, dataBlock.GetNextBlockId(), sizeof(*dataBlock.GetNextBlockId()));
    memcpy(&buffer[sizeof(*dataBlock.GetNextBlockId())], dataBlock.GetDataSectionSize(),
           sizeof(*dataBlock.GetDataSectionSize()));

    dataStorage->WriteBlockAndFlushOutput(initialPosition, headerSize, buffer);
    dataStorage->WriteBlockAndFlushOutput(initialPosition + headerSize,
                                          *dataBlock.GetDataSectionSize(),
                                          dataBlock.GetDataSection());

    std::cout << "================= WRITING END =================" << std::endl;
}
