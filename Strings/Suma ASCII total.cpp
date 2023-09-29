#include <iostream>
#define N 11
using namespace std;
int main()
{
    char A[N];
    int i, Acu=0;
    cout<<"Ingrese una palabra (No mas de 10 caracterers): ";
    cin.get(A,N);
    for (i=0;i<N-1;i++)
    {
        Acu+=A[i];
    }
    cout<<endl<<"La suma de los valores ASCII es: "<<Acu;

    return 0;
}