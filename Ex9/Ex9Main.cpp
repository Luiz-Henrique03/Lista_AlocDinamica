/*Faça um programa que leia uma quantidade qualquer de numeros armazenando-os na 
memoria e pare a leitura quando o usuario entrar um numero negativo. Em seguida, 
imprima o vetor lido. Use a função REALLOC.*/

#include <iostream>
#include <vector>
#include "Ex9.h"


using namespace std;



int main(){
  
    vector<int> vetor(1);

    PreencheVetor(vetor);
   
    for(int i = 0; i < sizeof(vetor) / sizeof(int); i++){
        cout << vetor[i] << endl;
    }

    
}