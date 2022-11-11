#include <iostream>
#include <string>

using namespace std;

void PreencheNomes(string *nomes, int tam){
    for(int i = 0; i < tam; i++){
        cout << "Digite o nome: " << endl;
        cin >> nomes[i];
    }

}

void Deleta(string *nomes){
    int deleta = 0;
    cout << "Digite o indice que voce deseja excluir: " << endl;
    cin >> deleta;
    nomes[deleta].clear();

}

void Substitui(string *nomes, int substitui){

    nomes[substitui].replace(0,nomes[substitui].length(),"Neymar");


}

void ImprimeNome(string *nomes){
    int Imprime = 0;
    string NovoNome;
    cout << "Digite o indice que voce deseja visualizar: " << endl;
    cin >> Imprime;
    cout << "Digite o nome nome a ser cadastrado: " << endl;
    cin >> NovoNome;
    nomes[Imprime].replace(0,nomes[Imprime].length(),NovoNome);


}

