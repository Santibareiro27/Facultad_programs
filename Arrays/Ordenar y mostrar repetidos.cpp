#include <iostream>
#define N 6
using namespace std;
int main()
{
    int V[N], C[N]={0}, i, j, b, c, aux;
    cout<<"Ingrese el vector:"<<endl;
    for (i=0;i<N;i++)
    {
        cin>>V[i];
        for (j=i-1;j>=0;j--)
        {
            if (V[i]==V[j])
            {
                C[i]++;
            }
        }
    }
    do
    {
        b=false;
        for (i=0;i<N-1;i++)
        {
            if (V[i]>V[i+1])
            {
                aux=V[i];
                V[i]=V[i+1];
                V[i+1]=aux;
                aux=C[i];
                C[i]=C[i+1];
                C[i+1]=aux;
                b=true;
            }
        }
    } while (b==true);
    cout<<endl<<"Mostrar:"<<endl;
    for (i=0;i<N;i++)
    {
        cout<<V[i]<<" ";
        for (j=i+1;j<N;j++)
        {
            if (V[i]==V[j])
            C[i]=0;
        }
    }
    cout<<endl<<"Repeticiones:"<<endl;
    for (i=0;i<N;i++)
    {
        if (C[i]!=0)
        cout<<"El numero "<<V[i]<<" se repite "<<C[i]+1<<" veces"<<endl;
    }
    return 0;
}