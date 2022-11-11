/*Faça um programa para armazenar em memoria um vetor de dados contendo 1500 va- ´
lores do tipo int, usando a func¸ao de alocação dinamica de memoria CALLOC: ´
(a) Fac¸a um loop e verifique se o vetor contem realmente os 1500 valores inicializados ´
com zero (conte os 1500 zeros do vetor).
(b) Atribua para cada elemento do vetor o valor do seu ´ındice junto a este vetor.
(c) Exibir na tela os 10 primeiros e os 10 ultimos elementos do vetor. */


#include <gtest/gtest.h>
#include "Ex8.h"

TEST(testvetores10UltimosEprimeiros,testvetores10UltimosEprimeiros){
      int *vetor = new int[1500](),
         *dezUltimos = new int(10),
          dezUltimosEsperados[10] = {0,1,2,3,4,5,6,7,8,9};
         *dezPrimeiros = new int(10),
         dezPrimeirosEsperados[10] = {1499,1498,1497,1496,1495,1494,1493,1492,1491,1490};

    Preenche(vetor);
    
    dezPrimeiros = PreencheDezPrimeiros(vetor);
    dezUltimos = PreencheDezUltimos(vetor);

    EXPECT_EQ(*dezUltimos, *dezUltimosEsperados);
    EXPECT_EQ(*dezPrimeiros, *dezPrimeirosEsperados);

    delete [] vetor;
    delete [] dezUltimos;
    delete [] dezPrimeiros;
}