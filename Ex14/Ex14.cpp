#include <iostream>

using namespace std;

void CriaMatriz(int **matriz, int numLin, int numCol){
	matriz = new int*[numLin];
	
	for(int i =0; i < numLin; i++){
		matriz[i] = new int[numCol];
	}
}

void ImprimeMatriz(int **matriz, int numLin, int numCol){

	for(int i =0; i < numLin; i++){
		for(int j =0; i < numCol; j++){
		cout << matriz[i][j] << endl;
	  }
	}
}

int main(){
    int **matriz;
	int numLin, numCol;
	int i, j, opcao;
	
	cout << "\nDigite o numero de linhas: ";
	cin >> numLin;
	cout << "Informe o numero de colunas: " << endl;
	cin >> numCol;
	


    

}