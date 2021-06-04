#include <iostream>

using namespace std;

int main()
{
    int *ptr;
    int numero = 101;
    ptr = &numero;
    *ptr = 103;

    cout << "\nEndereço de número: " << &numero << endl;
    cout << "\nEndereço de ptr: " << *ptr << endl;

    /*
    &ptr - Endereço em que o ponteiro está carregado, alocado na memória RAM
    ptr - O valor que está DENTRO da variável ponteiro ptr. Que para confundir tudo é também um endereço de memória.
    *ptr - Representa o valor armazenado no endereço que o ponteiro está apontando.
    */

    return 0;
}
