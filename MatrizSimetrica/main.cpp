#include <iostream>

using namespace std;

int matriz [3][3];

int main()
{
    //Leitura dos valores da matriz
    for (int i=0; i<3;i++)
     for (int j=0; j<3; j++){
        cout <<"Valor["<<i+1<<","<<j+1<<"]: ";
        cin>> matriz[i][j];
     }
    //Testar se a matriz e simetrica
    bool isSimetric=true;
    for (int i=0; i<3;i++)
     for (int j=0; j<3; j++)
        isSimetric = isSimetric && (matriz[i][j]==matriz[j][i]);

    if (isSimetric)
      cout << "Matriz simetrica!!"<<endl;
    else
      cout << "Matriz nao simetrica!!"<<endl;

    cout << "Fim do programa!!" << endl;
    return 0;
}
