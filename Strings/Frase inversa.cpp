#include <iostream>
#include <cstring>
#define N 51
using namespace std;
int main()
{
    char A[N];
    int i;
    cin.get(A,N);
    cout<<endl;
    for (i=strlen(A);i>=0;i--)
    {
        cout<<A[i];
    }
    
    return 0;
}