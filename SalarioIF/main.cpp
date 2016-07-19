#include <iostream>

using namespace std;

int main()
{
    float salario;
    cout <<"Digite o valor do salário: "<<endl;
    cin >> salario;
    if (salario < 780.00){
        salario = salario + salario * (float) 45/100;
    } else
    if (salario >= 780.00 && salario <= 1387.00) {
        salario = salario + salario * (float) 32/100;
    } else
        salario = salario + salario * (float) 12/100;
    cout.precision(2);
    cout << "O salário com acréscimo e: "<<fixed<<salario<< endl;
    return 0;
}
