#include <iostream>
#include <string>

using namespace std;

int main()
{
    float notas[5];
    float media, soma { 0.0 };
    string nomeAluno;

    cout << "\nDigite o nome do aluno: " << endl;
    cin >> nomeAluno;


    for (int i = 0; i < 2; i++) {
        cout << "\nDigite a nota: " << (i+1) << endl;
        cin >> notas[i];

        soma += notas[i];

    }
    media = soma / 2;

    cout << "\nA média das notas do " << nomeAluno << " foi: " << media << endl;


    return 0;
}
