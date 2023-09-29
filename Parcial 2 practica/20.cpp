#include <iostream>
#define N 5
using namespace std;

int main(int argc, char const *argv[])
{
    int i, j, A[N][N];
    cout<<endl<<"Matriz:"<<endl;
    for (i=0;i<N;i++)
    {
        for (j=0;j<N;j++)
        {
            A[i][j]=1;
        }
    }
    cout<<endl<<"Matriz 1:"<<endl;
    for (i=0;i<N;i++)
    {
        for (j=0;j<N;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"Matriz 2:"<<endl;
    for (i=0;i<N;i++)
    {
        for (j=0;j<N;j++)
        {
            if (i==j or i==0 or j==0 or i==N-1 or j==N-1)
            {
                A[i][j]=0;
            }
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"Matriz 3:"<<endl;
    for (i=0;i<N;i++)
    {
        for (j=0;j<N;j++)
        {
            A[i][j]=i+j;
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"Matriz 4:"<<endl;
    for (i=0;i<N;i++)
    {
        for (j=0;j<N;j++)
        {
            if (i==j)
            {
                A[i][j]=(i+1);
            }
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"Matriz 5:"<<endl;
    for (i=0;i<N;i++)
    {
        for (j=0;j<N;j++)
        {
            if (i%2==0)
            {
                A[i][j]=j+1;
            }
            else
            {
                A[i][j]=N-j;
            }
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}