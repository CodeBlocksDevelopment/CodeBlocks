#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <stdio.h>

using namespace std;

int main()
{
    char a;

    do {
     cout << "Digite um valor: "<<endl;
     a = toupper(getchar());
     switch (a) {
        case 'A': {
            cout<< "Foi digitado A"<<endl;
            break;
        }
        case 'S': {
            cout<< "Saindo do software"<<endl;
            break;
        }
        default: {
            cout << "Digite outra opção!!"<<endl;
        }
     }
    } while (a != 'S');
    return 0;
}
