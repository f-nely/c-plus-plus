
#include <iostream>

using namespace std;

struct Data
{
    int dia;
    int mes;
    int ano;
};

int main()
{
    Data Agenda;
    Agenda.dia = 22;
    Agenda.mes = 07;
    Agenda.ano = 2013;

    cout << Agenda.dia << " / 0" << Agenda.mes << " / " << Agenda.ano << endl;

    return 0;
}
