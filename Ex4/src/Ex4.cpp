#include <iostream>
#include "Ex4.h"
#include <string>

using namespace std;

string ImprimesemVogal(string Palavra, string *ptr){
    const int TAMANHO = 11;
    string PalavraSemVolgal = "";
    for(int i = 0;i < TAMANHO; i++){
        for(int j = 0; j < TAMANHO; j++){
           if( ptr[i][j] != 'a' && ptr[i][j] != 'e' && ptr[i][j] != 'i' && ptr[i][j] != 'o' && ptr[i][j] != 'u'){
             PalavraSemVolgal = ptr[i][j];
           }
        }
    }

    return PalavraSemVolgal;

    delete  ptr;

}

