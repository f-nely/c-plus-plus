
#include <iostream>

using namespace std;

struct Data
{
    static int contador;
    int id;
    int dia;
    int mes;
    int ano;

    Data() {
        id = contador++;
        cout << "\nConstrutor Data(" << id << ") executado" << endl;
    }
    ~Data() {
        cout << "\nDestrutor ~Data(" << id << ") executado" << endl;
    }
};

int Data::contador = 1;

int main()
{
   {
        Data Agenda;

        {
            Data Agenda2;
            // agora este objeto Agenda3 está na heap
            Data *Agenda3 = new Data();
            delete(Agenda3);
        }

        Data Agenda4;
   }

    return 0;
}
