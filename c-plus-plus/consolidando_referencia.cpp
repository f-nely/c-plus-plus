#include <iostream>

using namespace std;

int main()
{
    int numero { 1024 };
    int numero2 { 2024 };
    int &refNum { numero2 };
    int* ptr = &numero;
    *ptr = 4048;
    refNum = 5644;

    cout << "\nValor de numero: " << *ptr << endl;
    ptr = &numero2;
    *ptr = numero + 2000;
    cout << "\nValor de numero2: " << *ptr << endl;

    return 0;
}
