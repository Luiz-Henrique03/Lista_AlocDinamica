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