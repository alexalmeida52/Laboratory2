#include <iostream>
#include "help.h"
#include "funcionario.h"

using namespace std;
// Imprime na tela as opções de gerenciamento das empresas cadastradas
void painel(){
    cout << "Digite o número correspondente a uns dos seguintes comandos para exucutá-los." << endl;
    cout << "\n\t1.Listar Empresas" << endl;
    cout << "\t2.Selecionar Empresa" << endl;
    cout << "\t3.Cadastrar Empresa" << endl;
    cout << "\t4.Média de funcionários por empresa" << endl;
    cout << "\t5.Clear" << endl;
    cout << "\t0.Sair\n" << endl;
}

// Imprime na tela as opções de gerenciamento da empresa selecionada
void painelEmpresa(Empresa &empresa){
    cout << "Empresa: " << empresa.getNome() << "\t\tCNPJ: " << empresa.getCnpj() << endl << endl;
    cout << "Digite o número correspondente a uns dos seguintes comandos para exucutá-los." << endl;
    cout << "\n\t1.Listar funcionários" << endl;
    cout << "\t2.Listar funcionários em período de experiência" << endl;
    cout << "\t3.Aumentar salário de todos os funcionários" << endl;
    cout << "\t4.Cadastrar funcionário" << endl;
    cout << "\t5.Clear" << endl;
    cout << "\t0.Voltar" << endl << endl;
}

// Pede para que o usuário informe os dados do Funcionario e retorna-os estruturados 
Funcionario inserirFuncionario(){
    string nome;
    float salario;
    Data data;
    cout << "Digite o nome do funcionário:" << endl;
    cin >> nome;
    cout << "Digite o valor do salário de " << nome << ":" << endl;
    cin >> salario;
    cout << "Digite a data de admissão (dd mm aa): " << endl;
    cin >> data;

    Funcionario funcionario;
    funcionario.setNome(nome);
    funcionario.setSalario(salario);
    funcionario.setData(data);
    return funcionario;
}

// Pede para que o usuário informe os dados da Empresa e retorna-os estruturados 
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

// Painel de seleção para gerenciar os dados da empresa
void selecaoPainelEmpresa(Empresa &empresa){
    system("clear");
    painelEmpresa(empresa);
    int opcao = 1;
    while(opcao > 0){
        cout << "O que deseja fazer: ";
        cin >> opcao;
        switch(opcao){
            case 0: // Sair do painel de seleção
                opcao = 0;
                break;
            case 1: // Listar todos os funcionários
                system("clear");
                cout << empresa;
                break;
            case 2: // Listar funcionários contratados há menos de 90 dias
                system("clear");
                empresa.getFuncionariosPorExperiencia();
                painelEmpresa(empresa);
                break;
            case 3: // Aumentar salário de todos os funcionários
                system("clear");
                float aumento;
                cout << "Insira a porcentagem: ";
                cin >> aumento;
                empresa.aumentarSalarios(aumento/100);
                painelEmpresa(empresa);                
                break;
            case 4: { // Cadastrar funcionário
                system("clear");                
                Funcionario funcionario = inserirFuncionario();
                bool resposta = empresa.setFuncionario(funcionario);
                if(resposta == true){
                    system ("clear");
                    painelEmpresa(empresa);
                }
                break;
            }
            case 5: // Limpar a tela e exibir painel de seleção
                system("clear");
                painelEmpresa(empresa);
                break;
            default: // Caso a opção inválida
                system("clear");
                painel();
                cout << "Digite uma opção válida" << endl;
        }
    }
    system("clear");
    painel();
}


// Lista totas as empresas contidas no vetor passado como argumento
void listarEmpresas(Empresa empresas[], int total_empresas){
    cout << "Empresas: " << endl;
    if(!total_empresas){
        system("clear");
        cout << "Nenhuma empresa cadastrada." << endl;
    } else {
        for(int i = 0; i < total_empresas; ++i){
            cout << "\t" << i+1 << ". " << empresas[i].getNome() << endl;
        }
    }
}

// Converte uma data para dias. Ex: 01/01/2019 = 726871 dias
int dataParaDias(Data &data){
    int a = data.getAno();
    int m = data.getMes();
    int d = data.getDia();
    int dias = ((a*12)*30)+(m*30)+d;
    return dias;
}