/*Faça um programa que leia quatro numeros a, b, c e d, que serao as dimensões de duas ˜
matrizes, e:
• Crie e leia uma matriz, dadas as dimensoes dela; ˜
• Crie e construa uma matriz que seja o produto de duas matrizes. Na sua função
main(), imprima as duas matrizes e o produto entre elas, se existir.
*/

#include <iostream>
#include "Ex21.h"

using namespace std;



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
    float produtoTotal = Produto(Matriz, Matriz1, MatrizProd);

    

    cout << produtoTotal;
}