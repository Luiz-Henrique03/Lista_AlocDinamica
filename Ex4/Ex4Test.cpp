#include <gtest/gtest.h>
#include "Ex4.h"

int main(){
    string *ptr = new string();
    string Palavra = "Computador",
           PalavraSemvogalEsperada = "Cmptdr";
    ptr = &Palavra;

    string PalavraSemVogal = ImprimesemVogal(Palavra,ptr);
    
    EXPECT_EQ(PalavraSemVogal, PalavraSemvogalEsperada);
}