#ifndef __HELP_H__
#define __HELP_H__
#include "data.h"
#include  "empresa.h"
#include  "funcionario.h"

void painel();
void painelEmpresa(Empresa &empresa);
Funcionario inserirFuncionario();
Empresa inserirEmpresa();
void selecaoPainelEmpresa(Empresa &empresa);
int listarEmpresas(Empresa empresas[], int total_empresas);
int dataParaDias(Data &data);

#endif