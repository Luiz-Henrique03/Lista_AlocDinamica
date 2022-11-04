#include <iostream>
#include "Ex12.h"
#include <string>

using namespace std;

void Produto::setNome(string Nome){
    this->Nome = Nome;
}

void Produto::setQtdEstoque(int QtdEstoque){
    this->QtdEstoque = QtdEstoque;
}

void Produto::setCodigo(int Codigo){
    this->Codigo = Codigo;
}

void Produto::setPreco(float Preco){
    this->Preco = Preco;
}

string Produto::getNome(){
    return this->Nome;
}

int Produto::getQtdEstoque(){
    return this->QtdEstoque;
}

int Produto::getCodigo(){
    return this->Codigo;
}

float Produto::getPreco(){
    return this->Preco;
}


void Produto::Cadastro(){
        string Nome;
        int QtdEstoque,
            Codigo;

        float Preco;

        cout << "\tNome: ";
        cin >> Nome;
        this->setNome(Nome);

        cout << "\tQtdEstoque: ";
        cin >> QtdEstoque;
        this->setQtdEstoque(QtdEstoque);

        cout << "\tCodigo do produto: ";
        cin >> Codigo;
        this->setCodigo(Codigo);

        cout << "\tPreco do produto: ";
        cin >> Preco;
        this->setPreco(Preco);
}

float Produto::MaiorPreco(Produto *produtos, int n){
     float Maiorpreco;
     Maiorpreco = produtos[0].getPreco();
      for(int i = 0; i < n; i++){
          if(Maiorpreco < produtos[i].getPreco()){
             Maiorpreco = produtos[i].getPreco();
          }
      }

      return Maiorpreco;
}

int Produto::MaiorEstoque(Produto *produtos, int n){
     float Maiorestoque;
     Maiorestoque = produtos[0].getPreco();
      for(int i = 0; i < n; i++){
          if(Maiorestoque < produtos[i].getPreco()){
             Maiorestoque = produtos[i].getPreco();
          }
      }

      return Maiorestoque;
}

