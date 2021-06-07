#include <iostream>

using namespace std;

void funcao01();
void funcao02();
void funcao03();
void funcao04();

int varGlobal { 10 };

int main()
{
    int varMain { 00 };
    funcao01();

    return 0;
}

void funcao01()
{
    int var01 { 01 };
    static int varEstatica { 20 };
    cout << "\nChamando funcao01\n";
    cout << "\nEndereço var01: " << &var01 << endl;
    varEstatica++;
    cout << "\nValor varEstatica: " << varEstatica << endl;
    funcao02();
}

void funcao02()
{
    int var02 { 02 };
    cout << "\nChamando funcao02\n";
    cout << "\nEndereço var02: " << &var02 << endl;
    funcao03();
}

void funcao03()
{
    int var03 { 03 };
    cout << "\nChamando funcao03\n";
    cout << "\nEndereço var03: " << &var03 << endl;
    funcao04();
}

void funcao04()
{
    int var04 { 04 };
    cout << "\nChamando funcao04\n";
    cout << "\nEndereço var04: " << &var04 << endl;
}
