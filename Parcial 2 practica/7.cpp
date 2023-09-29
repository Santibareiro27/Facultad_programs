#include <iostream>
#define M 6
using namespace std;

int main()
{
    int V[M], i, aux;
    cout<<"Vector:"<<endl;
    for (i=0;i<M;i++)
    {
        cin>>V[i];
    }
    cout<<endl;
    for (i=0;i<M;i++)
    {
        cout<<V[i]<<" ";
    }
    cout<<endl<<"Vector intercambiado:"<<endl;
    for (i=0;i<M;i++)
    {
        if (i<M-i-1)
        {
            aux=V[i];
            V[i]=V[M-i-1];
            V[M-i-1]=aux;
        }
        cout<<V[i]<<" ";
    }
    
    return 0;
}