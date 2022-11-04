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
               Substitui(nomes);
               break;
            default:
               return 0;
        }    
    
    }


}