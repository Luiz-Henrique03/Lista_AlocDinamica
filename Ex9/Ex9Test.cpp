/*Faça um programa que leia uma quantidade qualquer de numeros armazenando-os na ´
memoria e pare a leitura quando o usuario entrar um numero negativo. Em seguida, ´
imprima o vetor lido. Use a função REALLOC.*/

#include "Ex9.h"
#include <gtest/gtest.h>

TEST(testVetor, testVetor){
    int vetorEsperado = {1,4,5,6,7,-2};

    vector<int> vetor(1);

    PreencheVetor(vetor);

    EXPECT_EQ(vetor,vetorEsperado);

}