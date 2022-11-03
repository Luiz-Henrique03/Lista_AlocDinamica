/*Faça um programa que receba do usuario o tamanho de uma string e chame uma 
função para alocar dinamicamente essa string. Em seguida, o usuario deverá informar o ´
conteudo dessa string. O programa imprime a string sem suas vogais. */

#include <iostream>
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

}

int main(){
    string *ptr = new string();
    string Palavra = "Computador";
    ptr = &Palavra;

    cout << ImprimesemVogal(Palavra,ptr) << endl;
    
}