#include <iostream>
#define N 3
#define A 4
using namespace std;
/*Cada alumno de una clase de 20 alumnos tiene notas correspondientes a ocho
asignaturas diferentes, pudiendo no tener calificacion en alguna asignatura. A
cada asignatura le corresponde una determinada columna. Escribir un programa
que permita:
a) Calcular el promedio de cada alumno.
b) Promedio general de la clase.
c) Promedio de la clase en cada asignatura.
d) Porcentaje de faltas (no presentado a examen).
e) Si hubo algun 10 en las notas cargadas.*/

int main(int argc, char *argv[]) {
	float C[N][A], PN[N]={0}, PA[A]={0}, acu=0, f=0;
	int i, j;
	bool d=false;
	for (i=0;i<N;i++)
	{
		cout<<"Notas alumno ("<<i+1<<"):"<<endl;
		for (j=0;j<A;j++)
		{
			cout<<"Asignatura ("<<j+1<<"): ";
			cin>>C[i][j];
			if (C[i][j]==0)
			{
				f++;
			}
			else
			{
				PN[i]+=C[i][j];
				PA[j]+=C[i][j];
				if (C[i][j]==10)
				{
					d=true;
				}
			}
		}
		cout<<endl;
	}
	for (i=0;i<N;i++)
	{
		for (j=0;j<A;j++)
		{
			cout<<C[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<"Promedio de cada alumno:"<<endl;
	for (i=0;i<N;i++)
	{
		cout<<"Alumno ("<<i+1<<"): "<<PN[i]/A<<endl;
		acu+=PN[i]/A;
	}
	cout<<"Promedio general: "<<acu/N<<endl;
	cout<<"Promedio por asignatura:"<<endl;
	for (j=0;j<A;j++)
	{
		cout<<"Asignatura ("<<j+1<<"): "<<PA[j]/N<<endl;
	}
	cout<<"El porcentaje de faltas es del "<<(100*f)/(N*A)<<"%"<<endl;
	if (d)
	{
		cout<<"Hubo un diez";
	}
	else
	{
		cout<<"No hubo un diez";
	}

	return 0;
}

