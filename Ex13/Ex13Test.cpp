/*Escreva um programa que aloque dinamicamente uma matriz (de inteiros) de dimensoes 
definidas pelo usuario e a leia. Em seguida, implemente uma função que receba um 
valor, retorne 1 caso o valor esteja na matriz ou retorne 0 caso nao esteja na matriz*/

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
	cin  >> ElementoaserProcurado;
		
	EXPECT_EQ(estaContido(j, matriz, numLin, numCol), EstaContido);

	delete [] matriz;

	if (numLin) delete [] matriz[0];
    delete [] matriz;

}