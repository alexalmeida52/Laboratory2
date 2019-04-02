#include "data.h"
#include <iostream>
#include <ostream>
#include <stdlib.h>
#include "funcionario.h"

// Se nenhum argumento for passado ao construtor, é salvo a data do dia corrente
Data::Data(){
    time_t agora = time(0);
    tm *ltm = localtime(&agora);
    dia = ltm->tm_mday;
    mes = 1 + ltm->tm_mon;
    ano = 1900 + ltm->tm_year;
}

Data::Data(int d, int m, int a){
    dia = d;
    mes = m;
    ano = a;
}

int Data::getDia(){
    return dia;
}

int Data::getMes(){
    return mes;
}

int Data::getAno(){
    return ano;
}

Data Data::getData(){
    return Data(dia, mes, ano);
}

void Data::setData(int d, int m, int a){
    dia = d;
    mes = m;
    ano = a;
}

// Subtração entre datas
Data Data::operator- (Data &data){
    int data1 = ((data.ano*12)*30)+(data.mes*30)+data.dia;
    int data2 = ((ano*12)*30)+(mes*30)+dia;
    int diferenca = data2-data1;
 
    int a = diferenca/360;
    int m = (diferenca - a*360)/30;
    int d = diferenca - a*360 - m*30;
    
    return Data(d, m, a);
}

// Imprime a data no formato dd/mm/aaaa (Sobrecarga do operador <<)
std::ostream& operator<< (std::ostream &o, Data const &d) {
    o << d.dia << "/" << d.mes << "/" << d.ano ;
    return o;
}

// Recebe a data no formato dd mm aaaa (Sobrecarga do operador >>)
std::istream& operator>> (std::istream &i, Data &d) {
 i >> d.dia >> d.mes >> d.ano;
 return i;
}