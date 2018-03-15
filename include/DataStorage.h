//
// Created by Felix Klauke on 15.03.18.
//

#ifndef ERASMUS_DATASTORAGE_H
#define ERASMUS_DATASTORAGE_H

#include <string>
#include <fstream>

class DataStorage {

public:
    explicit DataStorage(std::string fileName);

    virtual ~DataStorage();

    void ReadBlock(uint position, uint length, char buffer[]);

    void WriteBlock(uint position, uint length, char buffer[]);

private:
    std::ifstream *input;

    std::ofstream *output;
};


#endif //ERASMUS_DATASTORAGE_H
