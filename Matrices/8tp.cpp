#include <iostream>
#define N 2
#define M 2
using namespace std;
int main()
{
    int A[N][M], B[N][M], C[N][M], i, j;
    cout<<"Ingresar Matriz A:"<<endl;
    for (i=0;i<N;i++)
    {
        for (j=0;j<M;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<endl<<"Ingresar Matriz B (Para restar):"<<endl;
    for (i=0;i<N;i++)
    {
        for (j=0;j<M;j++)
        {
            cin>>B[i][j];
            C[i][j]=A[i][j]-B[i][j];
        }
    }
    cout<<endl<<"Matriz C:"<<endl;
    for (i=0;i<N;i++)
    {
        for (j=0;j<M;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}