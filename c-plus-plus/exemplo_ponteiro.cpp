#include <iostream>

using namespace std;

int main()
{
    int a = 12; // declaramos a variável a,
    int *pa; // depois declaramos um ponteiro pa

    /* através do operador & obtemos o endereço de a e atribuímos o valor 100 à variável usando
    o ponteiro ao invés da variável a. Desta forma alteramos o valor de a indiretamente. */
    pa = &a;

    *pa = 100;

    cout << "\nEndereco da variável a: " << &a << endl;
    cout << "\nEndereco da variável pa: " << &pa << endl;
    cout << "\nValor da variável a: " << a << endl;
    cout << "\nvalor armazenado no endereço que o ponteiro está apontando: " << *pa << endl;

    /* O que é um ponteiro?
    É uma variável que armazena 1(um) endereço de memória RAM
    */

    /* Características de um ponteiro
    Assim como qualquer variável também possui um endereço alocado na RAM
    */

    /* Características de um ponteiro
    Assim como qualquer variável também possui um tipo. Este tipo indica que tipo de variável o ponteiro irá apontar
    */

    /* É importante iniciar o ponteiro!
    Para evitar que o ponteiro aponte para um lixo de memória é importante sempre iniciar a variável ponteiro.
    int *pa{nullptr};
    int *pa = &a;
    */

    return 0;
}
