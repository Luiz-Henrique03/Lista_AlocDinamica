/*Faça um programa que pergunte ao usuario quantos valores ele deseja armazenar em ´
um vetor de double, depois use a função MALLOC para reservar (alocar) o espac¸o de ˜
memoria de acordo com o especificado pelo usuário. Esse vetor deve ter um tamanho ´
maior ou igual a 10 elementos. Use este vetor dinamico como um vetor comum, atri- ˆ
buindo aos 10 primeiros elementos do vetor valores aleatorios (usando a função rand) ˜
entre 0 e 100. Exiba na tela os valores armazenados nos 10 primeiros elementos do
vetor*/

#include <gtest/gtest.h>
#include "Ex10.h"

TEST(testVetorPrincipal, testVetorPrincipal){
    srand(time(0));
    int Tam;
    double *vetorPrincipal,
            vetorValAleatorios[20] = {};

    cout << "Qual e o tamanho do vetor " << endl;
    cin >> Tam;

    vetorPrincipal = new double(Tam);

   PreenchevetorAletorio(vetorValAleatorios);
   PreenchevetorPrincipal(vetorPrincipal, vetorValAleatorios);

   EXPECT_EQ(vetorPrincipal[0], vetorValAleatorios[0]);
   EXPECT_EQ(vetorPrincipal[1], vetorValAleatorios[1]);
   
}
