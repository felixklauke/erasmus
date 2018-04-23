//
// Created by Felix Klauke on 23.04.18.
//

#ifndef ERASMUS_INDEXBLOCK_H
#define ERASMUS_INDEXBLOCK_H


class IndexBlock {
public:
    IndexBlock(int keyHash, int dataBlockId);

public:

private:
    int keyHash;
    int dataBlockId;

};


#endif //ERASMUS_INDEXBLOCK_H
