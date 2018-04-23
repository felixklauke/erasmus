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

    char *Get(std::string key);

    void Save(std::string key, char *data);

    void Remove(std::string key);

private:
    IndexController *indexController;

    DataController *dataController;

};


#endif //ERASMUS_DATABASE_H
