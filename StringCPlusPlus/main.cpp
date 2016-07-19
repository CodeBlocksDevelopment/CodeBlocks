#include <iostream>

using namespace std;

int main()
{
    string nome;
    locale loc;

    cout<<"Digite um nome: ";
    getline(cin,nome);
    cout<<"Imprimindo o nome de trás para a frete:"<<endl;
    for (int i=nome.length()-1; i >=0; i--){
        cout<<nome[i]<<endl;
    }
    cout<<"Escrevendo em maiúscula"<<endl;
    for (int i=0; i< nome.length()-1; i++){
        cout<<toupper(nome[i],loc);
    }

    cout << "Hello world!" << endl;
    return 0;
}
