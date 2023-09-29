#include <iostream>
#define N 3
using namespace std;
int main()
{
    int A[N][N], i, j, a=0;

    for (i=0;i<N;i++)
    {
        for (j=0;j<N;j++)
        {
            cin>>A[i][j];
            if (i==j)
            {
                a+=A[i][j];
            }
        }
    }
    cout<<endl;
    for (i=0;i<N;i++)
    {
        for (j=0;j<N;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"La suma de la diagonal es: "<<a;
    return 0;
}