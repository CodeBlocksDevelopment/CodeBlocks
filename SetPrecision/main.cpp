#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float number = 3.1459817284343;

int main()
{
    cout << setprecision(9);
  //  cout << "Digite um valor: " << endl;
  //  cin >> number;
  //  number = number/5;
    cout << "O número de saída é: " <<pow(number,2) << endl;
    cout << "A raiz e: " << sqrt(number) << endl;
    cout << "O seno é: " << sin(number) << endl;
    cout << "O cosseno é: " << cos(number) << endl;
    cout << "A tangente é: " << tan(number) << endl;
    return 0;
}
