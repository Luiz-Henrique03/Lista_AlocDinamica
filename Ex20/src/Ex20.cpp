#include <iostream>
#include <string>
#include "Ex20.h"
#include <cmath>

using namespace std;


void PreencheCoordenadas(Coordenadas *posicao, int tam){
    for(int i = 0; i < tam; i++){
        cout << "Nome: " << endl;
        cin >> posicao->Nome;
        cout << "X: " << endl;
        cin >> posicao->X;
        cout << "Y: " << endl;
        cin >> posicao->Y;
        
    }
}

float CalculaDistancia(Coordenadas *posicao, int tam, float *Distancias){
    float Distancia;    
    for(int i = 0; i < tam; i++){
        Distancia =sqrt((posicao[i].X - posicao[i].Y) + (posicao[i + 1].X - posicao[i + 1].Y));
        Distancias[i] = Distancia;
        cout <<"Distancia de "<<posicao[i].Nome << " Até " << posicao[i + 1].Nome << Distancia; 
    }

    return Distancia;

    delete posicao;
}
