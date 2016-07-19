#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float salario_bruto, salario_liquido;
    int gratificacao;

    cout.precision(2);
    cout << "Digite um salário bruto: " << endl;
    cin >> salario_bruto;
    if (salario_bruto <= 350.00) {
        salario_liquido = (salario_bruto - (salario_bruto * 7/100));
        salario_liquido = salario_liquido + 100.00;
    } else
    if (salario_bruto > 350.00 && salario_bruto <= 600.00) {
        salario_liquido = (salario_bruto - (salario_bruto * 7/100));
        salario_liquido = salario_liquido + 75.00;
    } else
    if (salario_bruto > 600.00 && salario_bruto <= 900.00) {
        salario_liquido = (salario_bruto - (salario_bruto * 7/100));
        salario_liquido = salario_liquido + 50.00;
    } else {
        salario_liquido = (salario_bruto - (salario_bruto * 7/100));
        salario_liquido = salario_liquido + 35.00;
    }
    cout << "O salário líquido é: "<<fixed<<salario_liquido<<endl;
    return 0;
}
