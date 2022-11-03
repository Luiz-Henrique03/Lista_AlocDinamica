#include "Ex5.h"
#include <gtest/gtest.h>

TEST(testQtdMultiplo,testQtdMultiplo){
      const int TAMANHO = 5,
              X = 2,
              QtdMultiploEsperado = 2; 

   int *vetor = new int(TAMANHO);

   PreencheVetor(vetor,TAMANHO);
   EXPECT_EQ(QtdMultiplo(vetor,TAMANHO,X), QtdMultiploEsperado);

}