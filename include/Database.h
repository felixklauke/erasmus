//
// Created by Felix Klauke on 21.04.18.
//

#ifndef ERASMUS_DATABASE_H
#define ERASMUS_DATABASE_H


#include "DataStorage.h"
#include "IndexController.h"
#include "DataController.h"

class Database {

public:
    explicit Database(const std::string &fileName);

    virtual ~Database();

private:
    IndexController *indexController;
    DataController *dataController;

};


#endif //ERASMUS_DATABASE_H
