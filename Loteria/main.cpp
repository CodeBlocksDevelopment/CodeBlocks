#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int jogo[6];
int resultado[6];

int main()
{
    cout<<"Jogar na mega-sena"<<endl;
    for (int i=0; i < 6; i++) {
        do {
           cout<<"Digite o numero: "<<i+1<<": ";
           cin>>jogo[i];
        } while (jogo[i]< 1 || jogo[i]>60);
    }
    cout<<"Numeros apostados: "<<endl;
    for (int i=0; i < 6; i++) {
        cout<<"Numero apostado "<<i+1<<":  "<<jogo[i]<<endl;
    }
    cout<<endl;
    srand(time(NULL));
    cout<<"Sorteando numeros"<<endl;
    for (int i=0; i < 6; i++) {
        resultado[i]=rand() % 60;
        if (resultado[i] < 10)
            cout<<"Numero "<<(i+1)<<": "<<"0"<<resultado[i]<<endl;
        else
            cout<<"Numero "<<(i+1)<<": "<<resultado[i]<<endl;
    }
    int contador =0;
    for (int i=0; i < 6; i++)
        for (int j=0; j < 6; j++) {
            if (resultado[i]==jogo[j]){
                contador++;
            }
        }
    cout<<"Acertou "<<contador<<" numeros"<<endl;
    return 0;
}
