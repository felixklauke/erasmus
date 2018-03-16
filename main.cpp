#include <iostream>
#include <DataStorage.h>

int main() {
    auto dataStorage = DataStorage("test.bin");

    std::string name = "Felix";
    char bytes[name.length()];
    strncpy(bytes, name.c_str(), sizeof(bytes));

    printf("Written: %s\n", bytes);

    dataStorage.WriteBlockAndFlushOutput(0, sizeof(bytes), bytes);

    char result[name.length()];

    dataStorage.ReadBlock(0, sizeof(result), result);

    printf("Read: %s\n", result);
}