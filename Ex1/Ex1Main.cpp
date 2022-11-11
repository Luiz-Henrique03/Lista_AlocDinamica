/*1. Crie um programa que:
(a) Aloque dinamicamente um array de 5 numeros inteiros, ´
(b) Peça para o usuario digitar os 5 numeros no espaço alocado, ´
(c) Mostre na tela os 5 numeros, ´
(d) Libere a memoria alocada.*/

#include <iostream>
#include "Ex1.h"

int main(){
    int *vet = new int(5);
    
    Preenche(vet);
    ListaVetor(vet);


    delete [] vet;
}