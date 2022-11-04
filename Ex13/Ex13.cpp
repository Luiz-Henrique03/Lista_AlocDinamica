#include <iostream>
#include <stdlib.h>

using namespace std;

int estaContido(int elemento, int **matriz, int numLin, int numCol) {
	int i, j;
	
	for(i=0; i<numLin; i++) {
		for(j=0; j<numCol; j++) 
			if (matriz[i][j] == elemento)
				return 1;
	}
	
	return 0;
}

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