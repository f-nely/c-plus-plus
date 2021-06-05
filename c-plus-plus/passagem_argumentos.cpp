
#include <iostream>

using namespace std;

void trocaNumero(int &num1, int &num2);

int main()
{
    int num1, num2;

    cout << "\nDigite o primeiro número: " << endl;
    cin >> num1;
    cout << "\nDigite o segundo número: " << endl;
    cin >> num2;

    cout << "\nValores antes da troca\n";
    cout << "\nnum1 = " << num1 << endl;
    cout << "\nnum2 = " << num2 << endl;

    trocaNumero(num1, num2);
    cout << "\nValores depois da troca\n";
    cout << "\nnum1 = " << num1 << endl;
    cout << "\nnum2 = " << num2 << endl;

    cout << "\nEndereço de memória de num1 = " << &num1 << endl;
    cout << "\nEndereço de memória de num2 = " << &num2 << endl;


    return 0;
}

void trocaNumero(int &num1, int &num2)
{
    cout << "\nEndereço de memória de num1 da função = " << &num1 << endl;
    cout << "\nEndereço de memória de num2 da função = " << &num2 << endl;

    int temp { num1};

    num1 = num2;
    num2 = temp;
}


