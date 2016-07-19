#include <iostream>

using namespace std;

int a[] = {1,2,3,4,5};
int b[10];

int main()
{
    for (int i=0;i<10;i++){
        cout<<"Valor "<<(i+1)<<": ";
        cin>>b[i];
    }

    cout<<a[0];
    cout<<a[1];
    cout<<a[2];
    return 0;
}
