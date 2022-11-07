/*Construa um programa que leia o numero de linhas e de colunas de uma matriz de ´
numeros reais, aloque espaço dinamicamente para esta e a inicialize com valores forne- ´
cidos pelo usuario. Ao final, o programa devera retornar a matriz na saída padrao com ˜
layout apropriado.*/

#include <iostream>
#include "Ex14.h"

using namespace std;



int main(){
    int **matriz;
	int numLin, numCol;
	int i, j;
	
	cout << "\nDigite o numero de linhas: ";
	cin >> numLin;
	cout << "Informe o numero de colunas: " << endl;
	cin >> numCol;

	CriaMatriz(matriz,numLin, numCol);
	ImprimeMatriz(matriz,numLin,numCol);



}