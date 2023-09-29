#include <iostream>
#include <cstring>
#define N 51
using namespace std;
int main()
{
    char A[N];
    int i, a=0, b=0;
    cin.get(A,N);
    for (i=0;i<strlen(A);i++)
    {
        if (A[i]=='a')
        a++;
        else if (A[i]=='b')
        b++;
    }
    cout<<endl<<"Hay "<<a<<" letras a";
    cout<<endl<<"Hay "<<b<<" letras b";
    
    return 0;
}