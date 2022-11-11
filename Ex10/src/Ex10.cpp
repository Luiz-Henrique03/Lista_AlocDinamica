#include <iostream>
#include <ctime>
#include "Ex10.h"
#include <stdlib.h>

using namespace std;

void PreenchevetorAletorio(double *vetorValAleatorios){
    for(int i = 0; i < 20; i++){
        vetorValAleatorios[i] = rand() % 100;
    }

}

void PreenchevetorPrincipal(double *vetorPrincipal, double *vetorValAleatorios){
    for(int i = 0; i < 10; i++){
        vetorPrincipal[i] = vetorValAleatorios[i];
    }

}
