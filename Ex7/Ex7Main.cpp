/*Escreva um programa que leia primeiro os 6 numeros gerados pela loteria e depois os 6 ´
numeros do seu bilhete. O programa entao compara quantos números o jogador acertou. ´
Em seguida, ele aloca espaço para um vetor de tamanho igual a quantidade de numeros ´
corretos e guarda os numeros corretos nesse vetor. Finalmente, o programa exibe os ´
numeros sorteados e os seus numeros corretos*/

#include <iostream>
#include "Ex7.h"

using namespace std;

int main(){
    const int TAMANHO = 6;
    int NumLoteria[TAMANHO] = {1,21,32,4,68,23};
    int NumBilhete[TAMANHO] = {1,47,20,36,68,64};
    int certos = 0;
    int *Acertos;

    VerificaAcertos(NumLoteria, NumBilhete, TAMANHO, Acertos, &certos);
    Imprime(Acertos,certos);

}