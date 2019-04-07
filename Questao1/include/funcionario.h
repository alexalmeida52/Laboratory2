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

    // Construtores
    Funcionario();
    Funcionario(const Funcionario &f);
    Funcionario(string n, float s);
    Funcionario(string n, float s, Data d);

    // Getters e Setters
    string getNome();
    float getSalario();
    Data getData();
    void setNome(string n);
    void setSalario(float s);
    void setData(Data d);

    // Métodos
    bool operator== (Funcionario &f1); // Compara se dois funcionários são iguais com ==
};

#endif