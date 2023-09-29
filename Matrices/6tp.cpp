#include <iostream>
#define N 2
#define M 2
#define P 2
using namespace std;
int main()
{
    int A[N][M], B[M][P], C[N][P], i, j, k;
    cout<<"Ingresar Matriz A:"<<endl;
    for (i=0;i<N;i++)
    {
        for (j=0;j<M;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"Ingresar Matriz B:"<<endl;
    for (i=0;i<M;i++)
    {
        for (j=0;j<P;j++)
        {
            cin>>B[i][j];
        }
    }
    for (i=0;i<N;i++)
    {
        for (j=0;j<P;j++)
        {
            C[i][j]=0;
            for (k=0;k<M;k++)
            {
                C[i][j]+=A[i][k]*B[k][j];

            }
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}