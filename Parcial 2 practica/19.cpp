#include <iostream>
#define M 7
#define N 3
using namespace std;

int main(int argc, char const *argv[])
{
    float L[M][N], P[M]={};
    int i, j, V[M];
    for (i=0;i<M;i++)
    {
        cout<<"Dia "<<i+1<<":"<<endl;
        for (j=0;j<N;j++)
        {
            cout<<"Vaca "<<j+1<<": ";
            cin>>L[i][j];
            P[i]+=L[i][j];
            if (j==0)
            {
                V[i]=1;
            }
            else if (L[i][j]>L[i][j-1])
            {
                V[i]=j+1;
            }
        }
    }
    cout<<endl<<"Produccion:";
    for (i=0;i<M;i++)
    {
        cout<<endl<<"Dia "<<i+1<<": ";
        for (j=0;j<N;j++)
        {
            cout<<L[i][j]<<" ";
        }
        cout<<" Total:"<<P[i]<<"  MVP:"<<V[i];
    }

    return 0;
}