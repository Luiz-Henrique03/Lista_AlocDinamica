#include <iostream>
#include "Ex1.h"

int main(){
    int *vet = new int(5);
    
    Preenche(vet);
    ListaVetor(vet);


    delete vet;
}