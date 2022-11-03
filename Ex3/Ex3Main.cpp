#include <iostream>
#include "Ex2.h"

using namespace std;


int main(){
    const int TAMANHO = 6
    int *vetor = new int(TAMANHO),
         QtdImpar = 0,
         QtdPar = 0;

    Preenche(vetor);
    ListaVetor(vetor);
    QuantidadeImparPar(vetor,&QtdImpar,QtdPar);

    cout << QtdImpar << " " << QtdPar;

}
