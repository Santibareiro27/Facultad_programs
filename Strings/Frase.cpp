#include <iostream>
#include <cstring>
#define N 51
using namespace std;
int main()
{
    char A[N];
    int i, p=1;
    cout<<"Introduzca una frase (menos de 50 caracteres):"<<endl;
    cin.get(A,N);
    for (i=0;i<strlen(A);i++)
    {
        if (A[i]==32)
        p++;
    }
    cout<<endl<<"Hay "<<p<<" palabras";
}