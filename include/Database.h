//
// Created by Felix Klauke on 21.04.18.
//

#ifndef ERASMUS_DATABASE_H
#define ERASMUS_DATABASE_H


#include "DataStorage.h"

class Database {
public:
    Database(DataStorage *dataStorage);

private:
    DataStorage *dataStorage;

};


#endif //ERASMUS_DATABASE_H
