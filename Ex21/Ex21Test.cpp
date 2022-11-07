/*Faça um programa que leia quatro numeros a, b, c e d, que serao as dimensões de duas ˜
matrizes, e:
• Crie e leia uma matriz, dadas as dimensoes dela; ˜
• Crie e construa uma matriz que seja o produto de duas matrizes. Na sua func¸ao˜
main(), imprima as duas matrizes e o produto entre elas, se existir.
*/


#include <gtest/gtest.h>
#include "Ex21.h"

TEST(testProdutoMatriz, testProdutoMatriz){
  int Matriz[2][2] = {{1,2},{2,4}},
        MatrizProd[2][2],
        Matriz1[2][2] = {{4,6},{8,8}},

    float ProdutoTotalEsperado = 64;

    EXPECT_EQ(Produto(Matriz,Matriz1,MatrizProd),ProdutoTotalEsperado);

}
  