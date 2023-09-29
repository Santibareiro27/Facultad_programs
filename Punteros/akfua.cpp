#include <iostream>
#define N 5
using namespace std;

int main(int argc, char const *argv[])
{
    int V[N], i, aux, flag, *p;
    cout<<"Ingresar un vector de numeros enteros:"<<endl;
    for (i=0;i<N;i++)
    {
        p=&V[i];
        cin>>*p;
    }

    do
    {
        flag=true;
        for (i=0;i<N-1;i++)
        {
            if (V[i]>V[i+1])
            {
                flag=false;
                aux=V[i];
                V[i]=V[i+1];
                V[i+1]=aux;
            }
        }
        
    } while (flag==false);
    
    for (i=0;i<N;i++)
    {
        cout<<endl<<V[i];
    }
    
    
    return 0;
}