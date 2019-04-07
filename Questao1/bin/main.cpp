#include <iostream>
#include "data.h"
#include "funcionario.h"
#include "empresa.h"
#include "help.h"
#include <cstdlib>
#include <string>
using namespace std;

int Empresa::total_empresas = 0;
// int Empresa::total_funcionarios = 0;
int Funcionario::total_funcionarios = 0;

int main(){
    
    Empresa *empresas = new Empresa[10];

    system("clear");
    cout << "Digite a qualquer momento o 5 para receber ajuda." << endl;
    painel();
    int opcao = 1;
    while(opcao > 0){
        cout << "O que deseja fazer: ";
        cin >> opcao;
        switch(opcao){
            case 0: // Sair
                opcao = 0;
                break;
            case 1: // Listar empresas
                system("clear");
                listarEmpresas(empresas, Empresa::total_empresas);
                painel();
                cout << "\n";
                break;
            case 2: // Selecionar empresa
                system("clear");
                
                if(listarEmpresas(empresas, Empresa::total_empresas)){
                    cout << "\n";
                    cout << "Selecione a empresa: ";
                    cin >> opcao;
                    selecaoPainelEmpresa(empresas[opcao-1]);
                    break;
                } else {
                    painel();
                    break;
                }
            case 3: // Cadastrar empresa
                system("clear");
                Empresa::total_empresas++;
                empresas[Empresa::total_empresas-1] = inserirEmpresa();
                system("clear");
                cout << "Empresa cadastrada com sucesso." << endl;
                painel();
                break;
            case 4: // Exibir média de funcionários por empresa
                system("clear");
                if( listarEmpresas(empresas, Empresa::total_empresas)){
                    cout << "Média de funcionários por empresa: " << Funcionario::total_funcionarios/Empresa::total_empresas << endl;
                    painel();
                    break;
                } else {
                    painel();
                    break;
                }
                
            case 5: // Limpar a tela e exibir painel
                system("clear");
                painel();
                break;
            default: // Caso a opção inválida
                system("clear");
                painel();
                cout << "Digite uma opção válida" << endl;
        }
    }

    delete[] empresas;

    

    // Data data1;
    // Data data2(15, 3, 2019);
    // Data data3(15, 2, 2018);
    // Data data4(15, 1, 2018);
    // cout << data1-data2 << endl;    

    // Funcionario Joao("Joao", 1590.90, data1);
    // Funcionario Alex("Alex", 1590.90, data2);
    // Funcionario Bruno("Bruno", 1590.90, data2);
    // Funcionario Jose("José", 1590.90, data3);

    // Empresa Web("WebSites", 123456);

    // Web.setFuncionario(Joao);
    // Web.setFuncionario(Bruno);
    // Web.setFuncionario(Alex);
    // Web.setFuncionario(Jose);
    // Web+Jose;


    // Web.getFuncionarios();

    // cout << Web;
    // Web.aumentarSalarios(0.5);
    // cout << Web;
    // Web.getFuncionariosPorExperiencia();


    
    return 0;
}
