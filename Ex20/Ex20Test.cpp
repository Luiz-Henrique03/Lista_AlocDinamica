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