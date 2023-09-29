#include <iostream>
#include <cstring>
#define N 101
using namespace std;
int main()
{
    char A[N], B[N];
    int i, c=0;
    cin.get(A,N);
    
    for (i=strlen(A)-1;i>=0;i--)
    {
        B[c]=A[i];
        c++;
    }
    cout<<endl<<A;
    cout<<endl<<B;

    return 0;
}