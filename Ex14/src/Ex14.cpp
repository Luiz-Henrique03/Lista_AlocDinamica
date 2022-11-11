#include <iostream>

using namespace std;

void CriaMatriz(int **matriz, int numLin, int numCol){
	matriz = new int*[numLin];
	
	for(int i =0; i < numLin; i++){
		matriz[i] = new int[numCol];
	}

	for(int i = 0; i < numLin; i++){
           for(int j = 0; j < numCol; j++){	
			 cout << "Digite o valor da posicao[" << i << j << "]" << endl;
			 cin >> matriz[i][j];
		}
	}

}

void ImprimeMatriz(int **matriz, int numLin, int numCol){

	for(int i =0; i < numLin; i++){
		for(int j =0; i < numCol; j++){
		cout << matriz[i][j] << endl;
	  }
	}

}

