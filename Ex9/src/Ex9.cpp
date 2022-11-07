#include <iostream>
#include "Ex9.h"
#include <vector>

using namespace std;

void PreencheVetor(vector<int>& vetor){
  int num,
     cont = 0;
     
   vector<int>vetor;
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

