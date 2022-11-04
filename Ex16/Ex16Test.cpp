#include <gtest/gtest.h>
#include "Ex16.h"

TEST(testTransposta, testTransposta){
    int matriz[3][2] = {{1,3},{5,4},{2,7}}, 
        **transposta;
        TranspostaEsperada[2][3] = [{5,4,3}, {6,7,8}];

    Transposta(matriz,3,2,transposta);
    EXPECT_EQ(**transposta, **TranspostaEsperada);
}