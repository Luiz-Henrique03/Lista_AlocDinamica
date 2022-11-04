#include <iostream>
#include "Ex13.h"
#include <stdlib.h>

using namespace std;



int main() {
	int **matriz;
	int numLin, numCol;
	int i, j, opcao;
	
	cout << "\nDigite o numero de linhas: ";
	cin >> numLin;
	cout << "Informe o numero de colunas: " << endl;
	cin >> numCol;
	
	matriz = new int*[numLin];
	
	for(int i =0; i < numLin; i++){
		matriz[i] = new int[numCol];
	}

		
		cout << "Digite o elemento que deseja procurar na matriz: "<< endl;
		cin>>j;
		
		if(estaContido(j, matriz, numLin, numCol)){
			cout << "O elemento "<< j <<"existe na matriz.\n";
		}else{
			cout << "O elemento "<< j <<" nao existe na matriz.\n";
		}
			
} 