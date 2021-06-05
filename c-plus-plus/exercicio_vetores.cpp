#include <iostream>

using namespace std;

int main()
{
    int numero[4];
    int soma = 0;

    for (int i = 0; i < 4; i++) {

        cout << "Digite o número: " << (i + 1) << endl;
        cin >> numero[i];

        soma += numero[i];
        system("clear");

    }

    cout << "\nSoma dos números é: " << soma << endl;

    return 0;
}
