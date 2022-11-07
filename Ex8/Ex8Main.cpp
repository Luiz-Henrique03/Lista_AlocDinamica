/*Faça um programa para armazenar em memoria um vetor de dados contendo 1500 va- ´
lores do tipo int, usando a func¸ao de alocação dinamica de memoria CALLOC: ´
(a) Fac¸a um loop e verifique se o vetor contem realmente os 1500 valores inicializados ´
com zero (conte os 1500 zeros do vetor).
(b) Atribua para cada elemento do vetor o valor do seu ´ındice junto a este vetor.
(c) Exibir na tela os 10 primeiros e os 10 ultimos elementos do vetor. */

#include <iostream>
#include "Ex8.h"

using namespace std;


int main(){
    int *vetor = new int[1500](),
         *dezUltimos = new int(10),
         *dezPrimeiros = new int(10);

    Preenche(vetor);

    dezPrimeiros = PreencheDezPrimeiros(vetor);
    cout << "-------------------" << endl;
    dezUltimos = PreencheDezUltimos(vetor);
    

}