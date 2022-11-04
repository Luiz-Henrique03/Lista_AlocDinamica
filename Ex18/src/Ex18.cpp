#include <iostream>
#include "Ex18.h"

using namespace std;


void Inicializavetor1024Kbytes(int *vet){
      vet = new int[256];
}

void InicializaMatriz(int **matriz){
      matriz = new int*[10];
    	for(int i =0; i < 10; i++){
		matriz[i] = new int[10];
	} 
}

void InicializaProdutos(Produto *arrayProdutos){
     arrayProdutos = new Produto[30];
}

void InicializaChar(char **texto){
    texto = new char*[100];
    for(int i =0; i < 100; i++){
		texto[i] = new char[80];
	} 
}

