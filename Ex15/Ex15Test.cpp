/*Faça um programa que leia dois numeros N e M e: ´
• Crie e leia uma matriz de inteiros N x M;
• Localize os tres maiores numeros de uma matriz e mostre a linha e a coluna onde ´
estao. */

#include <iostream>
#include <gtest/gtest.h>
#include "Ex15.h"

TEST(testMaiores, testMaiores){
    int matriz[2][2] = {{1,3},{5,4}}, 
         *maiores,
          maioresEsperado[3] = [5,4,3];
	maiores = new int[3];


   Maiores(matriz,2,2,maiores);

   EXPECT_EQ(*maiores,*maioresEsperado);

}