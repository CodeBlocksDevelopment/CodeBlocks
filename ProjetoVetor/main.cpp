#include <iostream>

using namespace std;

int vetor[10];
int maior=0;
int main()
{
    for (int i=0;i<10;i++){
        cout<<"Posição "<<(i+1)<<": ";
        cin>>vetor[i];
        if (i==0){
            maior = vetor[i];
        } else
        if (vetor[i] > maior){
            maior=vetor[i];
        }
    }
    cout<<"O maior valor e: "<<maior<<endl;

    return 0;
}
