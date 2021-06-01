#include <iostream>
// para usar #define precisa colocar aqui abaixo dos includes
//#define NUM_VIDAS 10
// observe que não tem ponto e vírgula no finall!!


using namespace std;

int main()
{
    const int NUM_VIDAS = 10;
    int totalDeVidas;
    totalDeVidas = NUM_VIDAS - 1;

    cout << "Total de vidas: " << totalDeVidas << endl;
    cout << "Valor constante NUM_VIDAS: " << NUM_VIDAS << endl;
    cout << "Endereço de memória NUM_VIDAS: " << &NUM_VIDAS << endl;
}
