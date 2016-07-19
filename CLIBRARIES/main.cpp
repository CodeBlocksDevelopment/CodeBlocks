#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cctype>

using namespace std;

char nome[30];

int main()
{
    cout << "Digite o nome de uma pessoa: \n";
    fgets(nome,30,stdin);
    cout << "Digite um caractere qualquer: " << endl;
    char c;
    c = getchar();
    printf("O caractere é: %c \n\n", c);
    cout << "O caractere digitado foi: "<< toupper(c) << endl;
    cout << "O caractere digitado foi: "<< tolower(c) << endl;
    return 0;
}
