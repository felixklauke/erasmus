//
// Created by Felix Klauke on 27.06.18.
//

#include "FileSystemAccessor.h"

FileSystemAccessor::FileSystemAccessor(std::string fileName) {

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