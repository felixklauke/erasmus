#include <iostream>
#include <DataStorage.h>
#include <DataManager.h>

int main() {
    auto dataStorage = DataStorage("test.bin");
    auto dataManager = DataManager(&dataStorage, 128);

    std::string name = "Felix";
    char bytes[name.length()];
    strncpy(bytes, name.c_str(), sizeof(bytes));

    printf("Written: %s\n", bytes);

    DataBlock dataBlock = DataBlock(0, -1, sizeof(bytes), bytes);

    printf("Data Block created\n");

    dataManager.WriteDataBlock(dataBlock);

    printf("Data Block written\n");

    dataBlock = dataManager.ReadDataBlock(0);

    printf("Data Block read\n");

    printf("Read: %s\n", dataBlock.GetDataSection());

    /*printf("Written: %s\n", bytes);

    dataStorage.WriteBlockAndFlushOutput(0, sizeof(bytes), bytes);

    char result[name.length()];

    dataStorage.ReadBlock(0, sizeof(result), result);

    printf("Read: %s\n", result);*/
}