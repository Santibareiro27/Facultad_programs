#include <iostream>
#define N 3
using namespace std;
/*Leer una matriz de 3 por 3 elementos y calcular la suma de cada una de sus filas y
columnas, dejando dichos resultados en dos vectores, uno de la suma de las filas y
otro de las columnas.*/
int main() {
	int M[N][N], F[N]={0}, C[N]={0}, i, j;
	for (i=0;i<N;i++)
	{
		for (j=0;j<N;j++)
		{
			cout<<"Ingrese la posicion ["<<i<<"-"<<j<<"] :";
			cin>>M[i][j];
			F[i]+=M[i][j];
			C[j]+=M[i][j];
		}
	}
	cout<<"Suma de las filas: ";
	for (i=0;i<N;i++)
	{
		cout<<F[i]<<" ";
	}
	cout<<"Suma de las columnas: ";
	for (i=0;i<N;i++)
	{
		cout<<C[i]<<" ";
	}
	return 0;
}

