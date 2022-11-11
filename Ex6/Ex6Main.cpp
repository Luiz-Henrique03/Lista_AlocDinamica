#include <iostream>
#include "Ex6.h"

using namespace std;


int main(){
    int tam, 
        esc;
    int *Memoria;
    cout << "Digite o tamanho de memoria ser alocado ";
    cin >> tam;
    Memoria = new int[1024 / sizeof(tam)]();

    while(esc != 3){
        cout << "1 - Inserir valor" << endl;
        cout << "2 - Buscar valor" << endl;
        cout << "3 - Sair" << endl; 
        cin >> esc;

        switch (esc)
        {
        case 1:
            int local;
            cout << "Digite o local ser inserido na memoria ";
            cin >> local;
            int num;
            cout << "Digite o numero a ser inserido na memoria ";
            cin >> num;
            Insere(Memoria,local,num);         
        break;
        case 2:
            int local;
            cout << "Digite o local ser buscado a informacacao na memoria ";
            cin >> local;
            BuscaValor(Memoria,local);   
        default:
            break;
        }
    }

    delete  Memoria;
    
}