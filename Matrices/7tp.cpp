#include <iostream>
#define M 3
#define N 3
using namespace std;
int main()
{
    int A[M][N], i, j, d=0;
    cout<<"Ingresar Matriz:"<<endl;
    for (i=0;i<M;i++)
    {
        for (j=0;j<N;j++)
        {
            cin>>A[i][j];
            if (i==j)
            {
                d+=A[i][j];
            }
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
    cout<<endl<<"Suma de la diagonal principal: "<<d;
    return 0;
}