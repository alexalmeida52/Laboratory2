#ifndef __FUNCIONARIO_H__
#define __FUNCIONARIO_H__
#include <string>
#include <data.h>

using namespace std;

class Funcionario{
  private:
    string nome;
    float salario;
    Data data;

  public:  
    static int total_funcionarios;
    static int getTotalFuncionarios();
    Funcionario();
    Funcionario(const Funcionario &f);
    Funcionario(string n, float s);
    Funcionario(string n, float s, Data d);
    string getNome();
    float getSalario();
    Data getData();
    void setNome(string n);
    void setSalario(float s);
    void setData(Data d);
    void toString();
    bool operator== (Funcionario &f1);
};

#endif