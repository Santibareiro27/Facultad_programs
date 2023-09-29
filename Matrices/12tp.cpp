#include <iostream>
#define N 12
#define M 19
using namespace std;
int main()
{
    int A[N][M], i, j;
    cout<<"Ingresar Matriz:"<<endl;
    for (i=0;i<N;i++)
    {
        for (j=0;j<M;j++)
        {
            cin>>A[i][j];
            if (A[i][j]<0)
            {
                A[i][j]=0;
            }
        }
    }
    cout<<endl<<"Matriz:"<<endl;
    for (i=0;i<N;i++)
    {
        for (j=0;j<M;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}