class Produto{
  protected:
     string Nome;
     int Codigo;
     int QtdEstoque;
     float Preco;
  public:
      void setNome(string Nome);
      string getNome();
      void setCodigo(int Codigo);
      int getCodigo();
      void setQtdEstoque(int QtdEstoque);
      int getQtdEstoque();
      void setPreco(float Preco);
      float getPreco();
      void Cadastro();
      float MaiorPreco(Produto *produtos, int n);
      int MaiorEstoque(Produto *produtos, int n);
};


void Inicializavetor1024Kbytes(int *vet);
void InicializaMatriz(int **matriz);
void InicializaProdutos(Produto *arrayProdutos);
void InicializaChar(char **texto);