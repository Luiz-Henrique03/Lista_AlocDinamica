/*Faça um programa que leia do usuario o tamanho de um vetor a ser lido e fac¸a a alocac¸ ´ ao˜
dinamica de memoria. Em seguida, leia do usuário seus valores e mostre quantos dos ´
numeros sao pares e quantos são ımpares.*/

#include <iostream>
#include "Ex2.h"

using namespace std;


int main(){
    const int TAMANHO = 6
    int *vetor = new int(TAMANHO),
         QtdImpar = 0,
         QtdPar = 0;

    Preenche(vetor);
    ListaVetor(vetor);
    QuantidadeImparPar(vetor,&QtdImpar,QtdPar);

    cout << QtdImpar << " " << QtdPar;

}
