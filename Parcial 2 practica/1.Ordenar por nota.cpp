#include <iostream>
#define N 5
using namespace std;
/*Se tienen los nombres de los N alumnos de una escuela, adem�s de su promedio
general. Realice el c�digo para capturar esta informaci�n, la cual se debe
almacenar en arreglos, un vector para la inicial del nombre y otro para el
promedio, despu�s de capturar la informaci�n se debe ordenar con base en su
promedio, de mayor a menor, los nombres deben corresponder con los
promedios.
*/

int main() {
	char A[N],  aux2;
	float C[N], aux;
	int i;
	bool b;
	for (i=0;i<N;i++)
	{
		cout<<"Ingrese el nombre y promedio del alumno "<<i+1<<":\n";
		cout<<"Nombre: ";
		cin>>A[i];
		cout<<"Promedio: ";
		cin>>C[i];
	}
	do
	{
		b=true;
		for (i=0;i<N-1;i++)
		{
			if (C[i]<C[i+1])
			{
				aux=C[i];
				C[i]=C[i+1];
				C[i+1]=aux;
				aux2=A[i];
				A[i]=A[i+1];
				A[i+1]=aux2;
				b=false;
			}
		}
	} while(b==false);
	cout<<endl;
	for (i=0;i<N;i++)
	{
		cout<<"Inicial: "<<A[i]<<" Nota: "<<C[i]<<endl;
	}
	return 0;
}

