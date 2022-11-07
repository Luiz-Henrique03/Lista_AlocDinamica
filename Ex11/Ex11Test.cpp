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



TEST(testAluno,testAluno){
    int n;
    Aluno arrayAlunos[1] = {};
    string nome = "Luiz";
    int Matricula = 211665;
    int AnoNascimento = 2003;

    arrayAlunos[0].setNome("Luiz");
    arrayAlunos[0].setMatricula(211665);
    arrayAlunos[0].setAnoNascimento(2003);

    EXPECT_EQ(arrayAlunos[0].getNome(), nome);
    EXPECT_EQ(arrayAlunos[0].getMatricula(),Matricula);
    EXPECT_EQ(arrayAlunos[0].getAnoNascimento(), AnoNascimento);
}