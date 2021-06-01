#include <iostream>


using namespace std;

int main()
{
    int num1, num2;
    char operacao;

    cout << "\nDigite um número: ";
    cin >> num1;
    cout << "\nDigite outro número: ";
    cin >> num2;
    cout << "\nQual operação deseja efetuar? \n + Adição \n - Subtração \n * Multiplicação \n / Adição \n";
    cout << "\nDigite sua opção: ";
    cin >> operacao;

    switch (operacao) {
        case '+':
            cout << "\nSoma de num1 + num2 = " << num1 + num2 << endl;
            break;
        case '-':
            cout << "\nSubtração de num1 - num2 = " << num1 - num2 << endl;
            break;
        case '*':
            cout << "\nMultiplicação de num1 * num2 = " << num1 * num2 << endl;
            break;
        case '/':
            cout << "\nDivisão de num1 / num2 = " << num1 / num2 << endl;
            break;
        default:
            cout << "\nVocê não digitou um operador válido: " << endl;
            break;
    }
}
