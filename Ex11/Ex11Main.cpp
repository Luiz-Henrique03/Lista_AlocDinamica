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

