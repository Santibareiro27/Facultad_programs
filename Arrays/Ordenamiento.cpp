#include <iostream>
#define N 6
using namespace std;
int main()
{
    int V[N], i, j, aux;
    bool b;
    cout<<"Ingrese el vector:"<<endl;
    for (i=0;i<N;i++)
    {
        cin>>V[i];
    }
    for (i=0;i<N;i++)
    {
        for (j=0;j<N-1;j++)
        {
            if(V[j]>V[j+1])
            {
                aux=V[j];
                V[j]=V[j+1];
                V[j+1]=aux;
            }
        }
    }
    cout<<endl<<"Mostrar 1:"<<endl;
    for (i=0;i<N;i++)
    {
        cout<<V[i]<<endl;
    }
    for (i=0;i<N-1;i++)
    {
        for (j=i+1;j<N;j++)
        {
            if(V[i]<V[j])
            {
                aux=V[i];
                V[i]=V[j];
                V[j]=aux;
            }
        }
    }
    cout<<endl<<"Mostrar 2:"<<endl;
    for (i=0;i<N;i++)
    {
        cout<<V[i]<<endl;
    }
    do
    {
        b=false;
        for(i=0;i<N-1;i++)
        {
            if(V[i]>V[i+1])
            {
                aux=V[i];
                V[i]=V[i+1];
                V[i+1]=aux;
                b=true;
            }
        }
    } while (b==true);
    cout<<endl<<"Mostrar 3:"<<endl;
    for (i=0;i<N;i++)
    {
        cout<<V[i]<<endl;
    }
    for (i=0;i<N-1;i++)
    {
        if(V[i]<V[i+1])
        {
            aux=V[i];
            V[i]=V[i+1];
            V[i+1]=aux;
            i=-1;
        }
    }
    cout<<endl<<"Mostrar 4:"<<endl;
    for (i=0;i<N;i++)
    {
        cout<<V[i]<<endl;
    }
    
    return 0;
}
