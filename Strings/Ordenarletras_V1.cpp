#include <iostream>
#include <cstring>
#define N 101
using namespace std;
int main()
{
    char A[N], B[N];
    int i, c=0;
    cin.get(A,N);
    for (i=1;i<strlen(A);i+=2)
    {
        if (isalpha(A[i]))
        {
            B[c]=A[i];
            c++;
        }
    }
    cout<<endl<<B;
    for (i=0;i<strlen(A);i+=2)
    {
        if (isalpha(A[i]))
        {
            B[c]=A[i];
            c++;
        }
    }
    B[c]=0;
    cout<<endl<<B;

    return 0;
}