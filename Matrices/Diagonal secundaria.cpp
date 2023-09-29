#include <iostream>
#define N 3
using namespace std;
int main()
{
    int A[N][N], i, j;
    for (i=0;i<N;i++)
    {
        cout<<"Fila "<<i+1<<":"<<endl;
        for (j=0;j<N;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"Matriz:"<<endl;
    for (i=0;i<N;i++)
    {
        for (j=0;j<N;j++)
        {
            if (j!=0)
            {
                cout<<"-";
            }
            cout<<A[i][j];
        }
        cout<<endl;
    }
    cout<<"Matriz diagonal secundaria:"<<endl;
    for (i=0;i<N;i++)
    {
        for (j=0;j<N;j++)
        {
            if (j!=0)
            {
                cout<<"-";
            }
            if (i==N-j-1)
            {
                cout<<A[i][j];
            }
            else
            {
                cout<<"[]";
            }
        }
        cout<<endl;
    }
    cout<<"Matriz trangular superior secundaria:"<<endl;
    for (i=0;i<N;i++)
    {
        for (j=0;j<N;j++)
        {
            if (j!=0)
            {
                cout<<"-";
            }
            if (i+j<N-1)
            {
                cout<<A[i][j];
            }
            else
            {
                cout<<"[]";
            }
        }
        cout<<endl;
    }
    cout<<"Matriz trangular inferior secundaria:"<<endl;
    for (i=0;i<N;i++)
    {
        for (j=0;j<N;j++)
        {
            if (j!=0)
            {
                cout<<"-";
            }
            if (i+j>N-1)
            {
                cout<<A[i][j];
            }
            else
            {
                cout<<"[]";
            }
        }
        cout<<endl;
    }

    return 0;
}
