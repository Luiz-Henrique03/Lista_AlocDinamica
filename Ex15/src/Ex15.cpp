#include <iostream>
#include "Ex15.h"

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

void Maiores(int **matriz, int numLin, int numCol, int *maiores){
      int  cont = 0;
    for(int i = 1; i < numLin; i++){
        for(int j = 1; j < numCol; j++){
                int maior = 0;
                if(maior < matriz[i][j]){
                    maior = matriz[i][j];
                    maiores[cont] = maior;
                    cont++;
              }
        }
    }
}


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