#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a,b;

    b = 6;
    a = b + 1;
    a = a * 3;
    a = a % 18;
    if (a > 3) {
        a = b * 4;
        b = b + 1;
    } else {
        a = a - 8;
        b = b + a;
    }
    cout << "O valor de a e b são: "<<a<<" "<<b<< endl;
    return 0;
}
