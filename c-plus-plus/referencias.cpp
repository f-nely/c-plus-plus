#include <iostream>

using namespace std;

int main()
{
    int numero { 1024 };
    char letra { 'A' };
    int &ref = numero;

    cout << "\nValor de numero usando ref: " << ref << endl;
    cout << "\nValor endereço de numero: " << &numero << endl;
    cout << "\nValor endereço de ref: " << &ref << endl;
    int* ptr = &numero;
    cout << "\nValor endereço de ptr na RAM: " << &ptr << endl;
    cout << "\nValor de numero usando ptr: " << *ptr << endl;
    cout << "\nValor endereço contido dentro ptr: " << ptr << endl;

    return 0;
}
