//
// Created by Felix Klauke on 28.06.18.
//

#include <include/FileSystemAccessor.h>
#include "gtest/gtest.h"

TEST(FileSystemAccesor, testRead) {
    FileSystemAccessor *fileSystemAccessor = new FileSystemAccessor("");
    EXPECT_EQ(1, 1);
}