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
    total_funcionarios++;
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
    total_funcionarios++;
}

// Getters and setters
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

void Funcionario::setNome(string n){
    total_funcionarios++;
    nome = n;
}

void Funcionario::setSalario(float s){
    salario = s;
}

void Funcionario::setData(Data d){
    data = d;
}

// Compara se dois Funcionarios são iguais (Sobrecarga do operador ==)
bool Funcionario::operator==(Funcionario &f1){
    return !nome.compare(f1.getNome());
}