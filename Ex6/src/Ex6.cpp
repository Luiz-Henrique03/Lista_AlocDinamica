#include <iostream>
#include "Ex6.h"

using namespace std;

void Insere(int *Memoria, int Local, int num){

    Memoria[Local] = num;

}

int BuscaValor(int *Memoria, int Local){
    return Memoria[Local];

    delete  Memoria;
}