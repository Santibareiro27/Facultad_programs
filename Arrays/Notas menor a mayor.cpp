#include <iostream>
using namespace std;
#define N 10

int main(int argc, char *argv[]) {
	int i, j, M, B=0;
	float V[N],AUX;
	do {
		cout<<"Menu"<<endl;
		cout<<"1. Ingresar notas"<<endl;
		cout<<"2. Comparar de menor a mayor"<<endl;
		cout<<"3. Comparar de mayor a menor"<<endl;
		cout<<"4. Mostrar notas"<<endl;
		cout<<"5. Finalizar"<<endl;
		cin>>M;
		if (B==0 && M!=1 && M!=5)
			cout<<"No hay notas ingresadas";
		switch (M)
		{
		case 1:
			cout<<endl<<"Ingrese las notas:"<<endl;
			for (i=0; i<N; i++)
			{
				cin>>V[i];
			}
			B=1;
			break;
			
		case 2:
			for (i=0; i<N; i++)
			{
				for (j=0; j<N-1; j++)
				{
					if (V[j]>V[j+1])
					{
						AUX=V[j];
						V[j]=V[j+1];
						V[j+1]=AUX;
					}
				}
			}
			break;
			
		case 3:
			for (i=0; i<N-1; i++)
			{
				for (j=i+1; j<N; j++)
				{
					if (V[i]<V[j])
					{
						AUX=V[i];
						V[i]=V[j];
						V[j]=AUX;
					}
				}
			}
			break;
			
		case 4:
			cout<<endl<<"Las notas son:"<<endl;
			for (i=0; i<N; i++)
			{
				cout<<V[i]<<endl;
			}
			break;
			
		default:
			break;
		}
		cout<<endl;
	} while(M!=5);
	return 0;
}

