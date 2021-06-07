#include <iostream>

using namespace std;

int main()
{
    int numeros[] = {1, 23, -78, 900, 234};
    int *ptr; // declaração de ponteiro
    /* ptr passa apontar para o endereço de numeros. iss é o mesmo que ptr = &numeros[0] */
    //ptr = numeros;
    ptr = &numeros[0];
    for (int i = 0; i < 5; i++) {
        cout << "Vetor[" << i << "] endereço: " << &numeros[i] << " valor: " << numeros[i] << endl;
    }

    cout << "\n*** Endereços com aritmética de ponteiros\n";
    cout << "Valor contido em ptr: " << ptr << "\n";
    cout << "(ptr + 0) END: " << (ptr + 0) << " valor: " << *(ptr + 0) << endl;
    cout << "(ptr + 1) END: " << (ptr + 1) << " valor: " << *(ptr + 1) << endl;
    cout << "(ptr + 2) END: " << (ptr + 2) << " valor: " << *(ptr + 2) << endl;
    cout << "(ptr + 3) END: " << (ptr + 3) << " valor: " << *(ptr + 3) << endl;
    cout << "(ptr + 4) END: " << (ptr + 4) << " valor: " << *(ptr + 4) << endl;
    cout << "Valor contido em ptr: " << ptr << endl;
    // obs: (ptr + 0) é o mesmo que ptr

    return 0;
}
