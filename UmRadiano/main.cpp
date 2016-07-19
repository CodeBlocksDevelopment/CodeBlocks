#include <iostream>

using namespace std;

int main()
{
    float radiano =0;

    radiano = (float ) 360 / (2*3.1482);

    cout.precision(2);
    cout << "Um radiano tem : "<< fixed << radiano <<"º "<< endl;
    return 0;
}
