//
// Created by Felix Klauke on 15.03.18.
//

#include <ios>
#include "DataStorage.h"

DataStorage::DataStorage(std::string fileName) {
    input = new std::ifstream(fileName, std::ifstream::binary);
    output = new std::ofstream(fileName, std::ofstream::binary);
}

DataStorage::~DataStorage() {
    delete(input);
    delete(output);
}

void DataStorage::ReadBlock(uint position, uint length, char buffer[]) {
    input->seekg(position);
    input->read(buffer, length);
}

void DataStorage::WriteBlock(uint position, uint length, char buffer[]) {
    output->seekp(position);
    output->write(buffer, length);
    output->flush();
}



