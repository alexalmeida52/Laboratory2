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
    static int getTotalEmpresas(); // Retorna o número de empresas cadastradas

    // Construtores
    Empresa();
    Empresa(string nome, float cnpj);
    
    // Destrutor
    ~Empresa(); // Desaloca *funcionarios

    // Getters e Setters
    string getNome();
    float getCnpj();
    void setNome(string name);
    void setCnpj(float cnpj);
    
    // Métodos
    bool setFuncionario(Funcionario &f); // Adiciona um novo funcionário a empresa, e se der certo retorna true
    void getFuncionarios(); // Lista todos os funcionários da empresa
    void getFuncionariosPorExperiencia(); // Lista funcionarios da empresa contratados há menos de 90 dias
    int getQtdFuncionarios(); // Retorna o número de funcionários da empresa
    void aumentarSalarios(float a); // Aumenta o salario de todos os funcionarios da empresa em a%
    void operator+ (Funcionario &f); // Adiciona um funcionário a uma empresa (Sobrecarga do operador +)
    friend std::ostream& operator<< (std::ostream &o, Empresa const &t); // Lista os dados da empresa e de todos os seus funcionários (Sobrecarga do operador <<)



};

#endif