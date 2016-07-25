#include <iostream>

using namespace std;

int preco;

int main()
{
    cout<<"Digite o preço de um produto qualquer"<<endl;
    cin>>preco;
    preco = preco - (preco * 10/100);
    cout << "O preço do produto com desconto de 10% é: "<<preco<< endl;
    return 0;
}
