#include <string>

using namespace std;

class Aluno{
  protected:
     string Nome;
     int Matricula;
     int AnoNascimento;
  public:
      void PreencheAluno();
      void imprimeAluno();
      void setNome(string Nome);
      string getNome();
      void setMatricula(int Matricula);
      int getMatricula();
      void setAnoNascimento(int AnoNascimento);
      int getAnoNascimento();
      
};