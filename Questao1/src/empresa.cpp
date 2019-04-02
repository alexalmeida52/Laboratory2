#include "empresa.h"
#include <iostream>
#include <ostream>
#include "funcionario.h"
#include "data.h"
#include "help.h"

// Constructor
Empresa::Empresa(){
}

Empresa::Empresa(string name, float Cnpj){
    nome = name;
    cnpj = Cnpj;
    total_empresas++;
}

// Destructor
Empresa::~Empresa(){
    delete[] funcionarios;
}

// Getters and setters
string Empresa::getNome(){
    return nome;
}

float Empresa::getCnpj(){
    return cnpj;
}

void Empresa::setNome(string name){
    nome = name;
}

void Empresa::setCnpj(float Cnpj){
    cnpj = Cnpj;
}

// Aumenta o salario de todos os funcionarios da empresa em a%
void Empresa::aumentarSalarios(float a){
    int salario;
    for(int i = 0; i < total_funcionarios; i++){
        salario = funcionarios[i].getSalario()*(a+1);
        funcionarios[i].setSalario(salario);
    }
}

// Adiciona um novo funcionário a empresa
void Empresa::setFuncionario(Funcionario &f){

    int existe = 0;
    for(int i=0; i < total_funcionarios; i++)
        if(funcionarios[i] == f) existe = 1;
    
    if(!existe){
            total_funcionarios++;
            funcionarios[total_funcionarios-1] = f;
    } else {
        cout << f.getNome() << " já está cadastrado(a)." << endl;
    }
}

// Lista todos os funcionários da empresa
void Empresa::getFuncionarios(){ 
    for(int i = 0; i < total_funcionarios; i++)
        cout << "- " << funcionarios[i].getNome() << endl;
}

// Retorna o número de empresas cadastradas
int Empresa::getTotalEmpresas(){ 
    return total_empresas;
}

// Retorna o número de funcionários da empresa
int Empresa::getQtdFuncionarios(){
    return total_funcionarios;
}

// Lista funcionarios da empresa contratados há menos de 90 dias
void Empresa::getFuncionariosPorExperiencia(){
    cout << "----------------------------------------------------------------------" << endl;
    cout << "DADOS DA EMPRESA\n" << endl;
    cout << "Nome: " << nome << endl;
    cout << "CNPJ: " << cnpj << endl;
    cout << "\nFuncionários: " << endl;
    cout << "Nome" << "\t\t";
    cout << "Salário" << "\t\t";
    cout << "Data de admissão" << "\t\t" << endl;   
    for(int i = 0; i < total_funcionarios; i++){
        Data dataCorrente;
        Data dataFuncionario = funcionarios[i].getData();
        Data diferenca = dataCorrente - dataFuncionario;
        if(dataParaDias(diferenca) < 90){
            cout << funcionarios[i].getNome() << "\t\t";
            cout << funcionarios[i].getSalario() << "\t\t";
            cout << funcionarios[i].getData() << "\t\t" << endl; 
        }
    }   
    cout << "----------------------------------------------------------------------" << endl;
}


// Adiciona um funcionário a uma empresa (Sobrecarga do operador +)
void Empresa::operator+ (Funcionario &f){  
    int existe = 0;
    for(int i=0; i < total_funcionarios; i++)
        if(funcionarios[i] == f) existe = 1;
    
    if(!existe){
            total_funcionarios++;
            funcionarios[total_funcionarios-1] = f;
    } else {
        cout << f.getNome() << " já está cadastrado(a)." << endl;
    }
}

// Lista os dados da empresa e de todos os seus funcionários (Sobrecarga do operador <<)
std::ostream& operator<< (std::ostream &o, Empresa const &e) {
    o << "----------------------------------------------------------------------" << endl;
    o << "DADOS DA EMPRESA\n" << endl;
    o << "Nome: " << e.nome << endl;
    o << "CNPJ: " << e.cnpj << endl;
    o << "\nFuncionários: ";

    if(e.total_funcionarios == 0){
        o << "Nenhum funcionário cadastrado." << endl;
    } else {
        o << "\nNome" << "\t\t";
        o << "Salário" << "\t\t";
        o << "Data de admissão" << "\t\t" << endl;   
        for(int i = 0; i < e.total_funcionarios; i++){
            o << e.funcionarios[i].getNome() << "\t\t";
            o << e.funcionarios[i].getSalario() << "\t\t";
            o << e.funcionarios[i].getData() << "\t\t" << endl; 
        }   
        o << "----------------------------------------------------------------------" << endl;
    }return o;
}