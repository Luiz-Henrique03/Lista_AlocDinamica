/* Considere um cadastro de produtos de um estoque, com as seguintes informações para ˜
cada produto:
• Codigo de identificação do produto: representado por um valor inteiro ˜
• Nome do produto: com ate 50 caracteres ´
• Quantidade dispon´ıvel no estoque: representado por um numero inteiro ´
• Prec¸o de venda: representado por um valor real
(a) Defina uma estrutura, denominada produto, que tenha os campos apropriados para
guardar as informac¸oes de um produto ˜
(b) Crie um conjunto de N produtos (N e um valor fornecido pelo usuario) e peça ao ´
usuario para entrar com as informações de cada produto ˜
(c) Encontre o produto com o maior prec¸o de venda
(d) Encontre o produto com a maior quantidade dispon´ıvel no estoque*/


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

