#include <iostream>
using namespace std;

int main()
{
    int N, C, Fs=1, F=1, T;
    cout<<"Ingrese la cantidad de numeros de Fibonacci que desea ver: ";
    cin>>N;
    if (N>0)
    {
        cout<<endl<<"0";
    }
    for (C=2;C<=N;C++)
    {
        cout<<endl<<F;
        T=F;
        F=Fs;
        Fs=Fs+T;
    }
    
    return 0;
}
