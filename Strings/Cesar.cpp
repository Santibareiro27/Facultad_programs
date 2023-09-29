#include <iostream>
#include <cstring>
#define N 11
using namespace std;
int main()
{
    char A[N];
    int i;
    cout<<"Ingrese una palabra: ";
    cin.get(A,N);
    for (i=0;i<strlen(A);i++)
    {
        if ((A[i]>='A' and A[i]<='M') or (A[i]>='a' and A[i]<='m'))
        {
            A[i]+=13;
        }
        else
        {
            A[i]-=13;
        }
    }
    cout<<"Codigo cesar: "<<A;

    return 0;
}