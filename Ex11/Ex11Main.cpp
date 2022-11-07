/*Crie um programa que declare uma estrutura (registro) para o cadastro de alunos.
(a) Deverao ser armazenados, para cada aluno: matricula, sobrenome (apenas um) e
ano de nascimento.
(b) Ao inıcio do programa, o usuario deverá informar o numero de alunos que serão
armazenados
(c) O programa devera alocar dinamicamente a quantidade necessária de memoria 
para armazenar os registros dos alunos.
(d) O programa devera pedir ao usuário que entre com as informaçõees dos alunos. ˜
(e) Ao final, mostrar os dados armazenados e liberar a memoria alocada.*/

#include <iostream>
#include "Ex11.h"
#include <string>

using namespace std;



int main(){
    int n;
    Aluno *arrayAlunos;

    cout << "Digite quantos alunos serao cadastrados: " << endl;
    cin >> n;

    arrayAlunos = new Aluno[n];

    cout << "Preencha as informacoes de cada aluno " << endl;
    for(int i =0; i < n; i++){
        cout << "Cadastrando Aluno " << i << endl;
        arrayAlunos[i].PreencheAluno();
    }

    cout << "\nAlunos da escola: " << endl;
    for(int i = 0; i < n; i++){
        arrayAlunos[i].imprimeAluno();
    }

    delete [] arrayAlunos;

    return 0;

}

