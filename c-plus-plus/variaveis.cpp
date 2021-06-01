
#include <iostream>


using namespace std;

int main() 
{
	int numVidas = 5;
	int pontuacao = 1350;
	cout << "**********INICIO DO JOGO*************" << endl;
	cout << "Vidas Jogador: " << numVidas << endl;
	cout << "Pontuação: " << pontuacao << endl;
	cout << "Endereço que numVidas ocupa na memória RAM: " << &numVidas << endl;
	cout << "Endereço que pontuacao ocupa na memória RAM: " << &pontuacao << endl;
	cout << "*************************************" << endl;
	
	cout << "**********DURANTE O JOGO*************" << endl;
	pontuacao += 150;
	numVidas -= 1;
	cout << "Vidas Jogador: " << numVidas << endl;
	cout << "Pontuação: " << pontuacao << endl;
	cout << "*************************************" << endl;

}
