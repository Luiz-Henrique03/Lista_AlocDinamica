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
               Substitui(nomes);
               break;
            default:
               return 0;
        }    
    
    }


}