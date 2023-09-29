#include <iostream>
#define N 4
using namespace std;
int main()
{
    int A[N][N], C[N][N]={0}, i, j, k, l;
    for (i=0;i<N;i++)
    {
        for (j=0;j<N;j++)
        {
            cin>>A[i][j];
            for (k=i;k>=0;k--)
            {
                for (l=j;l>=0;l--)
                {
                    if (A[i][j]==A[k][l])
                    {
                        C[k][l]=0;
                        C[i][j]++;
                    }
                }
            }
        }
    }
    for (i=0;i<N;i++)
    {
        for (j=0;j<N;j++)
        {
            if (C[i][j]!=0 and C[i][j]!=1)
            {
                cout<<A[i][j]<<" se repite "<<C[i][j]<<" veces"<<endl;
            }
        }  
    }

    return 0;
}