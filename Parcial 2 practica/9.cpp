#include <iostream>
#include <cmath>
#define M 3
#define N 3
using namespace std;

int main()
{
    int A[M][N]={{1,2,3},{4,5,6},{7,8,9}}, i, j;
    cout<<"Matriz:"<<endl;
    for (i=0;i<M;i++)
    {
        for (j=0;j<N;j++)
        {
            A[i][j]=pow(A[i][j],2);
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}