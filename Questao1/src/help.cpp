#include <iostream>
#include "help.h"
#include "funcionario.h"

using namespace std;
void painel(){
    cout << "Digite o número correspondente a uns dos seguintes comandos para exucutá-los." << endl;
    cout << "\n\t1.Listar Empresas" << endl;
    cout << "\t2.Selecionar Empresa" << endl;
    cout << "\t3.Cadastrar Empresa" << endl;
    cout << "\t4.Exibir opções" << endl;
    cout << "\t0.Sair\n" << endl;
}

void painelEmpresa(Empresa &empresa){

    cout << "Empresa: " << empresa.getNome() << "\t\tCNPJ: " << empresa.getCnpj() << endl << endl;
    cout << "Digite o número correspondente a uns dos seguintes comandos para exucutá-los." << endl;
    cout << "\n\t1.Listar funcionários" << endl;
    cout << "\t2.Listar funcionários em período de experiência" << endl;
    cout << "\t3.Cadastrar funcionário" << endl;
    cout << "\t4.Exibir opções" << endl;
    cout << "\t0.Voltar" << endl << endl;
}


Funcionario inserirFuncionario(){

    string nome;
    float salario;
    //Data data;

    cout << "Digite o nome do funcionário:" << endl;
    cin >> nome;
    cout << "Digite o valor do salário de " << nome << ":" << endl;
    cin >> salario;
    cout << "Digite a data de admissão: " << endl;
    //cin >> data;

    Funcionario funcionario(nome, salario);
    //funcionario.setData(data);
    return funcionario;
}

Empresa inserirEmpresa(){

    string nome;
    float cnpj;
    
    cout << "Digite o nome da empresa:" << endl;
    cin >> nome;
    cout << "Digite o CNPJ da empresa:" << endl;
    cin >> cnpj;

    Empresa empresa;
    empresa.setNome(nome);
    empresa.setCnpj(cnpj);
    return empresa;
}

void selecaoPainelEmpresa(Empresa &empresa){
    painelEmpresa(empresa);
    int opcao = 1;
    while(opcao > 0){
        cout << "O que deseja fazer: ";
        cin >> opcao;
        switch(opcao){
            case 0:
                opcao = 0;
                break;
            case 1:
                cout << empresa;
                break;
            case 2:
                empresa.getFuncionariosPorExperiencia();
                break;
            case 3: {
                Funcionario funcionario = inserirFuncionario();
                empresa.setFuncionario(funcionario);
                break;
            }
            case 4:
                painelEmpresa(empresa);
                break;
        }
    }
}


int dataParaDias(Data &data){
    int a = data.getAno();
    int m = data.getMes();
    int d = data.getDia();
    int dias = ((a*12)*30)+(m*30)+d;
    return dias;
}