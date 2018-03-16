//
// Created by Felix Klauke on 16.03.18.
//

#ifndef ERASMUS_DATABLOCK_H
#define ERASMUS_DATABLOCK_H


class DataBlock {
public:
    DataBlock(unsigned int blockId, int nextBlockId, unsigned int dataSectionSize, char dataSection);

    unsigned int GetBlockId() const;

    void SetBlockId(unsigned int blockId);

    int *GetNextBlockId();

    void SetNextBlockId(int nextBlockId);

    unsigned int *GetDataSectionSize();

    void SetDataSectionSize(unsigned int dataSectionSize);

    char *GetDataSection();

    void SetDataSection(char dataSection);

private:
    unsigned int blockId;
    int nextBlockId;
    unsigned int dataSectionSize;
    char dataSection;

};


#endif //ERASMUS_DATABLOCK_H
