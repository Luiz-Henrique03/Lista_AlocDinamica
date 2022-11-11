/*Faça um programa que leia do usuario o tamanho de um vetor a ser lido e faça a alocacao˜
dinamica de memoria. Em seguida, leia do usuario seus valores e imprima o vetor lido.*/

#include <iostream>
#include "Ex2.h"

using namespace std;


int main(){
    int TAMANHO;
    int *vetor = new int(TAMANHO);

    Preenche(vetor);
    ListaVetor(vetor);

    delete [] vetor;

}
