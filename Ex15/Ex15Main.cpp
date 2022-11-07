/*Faça um programa que leia dois numeros N e M e: ´
• Crie e leia uma matriz de inteiros N x M;
• Localize os tres maiores numeros de uma matriz e mostre a linha e a coluna onde ´
estao. */

#include <iostream>
#include "Ex15.h"

using namespace std;

int main(){
    int **matriz, *maiores;
	int N, M;

    maiores = new int[3];

    cout << "\nDigite o numero de linhas: ";
	cin >> N;
	cout << "Informe o numero de colunas: ";
	cin >> M;

    CriaMatriz(matriz, N, M);
    Maiores(matriz,N,M,maiores);

    cout << maiores[0] << " " <<maiores[1] << " " <<maiores[2];



}