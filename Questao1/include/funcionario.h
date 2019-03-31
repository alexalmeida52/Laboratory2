#ifndef __FUNCIONARIO_H__
#define __FUNCIONARIO_H__
#include <string>
using namespace std;
class Funcionario{
  private:
    string nome;
    float salario;
    string data;
    string empresa;
  public:  
    static int total_funcionarios;
    static int getTotalFuncionarios();
    Funcionario(string name, float salary, string date, string empresa);
    string getNome();
    float getSalario();
    string getData();
    string setNome(string name);
    float setSalario(float salary);
    string setData(string date);
    
};

#endif