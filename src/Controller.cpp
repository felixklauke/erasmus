//
// Created by Felix Klauke on 23.04.18.
//

#include "Controller.h"

Controller::Controller(DataStorage *dataStorage) : dataStorage(dataStorage) {

}

Controller::~Controller() {
    delete (&dataStorage);
}
