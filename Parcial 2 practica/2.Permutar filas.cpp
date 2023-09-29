#include <iostream>
#define M 3
using namespace std;
int main()
{
    int A[M][M], V[M], I, J, i, j;
    cout<<"Ingrese la matriz:"<<endl;
    for (i=0;i<M;i++)
    {
        for (j=0;j<M;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"Que filas desea permutar?:"<<endl;
    do
    {
        cout<<"Fila I: ";
        cin>>I;
        I--;
        if (I<0 or I>=M)
        {
            cout<<endl<<"Error de ingreso, intente nuevamente"<<endl;
        }
    } while (I<0 or I>=M);
    do
    {
        cout<<"Fila J: ";
        cin>>J;
        J--;
        if (J<0 or J>=M)
        {
            cout<<endl<<"Error de ingreso, intente nuevamente"<<endl;
        }
    } while (J<0 or J>=M);
    for (i=0;i<M;i++)
    {
        V[i]=A[I][i];
        A[I][i]=A[J][i];
        A[J][i]=V[i];
    }
    cout<<"Matriz permutada:"<<endl;
    for (i=0;i<M;i++)
    {
        for (j=0;j<M;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}