#include <iostream>

using namespace std;

int main()
{
    int numero { 4096 };
    int *ptr;
    int *ptr2;
    ptr = &numero;
    ptr2 = ptr;

    cout << "\nEndereço contido dentro de ptr: " << ptr << endl;
    cout << "\nEndereço contido dentro de ptr2: " << ptr2 << endl;
    cout << "\nEndereço de ptr na memória RAM: " << &ptr << endl;
    cout << "\nEndereço de ptr2 na memória RAM: " << &ptr2 << endl;
    *ptr2 = *ptr + 10;
    cout << "\nValor de numero agora: " << *ptr2 << endl;
    cout << "\nValor de numero agora: " << numero << endl;

    return 0;
}

