#include <iostream>
#include "Ex12.h"
#include <string>

using namespace std;



TEST(testMaiorEstoque,testMaiorEstoque){
    int n;
    Produto arrayProdutos[2] = {};
    float MaiorPreco,
          MaiorPrecoEsperado = 50.90


    arrayProdutos[0].setNome("Mouse");
    arrayProdutos[0].setPreco(50.90);

    arrayProdutos[1].setNome("Cx.de Som");
    arrayProdutos[1].setPreco(20);

    MaiorPreco = arrayProdutos->MaiorPreco(arrayProdutos,2);
    

    EXPECT_EQ(MaiorPreco, MaiorPrecoEsperado);

}