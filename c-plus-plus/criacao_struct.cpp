
#include <iostream>

using namespace std;

struct Ponto3D
{
    int x;
    int y;
    int z;

    void desenharPontos3D(Ponto3D pontos) {

    cout << "x:" << pontos.x << "y:" << pontos.y << "z:" << pontos.z << endl;
    }
};


int main()
{
    Ponto3D pointer;
    pointer.x = 3;
    pointer.y = 4;
    pointer.z = 5;
    pointer.desenharPontos3D(pointer);

    return 0;
}
