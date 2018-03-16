//
// Created by Felix Klauke on 16.03.18.
//

#include "DataManager.h"

DataManager::DataManager(DataStorage *dataStorage, uint blockSize) : dataStorage(dataStorage), blockSize(blockSize) {

}

DataBlock DataManager::readDataBlock(uint position) {
    uint blockPosition = blockSize * position;
    char buffer[8];

    dataStorage->ReadBlock(blockPosition, 8, buffer);

    int nextBlockId;
    memcpy(&nextBlockId, &buffer, sizeof(nextBlockId));
    uint dataSectionSize;
    memcpy(&dataSectionSize, &buffer[4], sizeof(dataSectionSize));

    char dataSection[dataSectionSize];
    dataStorage->ReadBlock(blockPosition + 8, dataSectionSize, dataSection);

    return DataBlock(&blockPosition, &nextBlockId, &dataSectionSize, dataSection);
}
