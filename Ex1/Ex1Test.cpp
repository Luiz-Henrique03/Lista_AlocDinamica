/*1. Crie um programa que:
(a) Aloque dinamicamente um array de 5 numeros inteiros, ´
(b) Peça para o usuario digitar os 5 numeros no espaço alocado, ´
(c) Mostre na tela os 5 numeros, ´
(d) Libere a memoria alocada.*/

#include <gtest/gtest.h>
#include "Ex1.h"


TEST(testVetor, testVetor){
    int *vet = new int(5),
         vetorEsperado[5] = {0,1,2,3,4};

    Preenche(vet);
    EXPECT_EQ(*vet, *vetorEsperado);

    delete [] vet;

}
