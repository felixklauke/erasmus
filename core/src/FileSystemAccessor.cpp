//
// Created by Felix Klauke on 27.06.18.
//

#include <string>
#include <FileSystemAccessor.h>

FileSystemAccessor::FileSystemAccessor(std::string fileName) {
    inputStream = new std::ifstream(fileName, std::ifstream::in);
    outputStream = new std::ofstream(fileName, std::ofstream::out);
}

FileSystemAccessor::~FileSystemAccessor() {
    delete (inputStream);
    delete (outputStream);
}

void FileSystemAccessor::Read(int position, int amount, char *byteBuffer) {
    inputStream->sync();
    inputStream->seekg(position);
    inputStream->read(byteBuffer, amount);
}

void FileSystemAccessor::Write(int position, int amount, char *byteBuffer) {
    outputStream->seekp(position);
    outputStream->write(byteBuffer, amount);
    outputStream->flush();
}
