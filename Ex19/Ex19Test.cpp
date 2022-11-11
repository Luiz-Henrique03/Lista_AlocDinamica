/*
Faça um programa para associar nomes as linhas de uma matriz de caracteres. O
usuario ira informar o numero maximo de nomes que poderao ser armazenados. Cada ˜
nome podera ter at ´ e 30 caracteres com o ´ ’\0’. O usuario podera usar 5 opções diferen- ˜
tes para manipular a matriz:
(a) Gravar um nome em uma linha da matriz;
(b) Apagar o nome contido em uma linha da matriz;
(c) Informar um nome, procurar a linha onde ele se encontra e substituir por outro nome;
(d) Informar um nome, procurar a linha onde ele se encontra e apagar;
(e) Pedir para recuperar o nome contido em uma linha da matriz;
*/

#include <gtest/gtest.h>
#include <string>
#include "Ex19.h"

TEST(testSubstituiNome, testSubstituiNome){
   string nomes[2];
   nomes[0] = "Luiz";
   nomes[1] = "Henrique";

   const string NomeEsperado = "Lucas";

   Substitui(nomes,1);
   EXPECT_EQ(nomes[1],NomeEsperado);
}