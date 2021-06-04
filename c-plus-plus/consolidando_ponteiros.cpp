#include <iostream>

using namespace std;

int main()
{
    int numero { 4096 };
    int *ptr = &numero;

    cout << "\nValor da variável numero: " << numero << endl;
    cout << "\nValor da variável ptr: " << ptr << endl;
    cout << "\nValor do endereço de numero: " << &numero << endl;
    cout << "\nValor do endereço que ptr está carreagado na memória RAM: " << &ptr << endl;
    cout << "\nValor contido na variável apontada por ptr: " << *ptr << endl;
    *ptr = 20963;
    cout << "\nValor contido na variável apontada por ptr: " << *ptr << endl;

    return 0;
}
