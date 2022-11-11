#include <iostream>
#include "Ex7.h"

using namespace std;

void VerificaAcertos(int *NumLoteria,int *NumBilhete,int TAMANHO, int *Acertos, int *certos){
     for(int i = 0; i < TAMANHO; i++){
        if(NumLoteria[i] == NumBilhete[i]){
            *certos++;
        }
    }

    Acertos = new int(*certos);

    for(int i = 0; i < TAMANHO; i++){
        if(NumLoteria[i] == NumBilhete[i]){
            *Acertos = NumLoteria[i];
        }
    }


}

void Imprime(int *Acertos, int certos){
    for(int i = 0; i < certos; i++){
        cout << Acertos[i] <<endl;
    }

}

