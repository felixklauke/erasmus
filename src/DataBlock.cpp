//
// Created by Felix Klauke on 16.03.18.
//

#include "DataBlock.h"

DataBlock::DataBlock(unsigned int *blockId, int *nextBlockId, unsigned int *dataSectionSize, char *dataSection)
        : blockId(blockId), nextBlockId(nextBlockId), dataSectionSize(dataSectionSize), dataSection(dataSection) {}

unsigned int *DataBlock::GetBlockId() const {
    return blockId;
}

void DataBlock::SetBlockId(unsigned int *blockId) {
    DataBlock::blockId = blockId;
}

int *DataBlock::GetNextBlockId() const {
    return nextBlockId;
}

void DataBlock::SetNextBlockId(int *nextBlockId) {
    DataBlock::nextBlockId = nextBlockId;
}

unsigned int *DataBlock::GetDataSectionSize() const {
    return dataSectionSize;
}

void DataBlock::SetDataSectionSize(unsigned int *dataSectionSize) {
    DataBlock::dataSectionSize = dataSectionSize;
}

char *DataBlock::GetDataSection() const {
    return dataSection;
}

void DataBlock::SetDataSection(char *dataSection) {
    DataBlock::dataSection = dataSection;
}
