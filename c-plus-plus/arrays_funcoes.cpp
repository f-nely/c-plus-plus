#include <iostream>

using namespace std;

void mostrarVetor(int Array[], int tamanhoVetor);

int main()
{
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int tamanhoVetor = sizeof(vetor) / sizeof(int);
    //cout << "Tamanho vetor: " << tamanhoVetor;

    mostrarVetor(vetor, tamanhoVetor);

    return 0;
}

void mostrarVetor(int Array[], int tamanhoVetor)
{
    for (int i = 0; i < tamanhoVetor; i++) {

        cout << "- " << Array[i] << " -";

    }
}
