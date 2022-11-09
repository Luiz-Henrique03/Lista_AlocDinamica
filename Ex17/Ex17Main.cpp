/*Faça um programa que leia numeros do teclado e os armazene em um vetor alocado 
dinamicamente. O usuario ira digitar uma sequencia de numeros, sem limite de quan- 
tidade. Os numeros serao digitados um a um e, sendo que caso ele deseje encerrar a 
entrada de dados, ele ira digitar o numero ZERO. Os dados devem ser armazenados na 
memoria deste modo 
• Inicie com um vetor de tamanho 10 alocado dinamicamente;
• Apos, caso o vetor alocado esteja cheio, aloque um novo vetor do tamanho do vetor 
anterior adicionado espac¸o para mais 10 valores (tamanho N+10, onde N inicia com
10);
• Copie os valores ja digitados da  area inicial para esta  area maior e libere a memória 
da area inicial; 
• Repita este procedimento de expandir dinamicamente com mais 10 valores o vetor
alocado cada vez que o mesmo estiver cheio. Assim o vetor ira ser ’expandido’ de 
10 em 10 valores.
Ao final, exiba o vetor lido. Nao use a função REALLOC*/

#include <iostream>
#include <stdlib.h>
#include "Ex17.h"
#include <vector>

using namespace std;

int main(){
   vector<int> vetor (10);
  
  realocaVetor(vetor);
   

  cout << "\n---------------------------\n";

  for(int i = 0; i < vetor.size(); i++){
    cout << vetor[i] << endl;
  }
  return 0;
}