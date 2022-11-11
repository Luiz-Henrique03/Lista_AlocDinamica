/*Escreva um programa que leia primeiro os 6 numeros gerados pela loteria e depois os 6 ´
numeros do seu bilhete. O programa entao compara quantos números o jogador acertou. ´
Em seguida, ele aloca espaço para um vetor de tamanho igual a quantidade de numeros ´
corretos e guarda os numeros corretos nesse vetor. Finalmente, o programa exibe os ´
numeros sorteados e os seus numeros corretos*/

#include <gtest/gtest.h>
#include "Ex7.h"

TEST(testVerificaAcertos, testVerificaAcertos){
    const int TAMANHO = 6,
              QtdCertosEsperada = 2,
              vetorEsperado = {1,68};

    int NumLoteria[TAMANHO] = {1,21,32,4,68,23};
    int NumBilhete[TAMANHO] = {1,47,20,36,68,64};
    int certos = 0;
    int *Acertos;

    VerificaAcertos(NumLoteria, NumBilhete, TAMANHO, Acertos, &certos);
    EXPECT_EQ(certos,QtdCertosEsperada);
    EXPECT_EQ(*Acertos,*vetorEsperado);

    delete  Acertos;
}