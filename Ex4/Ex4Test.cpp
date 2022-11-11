/*Faça um programa que receba do usuario o tamanho de uma string e chame uma 
função para alocar dinamicamente essa string. Em seguida, o usuario deverá informar o ´
conteudo dessa string. O programa imprime a string sem suas vogais. */

#include <gtest/gtest.h>
#include "Ex4.h"

int main(){
    string *ptr = new string();
    string Palavra = "Computador",
           PalavraSemvogalEsperada = "Cmptdr";
    ptr = &Palavra;

    string PalavraSemVogal = ImprimesemVogal(Palavra,ptr);
    
    EXPECT_EQ(PalavraSemVogal, PalavraSemvogalEsperada);

    delete  ptr;
}