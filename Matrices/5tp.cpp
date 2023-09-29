#include <iostream>
#define N 2
#define M 3
using namespace std;
int main()
{
    int A[N][M], B[M][N], i, j;
    cout<<"Ingresar Matriz A:"<<endl;
    for (i=0;i<N;i++)
    {
        for (j=0;j<M;j++)
        {
            cin>>A[i][j];
            B[j][i]=A[i][j];
        }
    }
    cout<<endl<<"Matriz A:"<<endl;
    for (i=0;i<N;i++)
    {
        for (j=0;j<M;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"Matriz B:"<<endl;
    for (i=0;i<M;i++)
    {
        for (j=0;j<N;j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}