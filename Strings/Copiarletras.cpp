#include <iostream>
#include <cstring>
#include <cctype>
#define N 101
using namespace std;
int main()
{
    char A[N], B[N];
    int i, c=0;
    cin.get(A,N);
    for (i=0;i<strlen(A);i++)
    {
        if (isalpha(A[i]))
        {
            B[c]=A[i];
            if (B[c]>='a')
            {
                B[c]-=32;
            }
            c++;
        }
    }
    cout<<endl<<A;
    cout<<endl<<B;
    
    return 0;
}