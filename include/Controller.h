//
// Created by Felix Klauke on 23.04.18.
//

#ifndef ERASMUS_CONTROLLER_H
#define ERASMUS_CONTROLLER_H


#include "DataStorage.h"

class Controller {

public:
    explicit Controller(DataStorage *dataStorage);

protected:
    DataStorage *dataStorage;

};


#endif //ERASMUS_CONTROLLER_H
