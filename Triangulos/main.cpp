#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int x=0,y=0,z=0;
    int maior=0;

    cout << "Digite três valores --> X, Y, Z" << endl;
    cout << "Digite o valor de X: ";
    cin >> x;
    cout << "Digite o valor de Y: ";
    cin >> y;
    cout << "Digite o valor de Z: ";
    cin >> z;
    if ((x < (y + z)) && (y < (x+z)) && (z < (x+y))) {
        if ((x==y) && (x==z) && (z==y))
            cout << "Este triângulo é equilátero" << endl;
        else
        if ((x==y) || (x==z) || (z==y))
            cout << "Este triângulo é isósceles" << endl;
        else {
            cout << "Este triângulo é escaleno" << endl;
            if (x > (y+z)){
              if (pow(x,2) == pow(y,2) + pow(z,2)) {
                 cout << "Também é um triângulo retângulo" << endl;
              }
            } else
            if (y > (x+z)) {
              if (pow(y,2) == pow(x,2) + pow(z,2)) {
                 cout << "Também é um triângulo retângulo" << endl;
              }
            } else {
             if (pow(z,2) == pow(x,2) + pow(y,2)) {
                 cout << "Também é um triângulo retângulo" << endl;
              }
            }
        }
    } else {
        cout << "Estes valores não representam um triângulo" << endl;
    }
    return 0;
}
