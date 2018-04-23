//
// Created by Felix Klauke on 23.04.18.
//

#include "IndexController.h"

IndexController::IndexController(DataStorage *dataStorage) : Controller(dataStorage) {
    this->indexContainer = new std::map<int, IndexBlock *>();
}

IndexController::~IndexController() {
    delete (&indexContainer);
    delete (&dataStorage);
}

void IndexController::LoadIndices() {

}

IndexBlock *IndexController::GetIndex(int keyHash) {
    return indexContainer->at(keyHash);
}
