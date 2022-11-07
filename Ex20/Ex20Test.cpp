/*Faça um programa que:
(a) Peça para o usuario entrar com o nome e a posição (coordenadas X e Y) de N 
cidades e as armazene em um vetor de estruturas (N e informado pelo usuário); 
(b) Crie uma matriz de distancias entre cidades de tamanho N x N; 
(c) Calcule as distancia entre cada duas cidades e armazene na matriz; 
(d) Exiba na tela a matriz de distancias obtida; 
(e) Quando o usuario dig
*/



#include <gtest/gtest.h>
#include "Ex20.h"

TEST(testCalculadistancia, testCalculadistancia){
    int tam;
    Coordenadas *posicao[2];
    posicao[0].X = 10;
    posicao[0].Y = 20;
    posicao[1].X = 20;
    posicao[1].Y = 10;
    
    float Distancias[] = {};

    PreencheCoordenadas(posicao,2);
    EXPECT_EQ(CalculaDistancia(posicao,tam,Distancias),202.78);
    

}