/*Faça um programa que:
(a) Peça para o usuario entrar com o nome e a posição (coordenadas X e Y) de N 
cidades e as armazene em um vetor de estruturas (N e informado pelo usuário); 
(b) Crie uma matriz de distancias entre cidades de tamanho N x N; 
(c) Calcule as distancia entre cada duas cidades e armazene na matriz; 
(d) Exiba na tela a matriz de distancias obtida; 
(e) Quando o usuario dig
*/


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