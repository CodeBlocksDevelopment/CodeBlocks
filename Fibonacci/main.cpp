#include <iostream>

using namespace std;

int num1,num2,res;

int main()
{
    num1=0;
    num2=1;
    cout<<num1<<" ";
    cout<<num2<<" ";
    for (int cont = 3; cont <= 10; cont++){
        res = num1 + num2;
        cout<<res<<" ";
        num1 = num2;
        num2 = res;
    }
    return 0;
}
