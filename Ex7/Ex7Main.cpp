#include <iostream>
#include "Ex7.h"

using namespace std;

int main(){
    const int TAMANHO = 6;
    int NumLoteria[TAMANHO] = {1,21,32,4,68,23};
    int NumBilhete[TAMANHO] = {1,47,20,36,68,64};
    int certos = 0;
    int *Acertos;

    VerificaAcertos(NumLoteria, NumBilhete, TAMANHO, Acertos, &certos);
    Imprime(Acertos,certos);

}