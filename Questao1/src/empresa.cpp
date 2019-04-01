#include "empresa.h"
#include <iostream>
#include "funcionario.h"
#include <string>

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
    int existe = 0;
    for(int i=0; i < total_funcionarios; i++){
        
        if(funcionarios[i].compare(name) == 0){
            existe = 1;
        } 
    }
    if(!existe){
        funcionarios[total_funcionarios] = name;
        total_funcionarios++;
    } else {
        cout << name << " já está cadastrado(a)." << endl;
    }

    
    
}
void Empresa::getFuncionarios(){ // Lista todos os funcionários de determinada empresa
    for(int i = 0; i < total_funcionarios; i++)
        cout << "- " << funcionarios[i] << endl;
}

int Empresa::getTotalEmpresas(){ // Número de empresas cadastradas
    return total_empresas;
}

int Empresa::getQtdFuncionarios(){
    return total_empresas;
}

void Empresa::toString(){
    cout << "----------------------------------------------------------------------\nDADOS DA EMPRESA" << "\nNome: " << nome << "\nCNPJ: " << cnpj << "\nFuncionários: " << endl;
    getFuncionarios();
    cout << "----------------------------------------------------------------------" << endl;
}