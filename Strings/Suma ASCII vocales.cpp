#include <iostream>
#define N 11
using namespace std;
int main()
{
    char A[N], V[N]="AEIOUaeiou";
    int i, j, Acu=0;
    cout<<"Ingresar una palabra de 10 caracteres: ";
    cin.get(A,N);
    for (i=0;i<N-1;i++)
    {
        for (j=0;j<N-1;j++)
        {
            if (A[i]==V[j])
            {
                Acu+=A[i];
            }
        }
    }
    cout<<endl<<"El resultado de la suma ASCII de las vocales es: "<<Acu;

    return 0;
}