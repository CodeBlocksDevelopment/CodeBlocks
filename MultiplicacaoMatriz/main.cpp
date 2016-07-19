#include <iostream>

using namespace std;

int matrizUm[2][2], matrizDois[2][2], matrizTres[2][2];

int main()
{
    cout << "Digite os valores da matriz um: "<< endl;
    for (int i =0 ; i < 2; i++){
        for (int j=0; j < 2; j++){
            cout << "Valor: ["<<(i+1)<<"]["<<(j+1)<<"]:";
            cin >> matrizUm[i][j];
        }
    }
    cout << "Digite os valores da matriz dois: "<< endl;
    for (int i =0 ; i < 2; i++){
        for (int j=0; j < 2; j++){
            cout << "Valor: ["<<(i+1)<<"]["<<(j+1)<<"]:";
            cin >> matrizDois[i][j];
        }
    }
    cout << "Multiplicando as matrizes"<< endl;
    for (int i =0 ; i < 2; i++){
        for (int j=0; j < 2; j++){
            for (int k=0; k < 2; k++){
                matrizTres[i][j] = matrizTres[i][j] + (matrizUm[i][k] * matrizDois[k][j]);
            }
        }
    }
    cout << "Resultado: " << endl;
    for (int i =0 ; i < 2; i++){
        for (int j=0; j < 2; j++){
            cout << "Valor: ["<<(i+1)<<"]["<<(j+1)<<"]:"<<matrizTres[i][j]<< endl;
        }
    }
    cout << "Fim do Programa!" << endl;
    return 0;
}
