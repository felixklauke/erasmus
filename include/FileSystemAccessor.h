//
// Created by Felix Klauke on 27.06.18.
//

#ifndef ERASMUS_FILESYSTEMACCESSOR_H
#define ERASMUS_FILESYSTEMACCESSOR_H


#include <string>
#include <fstream>

/**
 * Providing options for low level file access using an input and an output stream.
 */
class FileSystemAccessor {

public:

    /**
     * Create a new file system accessor by passing the file we want to access under the hood.
     *
     * @param fileName The name / path of the file.
     */
    explicit FileSystemAccessor(std::string fileName);

    /**
     * Read the given amount of bytes beginning from the given position into the given byte array.
     *
     * @param position The position to begin reading at.
     * @param amount The amount of bytes to read.
     * @param byteBuffer The byte array to read the bytes into.
     */
    void Read(int position, int amount, char *byteBuffer);

    /**
     * Write the given amount of bytes from the given byte array beginning at the given position.
     *
     * @param position The position to begin writing.
     * @param amount The amount of bytes to read.
     * @param byteBuffer The byte array of bytes to write.
     */
    void Write(int position, int amount, char *byteBuffer);

private:

    /**
     * The input stream used for reading from the file.
     */
    std::ifstream *inputStream;

    /**
     * The output stream used for writing into the file.
     */
    std::ofstream *outputStream;

};


#endif //ERASMUS_FILESYSTEMACCESSOR_H
