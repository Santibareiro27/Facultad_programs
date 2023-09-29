#include <iostream>
#include <cstring>
#define N 12
using namespace std;
int main()
{
    char A[N], B[N];
    int i;
    cin.get(A,N);
    for (i=0;i<strlen(A);i++)
    {
        if (A[i]>='A' and A[i]<='Z')
        {
            A[i]+=32;
        }
    }
    cout<<endl<<strcpy(B,A);
    return 0;
}