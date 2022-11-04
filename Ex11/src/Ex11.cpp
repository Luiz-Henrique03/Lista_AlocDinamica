#include <iostream>
#include "Ex11.h"
#include <string>

using namespace std;

void Aluno::setNome(string Nome){
    this->Nome = Nome;
}

void Aluno::setMatricula(int Matricula){
    this->Matricula = Matricula;
}

void Aluno::setAnoNascimento(int AnoNascimento){
    this->AnoNascimento = AnoNascimento;
}

string Aluno::getNome(){
    return this->Nome;
}

int Aluno::getMatricula(){
    return this->Matricula;
}

int Aluno::getAnoNascimento(){
    return this->AnoNascimento;
}

void Aluno::PreencheAluno(){
        string Nome;
        int Matricula,
            AnoNascimento;

        cout << "\tNome: ";
        cin >> Nome;

        this->setNome(Nome);

        cout << "\tMatricula: ";
        cin >> Matricula;

        this->setMatricula(Matricula);

        cout << "\tAno que nasceu: ";
        cin >> AnoNascimento;

        this->setAnoNascimento(AnoNascimento);
}

void Aluno::imprimeAluno(){
          cout << this->getNome() << ", nascido em " << this->getAnoNascimento()
               << ", matricula " << this->getMatricula() << endl;
}



