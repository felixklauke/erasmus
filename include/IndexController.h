//
// Created by Felix Klauke on 23.04.18.
//

#ifndef ERASMUS_INDEXCONTROLLER_H
#define ERASMUS_INDEXCONTROLLER_H


#include <map>
#include "Controller.h"
#include "IndexBlock.h"

class IndexController : Controller {

private:
    std::map<int, IndexBlock> *indexContainer;

    virtual ~IndexController();

public:
    explicit IndexController(DataStorage *dataStorage);

    void LoadIndices();
};


#endif //ERASMUS_INDEXCONTROLLER_H
