#include <iostream>
#define M 2
#define N 2
using namespace std;

int main() {
	float T[M][N], D[M][N];
    int i, j, k, l;
	for (i=0;i<M;i++)
	{
		for (j=0;j<N;j++)
		{
			cout<<"Ingrese la posicion ["<<i<<"-"<<j<<"] :";
            do
            {
                cin>>T[i][j];
                if (T[i][j]==0)
                {
                    cout<<endl<<"El numero ingresado no puede ser 0, intente nuevamente: ";
                }
            } while (T[i][j]==0);
		}
	}
    cout<<endl<<"Ingrese la posicion que desea usar como dividendo:"<<endl;
    cout<<"Fila: ";
    do
    {
        cin>>k;
        if (k<0 or k>=M)
        {
            cout<<endl<<"La fila ingresada no existe, intente nuevamente: ";
        }
    } while (k<0 or k>=M);
    cout<<"Columna: ";
    do
    {
        cin>>l;
        if (l<0 or l>=N)
        {
            cout<<endl<<"La fila columna ingresada no existe, intente nuevamente: ";
        }
    } while (l<0 or l>=M);
    cout<<endl<<"Matriz:"<<endl;
    for (i=0;i<M;i++)
	{
		for (j=0;j<N;j++)
		{
            cout<<T[i][j]<<" ";
		}
        cout<<endl;
	}
    cout<<endl<<"Matriz dividida por "<<T[k][l]<<":"<<endl;
    for (i=0;i<M;i++)
	{
		for (j=0;j<N;j++)
		{
            D[i][j]=T[i][j]/T[k][l];
            cout<<D[i][j]<<" ";
		}
        cout<<endl;
	}

	return 0;
}
