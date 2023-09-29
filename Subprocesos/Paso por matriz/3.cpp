/*El siguiente programa le pide al usuario que introduzca 9 numeros y los almacene en un arreglo de dos
dimensiones, en este caso una matriz de 3×3; posteriormente utiliza una funcio n llamada ImprimeMatriz
para mostrar como quedaron almacenados los nu meros en la matriz. Dicha funcio n recibe como
para metros, la matriz de 3×3*/
#include <iostream>
#define M 3
using namespace std;

void IngresarM (int [][M]);
void MostrarM (int [][M]);

int main(int argc, char *argv[]) {
	int m[M][M];
	IngresarM(m);
	cout<<endl;
	MostrarM(m);
	return 0;
}

void IngresarM (int m[][M])
{
	for (int i=0;i<M;i++)
	{
		for (int j=0;j<M;j++)
		{
			cin>>m[i][j];
		}
	}
}

void MostrarM (int m[][M])
{
	for (int i=0;i<M;i++)
	{
		for (int j=0;j<M;j++)
		{
			cout<<m[i][j];
		}
		cout<<endl;
	}
}
