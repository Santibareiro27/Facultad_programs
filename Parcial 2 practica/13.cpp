#include <iostream>
#define M 3
#define N 3
using namespace std;

int main(int argc, char const *argv[])
{
    int i, j, A[M][N], F[M]={}, C[M]={};
    cout<<"Ingresar matriz:"<<endl;
    for (i=0;i<M;i++)
    {
        for (j=0;j<N;j++)
        {
            cin>>A[i][j];
            F[i]+=A[i][j];
            C[j]+=A[i][j];
        }
    }
    cout<<endl<<"Matriz:"<<endl;
    for (i=0;i<M;i++)
    {
        for (j=0;j<N;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"Suma de cada fila:"<<endl;
    for (i=0;i<M;i++)
    {
        cout<<F[i]<<endl;
    }
    cout<<endl<<"Suma de cada columna:"<<endl;
    for (i=0;i<N;i++)
    {
        cout<<C[i]<<" ";
    }

    return 0;
}