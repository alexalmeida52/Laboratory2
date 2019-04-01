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

    for(int i = 0; i < Empresa::total_empresas-1; ++i){

    }
    system("clear");
    cout << "Digite a qualquer momento o 4 para receber ajuda." << endl;
    painel();
    int opcao = 1;
    while(opcao > 0){
        cout << "O que deseja fazer: ";
        cin >> opcao;
        switch(opcao){
            case 0:
                opcao = 0;
                break;
            case 1:
                system("clear");
                cout << "Empresas: " << endl;
                if(!Empresa::total_empresas){
                    system("clear");
                    cout << "Nenhuma empresa cadastrada." << endl;
                    painel();
                    break;
                }
                
                for(int i = 0; i < Empresa::total_empresas; ++i){
                    cout << "\t" << i+1 << ". " << empresas[i].getNome() << endl;
                }
                painel();
                cout << "\n";
                break;
            case 2:
                system("clear");
                cout << "Empresas: " << endl;
                if(!Empresa::total_empresas){
                    system("clear");
                    cout << "Nenhuma empresa cadastrada." << endl;
                    painel();
                    break;
                }
                for(int i = 0; i < Empresa::total_empresas; ++i){
                    cout << "\t" << i+1 << ". " << empresas[i].getNome() << endl;
                }
                
                cout << "\n";
                cout << "Selecione a empresa: ";
                cin >> opcao;
                selecaoPainelEmpresa(empresas[opcao-1]);
                break;
            case 3:
                system("clear");
                Empresa::total_empresas++;
                empresas[Empresa::total_empresas-1] = inserirEmpresa();
                system("clear");
                cout << "Empresa cadastrada com sucesso." << endl;
                painel();

                break;
            case 4:
                system("clear");
                painel();
                break;
            case 5:
                system("clear");
                painel();
                break;
            default:
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
