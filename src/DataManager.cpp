//
// Created by Felix Klauke on 16.03.18.
//

#include "DataManager.h"

DataManager::DataManager(DataStorage *dataStorage, uint blockSize) : dataStorage(dataStorage), blockSize(blockSize) {

}


DataBlock DataManager::ReadDataBlock(uint position) {
    uint blockPosition = blockSize * position;
    char buffer[8];

    dataStorage->ReadBlock(blockPosition, 8, buffer);

    int nextBlockId;
    memcpy(&nextBlockId, &buffer, sizeof(nextBlockId));
    uint dataSectionSize;
    memcpy(&dataSectionSize, &buffer[4], sizeof(dataSectionSize));

    char dataSection[dataSectionSize];
    dataStorage->ReadBlock(blockPosition + 8, dataSectionSize, dataSection);

    return DataBlock(position, nextBlockId, dataSectionSize, *dataSection);
}

void DataManager::WriteDataBlock(DataBlock dataBlock) {
    uint initialPosition = blockSize * dataBlock.GetBlockId();

    uint headerSize = sizeof(dataBlock.GetNextBlockId()) + sizeof(dataBlock.GetDataSectionSize());
    char buffer[headerSize];
    memcpy(&buffer, dataBlock.GetNextBlockId(), sizeof(dataBlock.GetNextBlockId()));
    memcpy(&buffer[sizeof(dataBlock.GetNextBlockId())], dataBlock.GetDataSectionSize(),
           sizeof(dataBlock.GetDataSectionSize()));

    dataStorage->WriteBlock(initialPosition, headerSize, buffer);
    dataStorage->WriteBlockAndFlushOutput(initialPosition + *dataBlock.GetDataSectionSize(),
                                          *dataBlock.GetDataSectionSize(),
                                          dataBlock.GetDataSection());
}
