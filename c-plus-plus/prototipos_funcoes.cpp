#include <iostream>


using namespace std;

// protótipos de função - coloca-se apenas cabeçalho da função
float soma (float num1, float num2);

int main()
{
    cout << soma(100, 500) << endl;

    return 0;
}

float soma(float num1, float num2)
{
    return num1 + num2;
}

