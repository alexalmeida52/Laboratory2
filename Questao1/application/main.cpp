#include <iostream>
#include "funcionario.h"
#include "empresa.h"
#include <cstdlib>
using namespace std;
int Empresa::total_empresas = 0;
// int Empresa::total_funcionarios = 0;
int Funcionario::total_funcionarios = 0;
int main(){
    system("clear");
    Empresa Web("WebSites", 123456);
    Empresa Software("InterSoft", 654321);
    Funcionario Joao("João", 1590.90, "23/04/2019", Software.getNome());
    Funcionario Alex("Alex", 1590.90, "23/04/2019", Web.getNome());
    Funcionario Bruno("Bruno", 1590.90, "24/10/2007", Web.getNome());
    Funcionario Jose("José", 1590.90, "12/01/2000", Web.getNome());
    Web.setFuncionario("Gorete");
    Software.setFuncionario("João");

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