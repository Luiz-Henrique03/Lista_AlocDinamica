#include <iostream>
#include "Ex16.h"

using namespace std;




int main(){
   int **matriz,
         numLin,
         numCol,
       **transposta;

    cout << "Informe o numero de linhas: ";
    cin >> numLin;
    cout << "Informe a qtd de colunas: ";
    cin >> numCol;

    CriaMatriz(matriz,numLin, numCol, transposta);
    Transposta(matriz,numLin, numCol, transposta);

    for(int i = 0; i < numCol; i++){
        for(int j = 0; j < numLin; j++){
             cout << transposta[i][j]; 
        }
    }
}