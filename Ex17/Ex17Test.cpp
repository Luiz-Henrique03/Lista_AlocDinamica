#include <gtest/gtest.h>
#include <vector>
#include "Ex17.h"

TEST(testRealoca, testRealoca){
vector<int> vetor (10),
            vetorEsperado(20); 
  
  realocaVetor(vetor);

  EXPECT_EQ(vetor.size(), vetorEsperado.size());
}