#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

char s;

int main()
{
    cout << "Digite um caractere qualquer:" << endl;
    cin.get(s);
    cout << "O caractere digitado é: "<< s << endl;
    s = getchar();
    return 0;
}
