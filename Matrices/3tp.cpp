#include <iostream>
#define N 3
using namespace std;
int main()
{
    int A[N][N], i, j, m=0;
    for (i=0;i<N;i++)
    {
        for (j=0;j<N;j++)
        {
            cin>>A[i][j];
            if (A[i][j]>m)
            {
                m=A[i][j];
            }
        }
    }
    cout<<"La mayor venta fue de: "<<m;

    return 0;
}