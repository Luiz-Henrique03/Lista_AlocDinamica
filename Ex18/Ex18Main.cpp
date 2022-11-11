/*Escreva um programa para fazer a alocação dinamica dos blocos de dados conforme ˆ
solicitado abaixo:
(a) Vetor de 1024 Bytes (1 Kbyte).
(b) Matriz de inteiros de dimensao 10 x 10. 
(c) Vetor para armazenar 50 registros contendo: nome do produto (30 caracteres),
codigo do produto (inteiro) e prec¸o em reais. ´
(d) Texto de ate 100 linhas com ate 80 caracteres em cada linha.*/


#include <iostream>
#include "Ex18.h"



int main(){

    int *vet1024;
    Inicializavetor1024Kbytes(vet1024);

    int **matriz;

    InicializaMatriz(matriz); 

    Produto *arrayProdutos;
    InicializaProdutos(arrayProdutos);


    char **Texto;
    InicializaChar(Texto);

    delete [] vet1024;
    delete [] matriz;
    delete [] arrayProdutos;
    delete [] Texto;

}