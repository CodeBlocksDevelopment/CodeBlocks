#include <iostream>

using namespace std;

int main()
{
    int E = 0, N;
    cout << "Digite um valor: "<<endl;
    cin>>N;
    for (int i=0;i<=N;i++){
        E = E + (i+1);
    }
    cout <<"O resultado da somatoria é: "<<E<< endl;
    return 0;
}
