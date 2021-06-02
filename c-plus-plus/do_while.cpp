#include <iostream>


using namespace std;

int main()
{

    /* do-while - repete um grupo de instruções enquanto uma determinada condição for verdadeira*/
    int escolha = 0;
    do {

        cout << "****Tickets Cinema****" << endl;
        cout << "\n1 - Para Meia entrada\n";
        cout << "\n2 - Para Inteira\n";
        cout << "\n3 - Para Sair\n";

        cout << "\nEscolha sua opção: ";
        cin >> escolha;

        switch (escolha) {

            case 1:
                cout << "\n Ticket meia entrada comprada\n";
                break;
            case 2:
                cout << "\nInteira comprada\n";
                break;
            case 3:
                cout << "\nSaindo menu ticket\n";
                break;
            default:
                cout << "\nOpção inválida\n";
                break;
        }

    } while (escolha != 3);

    return 0;
}
