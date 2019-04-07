#ifndef __DATA_H__
#define __DATA_H__
#include <string>
#include <ostream>
#include <istream>
#include <ctime>

class Data{
    private:
        int mes;
        int dia;
        int ano;

    public:
        // Construtores
        Data(); // Se nenhum argumento for passado ao construtor, é salvo a data do dia corrente
        Data(int d, int m, int a);

        // Getters e Setters
        int getDia();
        int getMes();
        int getAno();
        Data getData();
        void setData(int d, int m , int a);

        // Métodos
        Data operator- (Data &d); // Subtração entre datas com o operador de subtração menos '-'
        friend std::ostream& operator<< (std::ostream &o, Data const &d);  // Imprime a data no formato dd/mm/aaaa com 'cout <<'
        friend std::istream& operator>> (std::istream &i, Data &d); // Recebe a data no formato dd mm aaaa com 'cin >>'
};

#endif