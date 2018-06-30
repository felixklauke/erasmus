//
// Created by Felix Klauke on 28.06.18.
//

#include <include/FileSystemAccessor.h>
#include "gtest/gtest.h"


class FileSystemAccessorTest : public ::testing::Test {

protected:
    FileSystemAccessor *fileSystemAccessor;

    void SetUp() override {
        std::ofstream o("test.acc");
        fileSystemAccessor = new FileSystemAccessor("test.acc");
    }


    void TearDown() override {
        remove("test.acc");
        delete (fileSystemAccessor);
    }
};

TEST_F(FileSystemAccessorTest, testRead) {
    auto *array = new char[3];
    array[0] = 5;
    array[1] = 8;
    array[2] = 12;
    fileSystemAccessor->Write(0, 3, array);

    auto *result = new char[3];
    fileSystemAccessor->Read(0, 3, result);

    EXPECT_EQ(array[0], result[0]);
    EXPECT_EQ(array[1], result[1]);
    EXPECT_EQ(array[2], result[2]);


    delete (array);
    delete (result);
}