#include <iostream>

using namespace std;

int main()
{
    int a,b,c=2;
    a=3;
    b=b-2;
    c=c*3;
    if (c > 3 && c < 10) {
        b = (b + a) % 2;
    } else {
        b = b + a * 2;
    }
    cout <<a<<" "<<b<<" "<<c<< endl;
    return 0;
}
