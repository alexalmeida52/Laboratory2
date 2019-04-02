#ifndef __EMPRESA_H__
#define __EMPRESA_H__
#include <string>
#include <ostream>
#include <funcionario.h>

using namespace std;

class Empresa{
  private:
    string nome;
    float cnpj;
    int total_funcionarios=0;
    Funcionario *funcionarios = new Funcionario[10];

  public:  
    static int total_empresas;
    static int getTotalEmpresas();
    Empresa();
    Empresa(string nome, float cnpj);
    ~Empresa();
    string getNome();
    float getCnpj();
    void setNome(string name);
    void setCnpj(float cnpj);
    void setFuncionario(Funcionario &f);
    void getFuncionarios();
    void getFuncionariosPorExperiencia();
    int getQtdFuncionarios();
    void toString();
    void aumentarSalarios(float a);
    void operator+ (Funcionario &f);
    friend std::ostream& operator<< (std::ostream &o, Empresa const &t);

};

#endif