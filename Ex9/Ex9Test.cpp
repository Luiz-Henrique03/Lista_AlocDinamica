#include "Ex9.h"
#include <gtest/gtest.h>

TEST(testVetor, testVetor){
    int vetorEsperado = {1,4,5,6,7,-2};

    vector<int> vetor(1);

    PreencheVetor(vetor);

    EXPECT_EQ(vetor,vetorEsperado);

}