#include <iostream>
#include "Ex16.h"

using namespace std;


void CriaMatriz(int **matriz, int numLin, int numCol,int **transposta){
	matriz = new int*[numLin];
	
	for(int i =0; i < numLin; i++){
		matriz[i] = new int[numCol];
	}

    transposta = new int*[numCol];
    for(int i =0; i < numCol; i++){
		transposta[i] = new int[numLin];
	}

    for(int i = 0; i < numLin; i++){
           for(int j = 0; j < numCol; j++){	
			 cout << "Digite o valor da posicao[" << i << j << "]" << endl;
			 cin >> matriz[i][j];
		}
	}

}

void Transposta(int **matriz, int numLin, int numCol, int **transposta){
    for(int i = 0; i < numLin; i++){
        for(int j = 0; j < numCol; j++){
            transposta[j][i] = matriz[i][j];
        }
    }

}

