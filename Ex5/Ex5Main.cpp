#include <iostream>
#include "Ex5.h"

using namespace std;



int main(){
  const int TAMANHO = 5,
              X = 2;

   int *vetor = new int(TAMANHO);

   PreencheVetor(vetor,TAMANHO);

   cout << QtdMultiplo(vetor,TAMANHO,X);







}