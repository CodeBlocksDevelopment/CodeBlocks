#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main()
{
    int numeroHomens = 0,numeroMulheres = 0;
    float altura;
    char sexo;
    for (int i=0; i < 5; i++){
      do {
        system("clear");
        cout<<"Digite o sexo: "<<endl;
        sexo = getchar();
        //cin>>sexo;
        sexo = toupper(sexo);
      } while (sexo != 'F' && sexo != 'M');
      //sexo = getchar();2
      cout<<"Digite a altura: "<<endl;
      cin >>altura;
      switch (sexo) {
        case 'M': {
                    numeroHomens = numeroHomens +1;
                    break;
                  }
        case 'F': {
                    numeroMulheres = numeroMulheres +1;
                    break;
        }
      }

    }
    fflush(stdin);
    cout<<"O numero de homens são: "<<numeroHomens<<endl;
    cout<<"O numero de mulheres são: "<<numeroMulheres<<endl;
    //like system pause
    //cin.get();
    cout<<"Precione ENTER para sair!!";
    getchar();
    return 0;
}
