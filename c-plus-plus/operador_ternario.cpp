#include <iostream>
#include <string>


using namespace std;

int main()
{
    double maiorNumero, numero1, numero2;

    cout << "Digite o primeiro número: ";
    cin >> numero1;

    cout << "\nDigite o segundo número: ";
    cin >> numero2;

    numero1 > numero2 ? cout << "\nnumero1 maior que numero2" : cout << "\nnumero2 maior que numero1\n";
}
