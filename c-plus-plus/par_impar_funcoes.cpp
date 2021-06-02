#include <iostream>


using namespace std;

int parOuImpar(int num);

int main()
{
    int num;
    cout << "Digite um número: ";
    cin >> num;

    cout << parOuImpar(num);

    return 0;
}

 int parOuImpar(int num)
{
    if (num % 2 == 0) {
        cout << "par: ";
    } else {
        cout << "ímpar: ";
    }
    return num;
}
