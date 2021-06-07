#include <iostream>

using namespace std;

void mostrarVetor(int *ptr_array, int tamanhoVetor);
void alterarVetor(int Array[], int tamanhoVetor);

int main()
{
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int tamanhoVetor = sizeof(vetor) / sizeof(int);

    cout << "\nVetor Original";
    mostrarVetor(vetor, tamanhoVetor);
    alterarVetor(vetor, tamanhoVetor);
    cout << "\nVetor Alterado?";
    mostrarVetor(vetor, tamanhoVetor);

    return 0;
}

void mostrarVetor(int *ptr_array, int tamanhoVetor)
{
    for (int i = 0; i < tamanhoVetor; i++) {

        cout << "- " << ptr_array[i] << " -"; // ptr_array[i] é o mesmo que *(ptr_array + i)
    }
    cout << "\n\n";
}

void alterarVetor(int Array[], int tamanhoVetor)
{
    for (int i = 0; i < tamanhoVetor; i++) {

        Array[i] *= 2;
    }
}
