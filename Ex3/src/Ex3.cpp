#include <iostream>
#include "Ex3.h"

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


void QuantidadeImparPar(int *vet, int *QtdImpar, int *QtdPar){
 for(int i = 0; i < 6; i++){
    if(vet[i] % 2 == 0){
      *QtdPar++;
    }else{
      *QtdImpar++;
    }
  }

}
