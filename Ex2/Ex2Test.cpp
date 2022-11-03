#include <gtest/gtest.h>
#include "Ex2.h"

TEST(testVetor,testVetor){
    const int TAMANHO = 6;
    int *vetor = new int(TAMANHO),
         vetor[6] = {0,1,2,3,4,5};

    Preenche(vetor);
    EXPECT_EQ(*vetor, *vetor);

}