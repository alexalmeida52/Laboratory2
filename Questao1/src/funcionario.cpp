#include "funcionario.h"
#include "empresa.h"
#include <iostream>

// Constructor
Funcionario::Funcionario(int id, string name, float salary, string date, string company){
    nome = name;
    salario = salary;
    data = date;
    empresa = company;
    // Empresa::company.setFuncionario(nome); Tentativa de adicionar um funcionario a uma empresa atráves do construtor
    total_funcionarios++;
}

// getters and setters
int Funcionario::getTotalFuncionarios(){
    return total_funcionarios; 
}

string Funcionario::getNome(){
    return nome;
}

float Funcionario::getSalario(){
    return salario;
}

string Funcionario::getData(){
    return data;
}

string Funcionario::setNome(string name){
    nome = name;
}

float Funcionario::setSalario(float salary){
    salario = salary;
}

string Funcionario::setData(string date){
    data = date;
}

void Funcionario::toString(){
    cout << "----------------------------------------------------------------------\nDADOS DO FUNCIONÁRIO\n"<< "\n\tNome: " << nome << "\n\tSalário: " << salario << "\n\tDesde: " << data << "\n\tEmpresa: " << empresa << endl<< "----------------------------------------------------------------------"<< endl <<endl;

}