#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Digite o primeiro valor: "<<endl;
    cin >> a;
    cout << "Digite o segundo valor: "<<endl;
    cin >> b;
    cout << "Digite o terceiro valor: "<<endl;
    cin >> c;
    if ((a >= b) && (a >= c)) {
        if (b >= c)
            cout << "Em ordem decrescente: "<<a<<" "<<b<<" "<<c<<endl;
        else
            cout << "Em ordem decrescente: "<<a<<" "<<c<<" "<<b<<endl;
    } else
    if ((b >= a) && (b >= c)) {
        if (a >= c)
            cout << "Em ordem decrescente: "<<b<<" "<<a<<" "<<c<<endl;
        else
            cout << "Em ordem decrescente: "<<b<<" "<<c<<" "<<a<<endl;
    } else
        if (a >= b)
            cout << "Em ordem decrescente: "<<c<<" "<<a<<" "<<b<<endl;
        else
            cout << "Em ordem decrescente: "<<c<<" "<<b<<" "<<a<<endl;
    return 0;
}
