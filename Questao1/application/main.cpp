#include <iostream>
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
    system("clear");
    
    Empresa Web("WebSites", 123456);
    Empresa Software("InterSoft", 654321);
    Funcionario Joao(1, "João", 1590.90, "23/04/2019", Software.getNome());
    Funcionario Alex(2, "Alex", 1590.90, "23/04/2019", Web.getNome());
    Funcionario Bruno(3, "Bruno", 1590.90, "24/10/2007", Web.getNome());
    Funcionario Jose(4, "José", 1590.90, "12/01/2000", Web.getNome());
    Web.setFuncionario("Gorete");
    Web.setFuncionario( "Gorete");
    Software.setFuncionario("João");
    Software.setFuncionario("Bob");
    Software.setFuncionario( "Jo");

    cout << "Funcionário da empresa " << Web.getNome() << ": " << endl;
    Web.getFuncionarios();
    cout << "Funcionário da empresa " << Software.getNome() << ": " << endl;
    Software.getFuncionarios();
    
   /*  cout << "Funcionário: " << Alex.getNome() << "\nSalário: R$ " << Alex.getSalario()
    << "\nData de admissão: " << Alex.getData() << endl;
    
    cout << "Empresa: " << Web.getNome() << "\nCNPJ: " << Web.getCnpj() << endl;
    cout << "\n\nTotal funcionários: " << Funcionario::getTotalFuncionarios()<< endl;
    cout << "\n\nTotal empresas: " << Empresa::getTotalEmpresas()<< endl; */

    return 0;
}

/* Tentativa de deixar pra fazer as operações durante a execução do programa.
 instrucoes();
    int opcao = 1;
    string nome;
    float cnpj;
    while(opcao > 0){
        cout << "O que deseja fazer: ";
        cin >> opcao;
        switch(opcao){
            case 0:{
                opcao = 0;
                break;
            }
            case 1:            {
                cout << "Digite o nome da empresa" << endl;
                cin >> nome;
                cout << "Digite o CNPJ da empresa" << endl;
                cin >> cnpj;
                
            }
                
            break;
            case 2:{
                cout << "Digite o nome da empresa" << endl;
                cin >> nome;
                cout << "Digite o fsd da empresa" << endl;
                cin >> cnpj;
            break;
            }
        }
    } */