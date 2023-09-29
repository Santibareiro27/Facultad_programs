#include <iostream>
#define M 2
#define N 2
using namespace std;

int main(int argc, char const *argv[])
{
    int i, j, A[M][N], s=0;
    cout<<"Ingresar matriz:"<<endl;
    for (i=0;i<M;i++)
    {
        for (j=0;j<N;j++)
        {
            cin>>A[i][j];
            if (A[i][j]!=0)
            {
                s++;
            }
        }
    }
    cout<<endl<<"Matriz:"<<endl;
    for (i=0;i<M;i++)
    {
        for (j=0;j<N;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"Suma de la cantidad de positivos y negativos: "<<s;

    return 0;
}