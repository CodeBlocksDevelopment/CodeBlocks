#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <conio.h>

using namespace std;

int main()
{
    int a,b;
    char comando;
    do {
      system("clear");
      cout<<"Escolha uma das opcoes: "<<endl;
      cout<<"Digite A para somar"<<endl;
      cout<<"Digite D para diminuir"<<endl;
      cout<<"Opcao: ";
      comando = getch();
      comando = toupper(commando);

      switch (comando) {
        case 'A': system("clear");
                  cout<<"Digite o valor A: "<<endl;
                  cin>>a;
                  cout<<"Digite o valor B: "<<endl;
                  cin>>b;
                  cout<<"A + B: "<<(a+b)<<endl;
                  break;

        case 'B': system("clear");

                  break;

        case 'S': break;
        default:system("clear");
                cout<<"Selecione A, B ou S"<<endl;


      }

    } while (comando!='S');
    return 0;
}
