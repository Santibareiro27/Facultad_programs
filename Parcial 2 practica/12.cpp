#include <iostream>
#define M 5
#define N 5
using namespace std;

int main(int argc, char const *argv[])
{
    int i, j, A[M][N], K;
    cout<<"Ingresar constante:"<<endl;
    cin>>K;
    cout<<endl<<"Matriz:"<<endl;
    for (i=0;i<M;i++)
    {
        for (j=0;j<N;j++)
        {
            A[i][j]=K+i*M+j+1;
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}