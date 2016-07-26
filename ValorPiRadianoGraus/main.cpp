#include <iostream>

using namespace std;

# define pi 3.141592653589793238462643383279502884L

int main()
{
    cout << "1 radiano equivale em graus" <<endl;
    cout.precision(2);
    cout <<fixed<<360/(2*pi)<<" graus"<< endl;
    cout << "Fim do programa!!" << endl;
    return 0;
}
