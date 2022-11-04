#include <iostream>
#include <stdlib.h>
#include "Ex17.h"
#include <vector>

using namespace std;

int main(){
   vector<int> vetor (10);
  
  realocaVetor(vetor);
   

  cout << "\n---------------------------\n";

  for(int i = 0; i < vetor.size(); i++){
    cout << vetor[i] << endl;
  }
  return 0;
}