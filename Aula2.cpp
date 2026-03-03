#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

/*Variaveis C+++*/

int main(void)
{

    // TIPO NOME
    // TIPO NOME = VALOR

    int vidas;          // numeros inteiros
    char letra;         // caracters
    double valor;       // numero com casas decimais
    string nome, vazia; // texto "essa variavel tem comandos de string"
    bool vivo;          // verdadeiro ou falso

    vazia = "";
    nome = "Iuri";

    int tamanho = nome.size();

    cout << "tamanho: " << tamanho << "esta vazia ??" << (vazia.empty() ? "Sim" : "Nao") << endl;

    return 0;
}