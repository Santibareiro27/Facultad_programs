#include <iostream>
#define N 5
using namespace std;

int main(int argc, char const *argv[])
{
    int V[N], i, aux, *p;
    cout<<"Ingresar un vector de numeros enteros:"<<endl;
    do
    {
        p=&V[i];
        cin>>*p;
        if (i!=0)
        {
           while (*(p)<*(p-1))
           {
            aux=*p;
            *p=*(p-1);
            *(p-1)=aux;
            p--;
           }
        }
        i++;
    } while (i<N);

    for (i=0;i<N;i++)
    {
        cout<<V[i];
    }
    
    
    return 0;
}