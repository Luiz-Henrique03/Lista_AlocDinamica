/*Escreva um programa para fazer a alocação dinamica dos blocos de dados conforme ˆ
solicitado abaixo:
(a) Vetor de 1024 Bytes (1 Kbyte).
(b) Matriz de inteiros de dimensao 10 x 10. 
(c) Vetor para armazenar 50 registros contendo: nome do produto (30 caracteres),
codigo do produto (inteiro) e prec¸o em reais. ´
(d) Texto de ate 100 linhas com ate 80 caracteres em cada linha.*/

#include "Ex18.h"
#include <gtest/gtest.h>

TEST(testvetor1024Bytes,testvetor1024Bytes){
    int *vet1024,
         *vetTest = new int[256];

    Inicializavetor1024Kbytes(vet1024);

    EXPECT_EQ(sizeof(vet1024), sizeof(vetTest));

    delete [] vet1024;
    delete [] vetTest;
}