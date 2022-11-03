#include <iostream>

using namespace std;

void Preenche(int *vet){
  for(int i = 0; i < 5; i++){
    vet[i] = i;
  }
}

void ListaVetor(int *vet){
 for(int i = 0; i < 5; i++){
    cout << vet[i] << endl;
  }
}