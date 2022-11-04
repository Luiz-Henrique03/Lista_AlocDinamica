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