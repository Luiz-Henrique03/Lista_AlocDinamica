#include <gtest/gtest.h>
#include "Ex1.h"


TEST(testVetor, testVetor){
    int *vet = new int(5),
         vetorEsperado[5] = {0,1,2,3,4};

    Preenche(vet);
    EXPECT_EQ(*vet, *vetorEsperado);

}
