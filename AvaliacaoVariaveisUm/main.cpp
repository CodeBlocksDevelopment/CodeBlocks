#include <iostream>

using namespace std;

int main()
{
    int a = -2;
    int b =  3;
    int c = 25;

    c = (c % b) + a;
    b = a * b;
    if (a + c > 5 || b - c < 0) {
        a=a+1;
        b=b*2;
        c=c+3;
    } else {
        a=a+5;
        b=b*2;
        c=c+7;
    }
    cout <<a<<" "<<b<<" "<<c<< endl;
    return 0;
}
