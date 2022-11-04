#include <iostream>
#include <string>
#include "Ex20.h"
#include <cmath>

using namespace std;

int main(){
    int tam;
    Coordenadas *posicao;
    float Distancias[] = {};

    cout << "Digite a quantidade de cidades a serem cadastradas " << endl;
    cin >> tam;

    posicao = new Coordenadas[tam];
    PreencheCoordenadas(posicao,tam);
    CalculaDistancia(posicao,tam,Distancias);
    

}