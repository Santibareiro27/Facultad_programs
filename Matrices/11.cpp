#include <iostream>
#define N 12
using namespace std;
int main()
{
    int A[N][N], B[N][N], i, j;
    bool b=true;
    cout<<"Ingresar Matriz 1:"<<endl;
    for (i=0;i<N;i++)
    {
        for (j=0;j<N;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"Ingresar Matriz 2:"<<endl;
    for (i=0;i<N;i++)
    {
        for (j=0;j<N;j++)
        {
            cin>>B[i][j];
            if (i==j)
            {
                if (A[i][j]!=B[i][j])
                {
                    b=false;
                }
            }
        }
    }
    if (b)
    {
        cout<<endl<<"Las diagonales son iguales";
    }
    else
    {
        cout<<endl<<"Las diagonales NO son iguales";
    }
    
    return 0;
}