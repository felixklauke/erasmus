//
// Created by Felix Klauke on 16.03.18.
//

#ifndef ERASMUS_DATAMANAGER_H
#define ERASMUS_DATAMANAGER_H


#include "DataStorage.h"
#include "DataBlock.h"

class DataManager {

public:
    explicit DataManager(DataStorage *dataStorage, uint blockSize);

    DataBlock readDataBlock(uint position);

private:
    DataStorage *dataStorage;

    int blockSize;

};


#endif //ERASMUS_DATAMANAGER_H
