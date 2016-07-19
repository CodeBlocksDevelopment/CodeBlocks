#include <iostream>

using namespace std;

const int EXIT_SUCCESS = 0;

int main()
{
    int a,b,c;

    a = 3;
    b = a * 3;
    c = a % 2;
    if ( a>b && c<a) {
        a = b * 8;
        b = c * a;
        c = 2 * a;
    } else if (b>c) {
        a = a + 1;
        b = 4 * (a + 2);
        c = 3 * a;
    } else {
        a = b;
        b = a + c;
        c = a;
    }
    cout << "Os valores de a, b e c são: "<<a<<" "<<b<<" "<<c<<endl;
    return EXIT_SUCCESS;
}
