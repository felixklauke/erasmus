//
// Created by Felix Klauke on 23.04.18.
//

#ifndef ERASMUS_DATACONTROLLER_H
#define ERASMUS_DATACONTROLLER_H


#include "Controller.h"
#include "IndexBlock.h"

class DataController : Controller {

public:
    explicit DataController(DataStorage *dataStorage);

    char *ReadData(std::string key, int keyHash, IndexBlock *index);
};


#endif //ERASMUS_DATACONTROLLER_H
