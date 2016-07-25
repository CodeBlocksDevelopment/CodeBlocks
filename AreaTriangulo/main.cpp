#include <iostream>

using namespace std;

int base, altura, area;

int main()
{
    do {
        cout<<"Digite o valor da base: ";
        cin>>base;
    } while (base <= 0);
    do {
        cout<<"Digite o valor da altura: ";
        cin>>altura;
    } while (altura <= 0);
    area = (base * altura)/2;
    cout<<"A área do triângulo é: "<<area;
    return 0;
}
