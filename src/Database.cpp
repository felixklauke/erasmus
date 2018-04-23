//
// Created by Felix Klauke on 21.04.18.
//

#include "Database.h"

Database::Database(const std::string &fileName) {
    this->indexController = new IndexController(new DataStorage(fileName + ".data"));
    this->dataController = new DataController(new DataStorage(fileName + ".index"));

    indexController->LoadIndices();
}

Database::~Database() {
    delete (&indexController);
    delete (&dataController);
}

char *Database::Get(std::string key) {
    int keyHash = static_cast<int>(stringHasher(key));
    IndexBlock *indexBlock = indexController->GetIndex(keyHash);

    return dataController->ReadData(key, keyHash, indexBlock);
}

void Database::Save(std::string key, char *data) {

}

void Database::Remove(std::string key) {

}

