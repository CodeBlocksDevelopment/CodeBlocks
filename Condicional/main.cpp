#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string nome;
float nota1, nota2, nota3;
float media;

int main()
{
    cout << "Digite o nome do aluno:" << endl;
    getline(cin,nome);
    cout << "Digite as notas A1, A2, A3: " << endl;
    cout << "Primeira nota" << endl;
    cin >> nota1;
    cout << "Segunda nota" << endl;
    cin >> nota2;
    cout << "Terceira nota" << endl;
    cin >> nota3;
    media = (nota1 + nota2 + nota3)/3;
    cout << "O aluno: " << nome << " está: " << endl;
    if ( media > 7 ) {
        cout << "Aprovado com media: "<< media << endl;
    } else
    if ( media <= 7 && media > 5) {
        cout << "Em recuperação com média: " << media << endl;
    } else {
        cout << "Reprovado com média: " << media << endl;
    }
    return 0;
}
