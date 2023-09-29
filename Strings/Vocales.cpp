#include <iostream>
#define N 11
using namespace std;
int main()
{
    char A[N], V[N]="AEIOUaeiou", C[N]="          ";
    int i, j, v=0;
    cout<<"Ingresar cadena: ";
    cin.get(A,N);
    for (i=0;i<N-1;i++)
    {
        for (j=0;j<N-1;j++)
        {
            if (A[i]==V[j])
            {
                C[i]=A[i];
                v++;
            }
        }
    }
    cout<<endl<<A<<" tiene "<<v<<" vocales:"<<endl;
    for (i=0;i<N-1;i++)
    {
        if (C[i]!=32)
        {
            cout<<C[i]<<" ";
        }
    }

    return 0;
}