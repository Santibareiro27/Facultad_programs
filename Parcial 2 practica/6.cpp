#include <iostream>
#define M 5
using namespace std;

int main() {
    int A[M], B[M], C[M], i;
    cout<<endl<<"Ingresar vector stock:"<<endl;
	for (i=0;i<M;i++)
	{
		cout<<"Ingrese la posicion ["<<i+1<<"]:";
        do
        {
            cin>>A[i];
            if (A[i]<0)
            {
                cout<<endl<<"El stock no puede ser menor a 0: ";
            }
        } while (A[i]<0);
	}
    cout<<endl<<"Ingresar vector pedidos:"<<endl;
    for (i=0;i<M;i++)
	{
		cout<<"Ingrese la posicion ["<<i+1<<"]:";
        do
        {
            cin>>B[i];
            if (B[i]<0)
            {
                cout<<endl<<"No pueden haber pedidos negativos: ";
            }
            else
            {
                if (B[i]>A[i])
                {
                    C[i]=2*(B[i]-A[i]);
                }
                else
                {
                    C[i]=B[i];
                }
            }
        } while (B[i]<0);
	}
    cout<<endl<<"Vector stock:"<<endl;
    for (i=0;i<M;i++)
	{
		cout<<A[i]<<" ";
	}
    cout<<endl<<"Vector pedidos:"<<endl;
    for (i=0;i<M;i++)
	{
		cout<<B[i]<<" ";
	}
    cout<<endl<<"Vector reposicion:"<<endl;
    for (i=0;i<M;i++)
	{
		cout<<C[i]<<" ";
	}

	return 0;
}
