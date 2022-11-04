#include <iostream>

using namespace std;

void criaMatriz(int **matriz,int **matriz1,int a, int b, int c, int d){
     matriz = new int*[a];

	for(int i =0; i < a; i++){
		matriz[i] = new int[b];
	}

    matriz1 = new int*[c];
	
	for(int i =0; i < c; i++){
		matriz1[i] = new int[d];
	}

    cout << "Informe os valores da matriz " <<endl; 
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
              cin >> matriz[i][j];
        }
    }

    for(int i = 0; i < c; i++){
        for(int j = 0; j < d; j++){
              cin >> matriz1[i][j];
        }
    }
}

float Produto(int **matriz,int **matriz1, int **matrizprod){
for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            MatrizProd[i][j] = Matriz[i][j] * Matriz1[i][j];
            produtoTotal += Matriz[i][j] * Matriz1[i][j];
        }
    }
}

int main(){
    int **Matriz,
        **MatrizProd,
        **Matriz1,
        a,
        b,
        c,
        d;

    cout << "Informe os valores de a,b,c,d";
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    

    criaMatriz(Matriz,Matriz1,a,b,c,d);
    float produtoTotal = Produto(Matriz, Matriz1);

    

    cout << produtoTotal;
}