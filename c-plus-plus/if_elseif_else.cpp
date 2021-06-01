#include <iostream>
#include <string>


using namespace std;

int main()
{
    bool bFezSol, bCarroPronto, bSalarioDepositado;
    bool bAcesso;

    string senhaDeAcesso = "cplusplus";
    string senhaDigitada;

    cout << "Digite a senha de acesso: ";
    cin >> senhaDigitada;

    if (senhaDigitada == senhaDeAcesso) {
        cout << "\nAcesso permitido!" << "\n";
        bAcesso = true;
    } else {
        cout << "\nAcesso negado!" << "\n";
        exit(0);
    }

}
