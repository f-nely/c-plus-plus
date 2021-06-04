#include <iostream>

using namespace std;

int main()
{
    int numero { 4890 };
    char letra { 'E' };
    /* declarei ponteiro genérico ou vazio(void)
    significa que ele não tem ainda um tipo que possa apontar
    isso é útil quando você por exemplo retornar algo de alguma
    função e atribuir a um ponteiro.
    */
    void *ptrG;
    ptrG = &letra;

    cout << "Valor de letra via ptrG = " << *(char*)ptrG << endl;

    ptrG = &numero;
    cout << "\nValor de numero via ptrG: " << *(int*)ptrG << endl;

    return 0;
}
