#include <iostream>
#include "Ex9.h"

using namespace std;

void PreencheVetor(int *vetor){
  int num, cont = 0;
   cout << "Digite valores ou um numero negativo  para sair " <<endl;
    while(num > 0){
        cin >>num;
        vetor[cont] = num;
        if(cont == 0){
            cont++;
        }
        cont++;
        vetor.resize(cont);
    }

}

