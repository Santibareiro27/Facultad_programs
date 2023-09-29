#include<iostream>
using namespace std;

int main()
{
    float N, M;
    bool A=1;
    cout<<"Ingrese numeros: "<<endl;
    cin>>N;
    M=N;
    while(N>=0)
    {
        cin>>N;
        if(N<M && N>=0)
        {
            A=0;
        }
        M=N;
    }
    cout<<endl;
    if(A==1)
        cout<<"Esta en orden ascendente.";
    if(A==0)
        cout<<"No esta en orden ascendente.";
    return 0;
}