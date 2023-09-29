#include <iostream>
#include <cstring>
#include <cctype>
#define N 21
using namespace std;
int main()
{
    char A[N], B[N];
    int i;
    cout<<"Ingrese una cadena:"<<endl;
    cin.get(A,N);
    for (i=0;i<strlen(A);i++)
    {
        if (isalpha(A[i])==false)
        A[i]=32;
    }
    strcpy(B,A);
    cout<<B<<endl;
    for (i=1;i<strlen(B);i+=2)
    {
        cout<<" "<<B[i];
    }

    return 0;
}