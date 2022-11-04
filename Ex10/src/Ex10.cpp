#include <iostream>
#include <ctime>
#include "Ex10.h"
#include <stdlib.h>

using namespace std;

int main(){

    srand(time(0));
    int Tam;
    double *vetorPrincipal,
            vetorValAleatorios[20] = {};

    cout << "Qual e o tamanho do vetor " << endl;
    cin >> Tam;

    vetorPrincipal = new double(Tam);
    for(int i = 0; i < 20; i++){
        vetorValAleatorios[i] = rand() % 100;
    }

    for(int i = 0; i < 10; i++){
        vetorPrincipal[i] = vetorValAleatorios[i];
    }


  for(int i = 0; i < 10; i++){
       cout << vetorPrincipal[i] << endl;
    }

    
}