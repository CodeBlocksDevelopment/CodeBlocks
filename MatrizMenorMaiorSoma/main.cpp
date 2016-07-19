#include <iostream>

using namespace std;

int matriz[3][3];
int maior;
int menor;
int soma = 0;

int main()
{
    cout << "Digite os valores para a matriz: "<<endl;
    for (int i =0; i<3; i+=1){
        for (int j=0; j<3; j+=1){
          cout << "Valor["<<i+1<<"]["<<j+1<<"] = ";
          cin >> matriz[i][j];
          if (i == 0 && j == 0){
            maior = matriz[i][j];
            menor = matriz[i][j];
          } else {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
          }
          soma = soma + matriz[i][j];
        }
    }
    cout << "Maior valor da matriz: "<<maior<< endl;
    cout << "Menor valor da matriz: "<<menor<< endl;
    cout << "Somatória dos valores: "<<soma<< endl;
    return 0;
}
