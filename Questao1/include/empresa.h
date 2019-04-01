#ifndef __EMPRESA_H__
#define __EMPRESA_H__
#include <string>
using namespace std;
class Empresa{
  private:
    string nome;
    float cnpj;
    string funcionarios[5];
    int total_funcionarios=0;
  public:  
    static int total_empresas;
    static int getTotalEmpresas();
    Empresa(string nome, float cnpj);
    string getNome();
    float getCnpj();
    void setNome(string name);
    void setCnpj(float cnpj);
    void setFuncionario( string name);
    void getFuncionarios();
    int getQtdFuncionarios();
};

#endif