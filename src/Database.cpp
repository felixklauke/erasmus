//
// Created by Felix Klauke on 21.04.18.
//

#include "Database.h"

Database::Database(const std::string &fileName) {
    this->indexController = new IndexController(new DataStorage(fileName + ".data"));
    this->dataController = new DataController(new DataStorage(fileName + ".index"));
}

Database::~Database() {
    delete (&indexController);
    delete (&dataController);
}

