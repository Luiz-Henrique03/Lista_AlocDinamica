#include <gtest/gtest.h>
#include "Ex19.h"

TEST(testSubstituiNome, testSubstituiNome){
    string nomes[2];
    nomes[0] = "Luiz";
    nomes[1] = "Henrique";

    const string NomeEsperado = "Lucas";

   Substitui(nomes,1);
   EXPECT_EQ(nomes[1],NomeEsperado);



}