#include <iostream>
#include <DataStorage.h>

int main() {
    auto dataStorage = DataStorage("test.txt");
    dataStorage.WriteBlock(0, 12, const_cast<char *>("Felix Klauke"));

    char buffer[12];
    dataStorage.ReadBlock(0, 12, buffer);

    printf(buffer);
}