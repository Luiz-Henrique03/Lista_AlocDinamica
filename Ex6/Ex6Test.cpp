#include <gtest/gtest.h>
#include "Ex6.h"

TEST(testBuscaValor,testBuscaValor){
     int *Memoria = new int[4]();
     int local = 1,
         num = 10;

    Insere(Memoria, local, num);
    EXPECT_EQ(BuscaValor(Memoria,local), 10);

        delete [] Memoria;

    
}