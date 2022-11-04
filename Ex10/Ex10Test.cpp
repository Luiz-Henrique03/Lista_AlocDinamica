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
