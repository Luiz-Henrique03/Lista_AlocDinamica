#include <iostream>
#include "Ex2.h"

using namespace std;

void Preenche(int *vet){
  for(int i = 0; i < 6; i++){
    vet[i] = i;
  }
}

void ListaVetor(int *vet){
 for(int i = 0; i < 6; i++){
    cout << vet[i] << endl;
  }
}
