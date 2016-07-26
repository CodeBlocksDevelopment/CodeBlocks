#include <iostream>
#include <math.h>

using namespace std;

int main()

{
    int a,b,c;
    cout << "Digite o coeficiente a:"<<endl;
    cin >> a;
    cout << "Digite o coeficiente b:"<<endl;
    cin >> b;
    cout << "Digite o coeficiente c:"<<endl;
    cin >> c;
    cout<<"Calculando o Delta...."<<endl;
    float delta = pow(b,2) - 4*a*c;
    cout.precision(2);
    cout <<fixed<<delta<<endl;
    if (delta >=0){
        cout << "A equaçao tem solucao real"<<endl;
        if (delta ==0){
            cout<<"A equacao tem solucao unica"<<endl;
            float x1 = (-b + sqrt(delta))/2*a;
            cout<<"x1: "<<fixed<<x1<<endl;
        } else {
            float x1 = (-b + sqrt(delta))/2*a;
            float x2 = (-b - sqrt(delta))/2*a;
            cout<<"A equacao tem duas solucoes"<<endl;
            cout<<"x1: "<<fixed<<x1<<" x2: "<<fixed<<x2<<endl;
        }
    } else {
        cout<<"A equacao nao tem solucao real"<<endl;
    }
    cout << "Fim do programa!!" << endl;
    return 0;
}
