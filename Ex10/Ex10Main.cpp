/*Faça um programa que pergunte ao usuario quantos valores ele deseja armazenar em 
um vetor de double, depois use a função MALLOC para reservar (alocar) o espac¸o de 
memoria de acordo com o especificado pelo usuário. Esse vetor deve ter um tamanho 
maior ou igual a 10 elementos. Use este vetor dinamico como um vetor comum, atri- 
buindo aos 10 primeiros elementos do vetor valores aleatorios (usando a função rand)
entre 0 e 100. Exiba na tela os valores armazenados nos 10 primeiros elementos do
vetor*/

#include <iostream>
#include <ctime>
#include "Ex10.h"
#include <stdlib.h>

using namespace std;

void PreenchevetorAletorio(double *vetorValAleatorios){
    for(int i = 0; i < 20; i++){
        vetorValAleatorios[i] = rand() % 100;
    }
}

void PreenchevetorPrincipal(double *vetorPrincipal, double *vetorValAleatorios){
    for(int i = 0; i < 10; i++){
        vetorPrincipal[i] = vetorValAleatorios[i];
    }
}

int main(){

    srand(time(0));
    int Tam;
    double *vetorPrincipal,
            vetorValAleatorios[20] = {};

    cout << "Qual e o tamanho do vetor " << endl;
    cin >> Tam;

    vetorPrincipal = new double(Tam);

   PreenchevetorAletorio(vetorValAleatorios);
   PreenchevetorPrincipal(vetorPrincipal, vetorValAleatorios);
  for(int i = 0; i < 10; i++){
       cout << vetorPrincipal[i] << endl;
    }

    
}