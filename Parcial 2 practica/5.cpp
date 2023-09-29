#include <iostream>
#define M 10
#define N 10
using namespace std;

int main() {
    int A[M][N], i, j, k=0, l=0;
	for (i=0;i<M;i++)
	{
		for (j=0;j<N;j++)
		{
			cout<<"Ingrese la posicion ["<<i<<"-"<<j<<"] :";
            cin>>A[i][j];
            if (A[i][j]>A[k][l])
            {
                k=i;
                l=j;
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
    cout<<endl<<"El mayor valor es: "<<A[k][l]<<endl;
    cout<<"Y se encuentra en la posicion ["<<k<<"]["<<l<<"]";
    
	return 0;
}
