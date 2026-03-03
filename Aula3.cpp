#include <iostream>
#include <string>

#define PI 3.14159

/*Multiplas variaveis e constantes*/
/*Entrada de variaveis*/
using namespace std;

int main(void)
{

    int vidas, pontos, life;

    cout << "Digite o numero de vidas:";
    cin >> vidas;

    cout << "Digite o numero de pontos:";
    cin >> pontos;

    cout << "Digite o numero de life:";
    cin >> life;

    cout << "Vidas: " << vidas << endl;
    cout << "Pontos: " << pontos << endl;
    cout << "Life: " << life * PI << endl;

    return 0;
}