#include <iostream>
#include <stdio.h>
#include <string>
#include <cctype>

/*Comando if else*/

using namespace std;

int main()
{

    int num = 10;
    char opc = 'S';
    char digite;

    cout << "o numero de 10 começa com qual letra ??" << endl;

    cin >> digite;

    digite = toupper(digite);

    if (digite == opc)
    {
        cout << "Voce esta correto" << "\n\n";
    }
    else
    {
        cout << "Voce esta incorreto" << "\n\n";
    }

    system(0);
    return 0;
}