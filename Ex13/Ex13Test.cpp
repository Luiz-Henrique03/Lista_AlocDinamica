#include <gtest/gtest.h>
#include "Ex13.h"

TEST(testEstaContido, testEstaContido){
    int **matriz;
	int numLin, 
        numCol;

    const int EstaContido = 1;
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
		cin >> ElementoaserProcurado;
		
	EXPECT_EQ(estaContido(j, matriz, numLin, numCol), EstaContido);

}