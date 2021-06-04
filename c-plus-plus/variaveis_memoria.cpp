#include <iostream>

using namespace std;

int main()
{
    int numero = 10;
    double salario = 4567.90;

    cout << "\n Tamanho variável numero: " << sizeof(numero) << " bytes" << endl;
    cout << "\n Tamanho variável salario: " << sizeof(salario) << " bytes" << endl;
    cout << "\n Endereço de memória da variável numero: " << &numero << endl;
    cout << "\n Endereço de memória da variável salario: " << &salario << endl;

    /*
    Qual o endereço de uma variável?
    É o endereço de seu primeiro byte.
    "Não importando" seu tamanho!
    */

    return 0;
}
