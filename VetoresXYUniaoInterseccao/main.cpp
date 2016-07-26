#include <iostream>

using namespace std;

int X[10],Y[10];

int main()
{
    cout<<"Digite dez valores distintos para o vetor X!!"<<endl;
    for (int i=0;i<10;i++){
        cout<<"X["<<i+1<<"]: ";
        cin>>X[i];
        for (int j=0; j<i;j++)
          if (X[i]==X[j]){
               i--;
               break;
          }
    }
    cout<<"Digite dez valores distintos para o vetor Y!!"<<endl;
    for (int i=0;i<10;i++){
        cout<<"Y["<<i+1<<"]: ";
        cin>>Y[i];
        for (int j=0; j<i;j++)
          if (Y[i]==Y[j]){
               i--;
               break;
          }
    }
    cout<<"Apresentado o conjunto uniao"<<endl;
    for (int i=0; i<10; i++){
        cout<<X[i]<<" ";
    }
    for (int j=0; j<10;j++){
        bool found=false;
        for (int i=0;i<10;i++){
            if (Y[j]==X[i]) {
                found = !found;
                break;
            }
        }
        if (!found)
            cout<<Y[j]<<" ";
    }
    cout<<endl;
    cout<<"Apresentado o conjunto intersecao"<<endl;
    for (int i=0; i<10;i++)
      for (int j=0; j<10;j++)
        if (X[i]==Y[j])
          cout<<X[i]<<" ";
    cout << "Fim do programa!!" << endl;
    return 0;
}
