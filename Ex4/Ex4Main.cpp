/*Faça um programa que receba do usuario o tamanho de uma string e chame uma 
função para alocar dinamicamente essa string. Em seguida, o usuario deverá informar o ´
conteudo dessa string. O programa imprime a string sem suas vogais. */

#include <iostream>
#include "Ex4.h" 
#include <string>

using namespace std;


int main(){
    string *ptr = new string();
    string Palavra = "Computador";
    ptr = &Palavra;

    cout << ImprimesemVogal(Palavra,ptr) << endl;
    
}