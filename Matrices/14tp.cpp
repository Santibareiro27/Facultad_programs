#include <iostream>
#define R 3
#define C 4
using namespace std;
int main()
{
    int A[R][C], Re[R]={0}, Co[C]={0}, i, j;
    cout<<"Ingresar Matriz:"<<endl;
    for (i=0;i<R;i++)
    {
        for (j=0;j<C;j++)
        {
            cin>>A[i][j];
            Re[i]+=A[i][j];
            Co[j]+=A[i][j];
        }
    }
    cout<<endl<<"Matriz:"<<endl;
    for (i=0;i<R;i++)
    {
        for (j=0;j<C;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"Suma renglones:"<<endl;
    for (i=0;i<R;i++)
    {
        cout<<Re[i]<<" ";
    }
    cout<<endl<<"Suma columnas:"<<endl;
    for (i=0;i<C;i++)
    {
        cout<<Co[i]<<" ";
    }
    
    return 0;
}