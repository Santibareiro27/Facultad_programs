#include <iostream>
#include <cstring>
#define N 101
using namespace std;
int main()
{
    char A[N], B[N], C[N];
    int i=0, j, c=0;
    cin.get(A,N);
    strcpy(B,A);
    while (i<strlen(B))
    {
        if(isalpha(B[i])==false)
        {
            for (j=i;j<strlen(B);j++)
            {
                B[j]=B[j+1];
            }
            i--;
        }
        i++;
    }
    for (i=1;i<strlen(B);i+=2)
    {
        C[c]=B[i];
        c++;
    }
    cout<<endl<<B;
    /*No me sale xd*/
    
    return 0;
}