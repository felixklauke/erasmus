//
// Created by Felix Klauke on 16.03.18.
//

#include "DataBlock.h"

DataBlock::DataBlock(unsigned int *blockId, int *nextBlockId, unsigned int *dataSectionSize, char *dataSection)
        : blockId(blockId), nextBlockId(nextBlockId), dataSectionSize(dataSectionSize), dataSection(dataSection) {}

unsigned int *DataBlock::getBlockId() const {
    return blockId;
}

void DataBlock::setBlockId(unsigned int *blockId) {
    DataBlock::blockId = blockId;
}

int *DataBlock::getNextBlockId() const {
    return nextBlockId;
}

void DataBlock::setNextBlockId(int *nextBlockId) {
    DataBlock::nextBlockId = nextBlockId;
}

unsigned int *DataBlock::getDataSectionSize() const {
    return dataSectionSize;
}

void DataBlock::setDataSectionSize(unsigned int *dataSectionSize) {
    DataBlock::dataSectionSize = dataSectionSize;
}

char *DataBlock::getDataSection() const {
    return dataSection;
}

void DataBlock::setDataSection(char *dataSection) {
    DataBlock::dataSection = dataSection;
}
