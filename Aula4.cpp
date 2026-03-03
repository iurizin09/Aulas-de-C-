#include <iostream>
// Variaveis Globais

int n1, n2; // Acessado de qualquer lugar

using namespace std;

int main(void)
{

    // operadores matematicos: + - / * , % resto de uma div

    int n3, n4; // Acessado apenas
    int res;

    n1 = 11;
    n2 = 3;
    n3 = 5;
    n4 = 2;

    res = (n1 + n2 + n3) * n4;
    n1 = n2 + 1;

    cout << "Valor de n1 : " << n1 << endl;

    cout << "Soma : " << res << endl;

    return 0;
}