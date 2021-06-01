#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
	int numero = 45;
	float numero2 = 55.56f;
	double numero3 = 45345.904555;
	char caractere = '3';
	char caractere2= 'k';
	bool bAchou;

	cout << "Valor numero: " << numero << endl;
	cout << "Tamanho numero: " << sizeof(numero) << " bytes" << endl;
	cout << "Endereço carregado em memória: " << &numero << endl;
	cout << "\n";

	cout << "Valor numero2: " << numero2 << endl;
	cout << "Tamanho numero2: " << sizeof(numero2) << " bytes" << endl;
	cout << "Endereço carregado em memória: " << &numero2 << endl;
	cout << "\n";

	cout << "Valor numerero3: " << setprecision(12)<< numero3 << endl;
	cout << "Tamanho numero3: " << sizeof(numero3) << "bytes" << endl;
	cout << "Endereço carregado em memória: " << &numero3 << endl;
	cout << "\n";

	cout << "Valor caractere: " << caractere << endl;
	cout << "Tamanho caractere: " << sizeof(caractere) << " bytes" << endl;
	cout << "Endereço carregado em memória: " << (void *) &caractere << endl;
	cout << "\n";

	cout << "Valor caractere2: " << caractere2 << endl;
	cout << "Tamanho caractere2: " << sizeof(caractere2) << " bytes" << endl;
	cout << "Endereço carregado em memória: " << (void *) &caractere2 << endl;
	cout << "\n";

    bAchou = 1;
	cout << "Valor de bAcho: " << bAchou << endl;
	cout << "\n";

	bAchou = 0;
	cout << "Valor de bAcho: " << bAchou << endl;
	cout << "\n";

	bAchou = true;
	cout << "Valor de bAcho: " << bAchou << endl;
	cout << "\n";

	bAchou = false;
	cout << "Valor de bAcho: " << bAchou << endl;
	cout << "\n";

	bAchou = 'd'; // qualquer coisa diferente de zero é true
	cout << "Valor de bAcho: " << bAchou << endl;
	cout << "\n";

	bAchou = '1023460'; // qualquer coisa diferente de zero é true
	cout << "Valor de bAcho: " << bAchou << endl;
	cout << "\n";

}
