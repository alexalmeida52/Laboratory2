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
        Data();
        Data(int d, int m, int a);
        int getDia();
        int getMes();
        int getAno();
        Data getData();
        void setData(int d, int m , int a);
        Data operator- (Data &d);
        friend std::ostream& operator<< (std::ostream &o, Data const &d);
        friend std::istream& operator>> (std::istream &i, Data &d);
};

#endif
