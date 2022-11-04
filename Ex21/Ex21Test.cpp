#include <gtest/gtest.h>
#include "Ex21.h"

TEST(testProdutoMatriz, testProdutoMatriz){
  int Matriz[2][2] = {{1,2},{2,4}},
        MatrizProd[2][2],
        Matriz1[2][2] = {{4,6},{8,8}},

    float ProdutoTotalEsperado = 64;

    EXPECT_EQ(Produto(Matriz,Matriz1,MatrizProd),ProdutoTotalEsperado);

}
  