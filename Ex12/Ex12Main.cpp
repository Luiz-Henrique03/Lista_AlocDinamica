#include <iostream>
#include "Ex12.h"
#include <string>

using namespace std;


int main(){
    int n;
    Produto *arrayProdutos;

    cout << "Digite quantos alunos serao cadastrados: " << endl;
    cin >> n;

    arrayProdutos = new Produto[n];


    cout << "Preencha as informacoes de cada produto " << endl;
    for(int i =0; i < n; i++){
        cout << "Cadastrando Aluno " << i << endl;
        arrayProdutos[i].Cadastro();
    }

    cout << arrayProdutos->MaiorPreco(arrayProdutos,n);
    cout << arrayProdutos->MaiorEstoque(arrayProdutos,n);
}

