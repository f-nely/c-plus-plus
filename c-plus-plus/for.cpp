#include <iostream>


using namespace std;

int main()
{
    int soma = 0; // variável acumuladora

    for (int num = 1; num <= 100; num++) {

        soma += num;

    }

    cout << "\nA soma dos números de 1 a 100 é: " << soma << endl;

    return 0;
}
