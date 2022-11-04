#include "Ex18.h"
#include <gtest/gtest.h>

TEST(testvetor1024Bytes,testvetor1024Bytes){
    int *vet1024,
         *vetTest = new int[256];

    Inicializavetor1024Kbytes(vet1024);

    EXPECT_EQ(sizeof(vet1024), sizeof(vetTest));
}