#include <iostream>

using namespace std;

int main()
{
    int valor,maior,menor;
    for (int i=0;i<10;i++){
        cout<<"Digite um valor:"<<endl;
        cin>>valor;
        if (i==0){
            maior=valor;
            menor=valor;
        } else {
            if (valor > maior)
             maior=valor;
            if (valor < menor)
             menor=valor;
        }
    }
    cout << "O maior valor digitado foi: "<<maior<<endl;
    cout << "O menor valor digitado foi: "<<menor<<endl;
    cout << "Fim do programa!!" << endl;
    return 0;
}
