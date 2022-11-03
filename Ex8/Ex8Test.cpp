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
}