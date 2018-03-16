//
// Created by Felix Klauke on 16.03.18.
//

#ifndef ERASMUS_DATABLOCK_H
#define ERASMUS_DATABLOCK_H


class DataBlock {
public:
    DataBlock(unsigned int *blockId, int *nextBlockId, unsigned int *dataSectionSize, char *dataSection);

    unsigned int *getBlockId() const;

    void setBlockId(unsigned int *blockId);

    int *getNextBlockId() const;

    void setNextBlockId(int *nextBlockId);

    unsigned int *getDataSectionSize() const;

    void setDataSectionSize(unsigned int *dataSectionSize);

    char *getDataSection() const;

    void setDataSection(char *dataSection);

private:
    unsigned int *blockId;
    int *nextBlockId;
    unsigned int *dataSectionSize;
    char *dataSection;

};


#endif //ERASMUS_DATABLOCK_H
