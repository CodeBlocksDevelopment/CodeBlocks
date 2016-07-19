#include <iostream>

using namespace std;

int main()
{
    float E=0;
    int N;
    cout << "Digite um valor qualquer"<<endl;
    cin >> N;
    E=1;
    for (int i=1; i<=N; i++){
        int Fatorial=1;
        for (int j=1;j<=i;j++){
            Fatorial = Fatorial*j;
        }
        E = E + (float) 1/Fatorial;
    }
    cout.precision(2);
    cout << "O valor da sequencia é: "<<fixed<<E<< endl;
    return 0;
}
