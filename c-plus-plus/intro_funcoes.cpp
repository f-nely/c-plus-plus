#include <iostream>


using namespace std;

int somarNumero(int numero, int numeroASerSomado)
{
    return numero + numeroASerSomado;
}

void mensagem()
{
    cout << "\nMensagem de marte.. Chegamos bem..\n";
}

int main()
{
    int numero, numeroASerSomado;

    mensagem();
    cout << "Digite um número: " << endl;
    cin >> numero;
    cout << "Digite o número a ser somado: " << endl;
    cin >> numeroASerSomado;
    cout << "A soma deste número: " << numero << " com o número: " << numeroASerSomado << " será: " << somarNumero(numero, numeroASerSomado) << endl;
}
