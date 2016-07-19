#include <iostream>

using namespace std;

float number;
float percentual;

int main()
{
    cout << "Digite o valor: " << endl;
    cin >> number;
    cout << "Digite o percentual" << endl;
    cin >> percentual;
    number = number * (percentual/100);
    cout << "O equivalente a " << percentual << " % é: "<< number << endl;
    return 0;
}
