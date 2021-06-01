#include <iostream>


using namespace std;

int main()
{
    int numero1, numero2, soma, subtracao, multiplicacao, divisao, resto;

    cout << "Digite o primeiro número: ";
    cin >> numero1;
    cout << "numero1 = " << numero1 << endl;
    cout << "Digite o segundo número: ";
    cin >> numero2;
    cout << "numero2 = " << numero2 << endl;

    soma = numero1 + numero2;
    cout << "A soma dos dois números: " << soma << endl;

    subtracao = numero1 - numero2;
    cout << "A soma dos dois números: " << subtracao << endl;

    multiplicacao = numero1 * numero2;
    cout << "A multiplicação dos dois números: " << multiplicacao << endl;

    divisao = numero1 / numero2;
    cout << "A divisão dos dois números: " << divisao << endl;

    resto = numero1 % numero2;
    cout << "A divisão dos dois números: " << resto << endl;
}
