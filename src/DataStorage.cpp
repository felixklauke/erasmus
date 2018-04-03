//
// Created by Felix Klauke on 15.03.18.
//

#include <ios>
#include <iostream>
#include "DataStorage.h"

DataStorage::DataStorage(std::string fileName) {
    input = new std::ifstream(fileName, std::ifstream::in);
    output = new std::ofstream(fileName, std::ofstream::out);
}

DataStorage::~DataStorage() {
    delete(input);
    delete(output);
}

void DataStorage::ReadBlock(uint position, uint length, char *buffer) {
    std::cout << "[IO] Reading block of " << length << " bytes at position " << position << std::endl;

    input->sync();
    input->seekg(position);
    input->read(buffer, length);

    std::streamsize bytesRead = input->gcount();
    std::cout << "[IO] Read " << bytesRead << " bytes." << std::endl;
}

void DataStorage::WriteBlock(uint position, uint length, char *buffer) {
    std::cout << "[IO] Writing block of " << length << " bytes at position " << position << std::endl;

    output->seekp(position);
    output->write(buffer, length);

    size_t currentPosition = output->tellp();
    size_t bytesWritten = currentPosition - position;
    std::cout << "Written " << bytesWritten << " bytes." << std::endl;
}

void DataStorage::WriteBlockAndFlushOutput(uint position, uint length, char *buffer) {
    WriteBlock(position, length, buffer);
    FlushOutput();
}

void DataStorage::FlushOutput() {
    output->flush();
}



