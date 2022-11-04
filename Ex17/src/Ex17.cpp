#include <iostream>
#include <stdlib.h>
#include "Ex17.h"
#include <vector>

using namespace std;

void realocaVetor(vector<int> &vetor){
for(int i = 0; i < vetor.size(); i++){
    cout << "Digite um numero " << endl;
    cin >> vetor[i];
    if(vetor[i] == 0){
        break;
    }
    if(i == (vetor.size() - 1)){
            vetor.resize(vetor.size() + 10);
    }
  }
}
