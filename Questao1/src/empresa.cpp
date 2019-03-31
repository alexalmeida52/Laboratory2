#include "empresa.h"
#include <iostream>
#include "funcionario.h"


// Constructor
Empresa::Empresa(string name, float Cnpj){
    nome = name;
    cnpj = Cnpj;
    total_empresas++;
}

// getters and setters

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

void Empresa::setFuncionario(string name){ // Adiciona um funcionário a uma empresa
    funcionarios[total_funcionarios] = name;
    total_funcionarios++;
}
void Empresa::getFuncionarios(){ // Lista todos os funcionários de determinada empresa
    for(int i = 0; i < total_funcionarios; i++)
        cout << funcionarios[i] << endl;
}

int Empresa::getTotalEmpresas(){ // Número de empresas cadastradas
    return total_empresas;
}

int Empresa::getQtdFuncionarios(){
    return total_empresas;
}