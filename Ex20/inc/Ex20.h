#include <string>


using namespace std;

struct Coordenadas{
    string Nome;
    int X;
    int Y;
};
void PreencheCoordenadas(Coordenadas *posicao, int tam);
float CalculaDistancia(Coordenadas *posicao, int tam, float *Distancias);
