#include <iostream>
#include "Ex8.h"

using namespace std;

void Preenche(int *vetor){
  for(int i = 0; i < 1500; i++){
        vetor[i] = i;
    }

}

int* PreencheDezPrimeiros(int *vetor){
    int dezPrimeiros[10] = {};
    for(int i = 0; i < 10; i++){
       cout << vetor[i] <<endl;
       dezPrimeiros[i] = vetor[i];
    }

    return dezPrimeiros;

}


int* PreencheDezUltimos(int *vetor){
    int dezUltimos[10] = {};
    for(int i = 1500; i > 1490; i--){
       cout << vetor[i] <<endl;
       dezUltimos[i - (i-1)] = vetor[i];
    }

    return dezUltimos;

}
