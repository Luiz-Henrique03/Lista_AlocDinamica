#include <gtest/gtest.h>
#include "Ex2.h"

TEST(testVetor,testVetor){
    const int TAMANHO = 6,
            QtdImparEsperado = 3,
            QtdParEspeado = 2;

    int *vetor = new int(TAMANHO),
         QtdImpar = 0,
         QtdPar = 0;

    Preenche(vetor);
    ListaVetor(vetor);
    QuantidadeImparPar(vetor,&QtdImpar,QtdPar);

    EXPECT_EQ(QtdImpar,QtdImparEsperado);
    EXPECT_EQ(QtdPar,QtdParEsperado);
    
}