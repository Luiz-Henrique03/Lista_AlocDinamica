/*Faça um programa que leia do usuario o tamanho de um vetor a ser lido e faça a alocacao˜
dinamica de memoria. Em seguida, leia do usuario seus valores e imprima o vetor lido.*/

#include <gtest/gtest.h>
#include "Ex2.h"

TEST(testVetor,testVetor){
    const int TAMANHO = 6;
    int *vetor = new int(TAMANHO),
         vetor[6] = {0,1,2,3,4,5};

    Preenche(vetor);
    EXPECT_EQ(*vetor, *vetor);

}