#include <iostream>
#include "Ex5.h"

using namespace std;

void PreencheVetor(int *vetor, int tamanhovetor){
   for(int i = 0; i < tamanhovetor; i++){
      vetor[i] = i;
   }

}

int QtdMultiplo(int *vetor, int tamanhovetor, int X){
    int QtdMultiplo = 0;
   for(int i = 1; i < tamanhovetor; i++){
      if(vetor[i] % X == 0){
        cout << vetor[i] << endl;
        QtdMultiplo++;
      }
   }

}
