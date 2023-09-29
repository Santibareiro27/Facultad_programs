#include <iostream>
#define N 5
#define M 6
using namespace std;
int main()
{
    int A[N][M], i, j, n=0, c=0;
    cout<<"Ingresar Matriz:"<<endl;
    for (i=0;i<N;i++)
    {
        for (j=0;j<M;j++)
        {
            cin>>A[i][j];
            if (A[i][j]<0)
            {
                n++;
            }
            if (i==j and A[i][j]==0)
            {
                c++;
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
    cout<<endl<<"Cantidad de elementos negativos: "<<n;
    cout<<endl<<"Cantidad de ceros en la diagonal: "<<c;
    
    return 0;
}