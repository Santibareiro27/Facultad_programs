#include <iostream>
#define N 3
using namespace std;
int main()
{
    int A[N][N], i, j;
    bool d=true;
    for (i=0;i<N;i++)
    {
        for (j=0;j<N;j++)
        {
            cin>>A[i][j];
            if (i!=j and A[i][j]!=0)
            {
                d=false;
            }
        }
    }
    cout<<endl<<"Matriz:"<<endl;
    for (i=0;i<N;i++)
    {
        for (j=0;j<N;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    if (d)
    {
        cout<<endl<<"La matriz es diagonal";
    }
    else
    {
        cout<<endl<<"La matriz NO es diagonal";
    }

    return 0;
}