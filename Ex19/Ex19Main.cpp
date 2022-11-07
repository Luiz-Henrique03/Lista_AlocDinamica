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


#include <iostream>
#include "Ex19.h"
#include <string>

using namespace std;


int main(){
    int Tam,
        esc;

    cout << "Digite o Tamanho o vetor de caraceter: " << endl;
    cin >> Tam;

    string nomes[Tam];
    PreencheNomes(nomes,Tam);

    while(esc != 4){
        cout << "1 - Imprime nome de acordo com indice" << endl;
        cout << "2 - Deleta nome" << endl;
        cout << "3 - Substitui nome" << endl;

        cin >> esc;

        switch(esc){
            case 1:
               ImprimeNome(nomes);
               break;
            case 2:
               Deleta(nomes);
               break;
            case 3:
                int substitui = 0;
                cout << "Digite o indice que voce deseja excluir: " << endl;
                 cin >> substitui;
                Substitui(nomes,substitui);
               break;
            default:
               return 0;
        }    
    
    }


}