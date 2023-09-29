#include <iostream>
#define N 15
#define M 12
using namespace std;
int main()
{
    int A[N][M], i, j, m, s=0, n=0;
    cout<<"Ingresar Matriz:"<<endl;
    for (i=0;i<N;i++)
    {
        for (j=0;j<M;j++)
        {
            cin>>A[i][j];
            if (i==0 and j==0)
            {
                m=A[i][j];
            }
            if (A[i][j]<m)
            {
                m=A[i][j];
            }
            if (i<5)
            {
                s+=A[i][j];
            }
            if (j>=4 and j<9)
            {
                if (A[i][j]<0)
                {
                    n++;
                }
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
    cout<<endl<<"Menor elemento: "<<m;
    cout<<endl<<"Suma de las 5 primeras filas: "<<s;
    cout<<endl<<"Negativos columna 5 a 9: "<<n;
    
    return 0;
}