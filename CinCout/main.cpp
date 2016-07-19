#include <iostream>

using namespace std;

string frase;
int numero[10];
char c;

int main()
{
 /*   cout << "Digite uma frase: "<<"\n";
    getline(cin,frase);
    for (int i=0;i<10;i++){
        cout << "Digite "<< (i+1) << "º valor: ";
        cin >> numero[i];
    } */
    do {

        cout << "Digite A para somar: \n";
        cout << "Digite B para subtrair: \n";
        cout << "Digite E para sair \n";
        cout << "Opção: ";
        cin.get(c);
        switch (toupper(c)) {
            case 'A':
                cout << "O valor é: "<< c << endl;
                break;
            case 'B':
                cout << "O valor é: "<< c << endl;
                break;
        }
    } while (toupper(c) != 'E');

    cout << "Fim do Programa!!" << endl;
    return 0;
}
