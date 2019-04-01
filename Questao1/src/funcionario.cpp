#include "funcionario.h"
#include "empresa.h"
#include <iostream>
#include <string>

// Constructor

Funcionario::Funcionario(){

}

Funcionario::Funcionario(const Funcionario &f){
    nome = f.nome;
    salario = f.salario;
    data = f.data;
    empresa = f.empresa;
}

Funcionario::Funcionario(string n, float s){
    nome = n;
    salario = s;
    Data d; data = d;
    total_funcionarios++;
}

Funcionario::Funcionario(string n, float s, Data d){
    nome = n;
    salario = s;
    data = d;
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

Data Funcionario::getData(){
    return data;
}

string Funcionario::getEmpresa(){
    return empresa;
}

void Funcionario::setNome(string n){
    nome = n;
}

void Funcionario::setSalario(float s){
    salario = s;
}

void Funcionario::setData(Data d){
    data = d;
}

void Funcionario::setEmpresa(string e){
    empresa = e;
}

void Funcionario::toString(){
    cout << "----------------------------------------------------------------------\nDADOS DO FUNCIONÁRIO\n"<< "\n\tNome: " << nome << "\n\tSalário: " << salario << "\n\tDesde: " << data << "\n\tEmpresa: " << empresa << endl<< "----------------------------------------------------------------------"<< endl <<endl;

}

// Compara se dois Funcionarios são iguais (Sobrecarga do operador ==)
bool Funcionario::operator==(Funcionario &f1){
    return !nome.compare(f1.getNome());
}