#include <iostream>

using namespace std;

int vetor[10];

int main()
{
    cout<<"Digite dez valores para o vetor:"<<endl;
    for (int i=0;i<10;i++){
        cout<<"Vetor["<<i+1<<"]:";
        cin>>vetor[i];
    }
    cout<<"Imprimindo os valores pares que existem no vetor"<<endl;
    for (int i=0;i<10;i++){
        if ((vetor[i] % 2) ==0)
            cout<<"Vetor["<<i+1<<"]: "<<vetor[i]<<endl;
    }
    cout << "Fim do programa!!" << endl;
    return 0;
}
