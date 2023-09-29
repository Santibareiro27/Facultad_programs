#include <iostream>
#define N 3
using namespace std;

/*Crear una estructura llamada alumno, que tendrá los siguientes campos:
Nombre, edad y promedio.
Cargar los datos para 3 alumnos y luego buscar e informar qué alumno tiene
el mayor promedio.*/

int main(int argc, char *argv[]) {
	int Mp=0;
	struct alumno {
		char nombre [20];
		int edad;
		float promedio;
	}alu[N];
	for (int i=0;i<N;i++) {
		fflush(stdin);
		cout<<endl<<"Nombre: ";
		cin.getline(alu[i].nombre,20);
		fflush(stdin);
		cin.clear();
		cout<<"Edad: ";
		cin>>alu[i].edad;
		cout<<"Promedio: ";
		cin>>alu[i].promedio;
	}
	for (int i=0;i<N;i++) {
		if (alu[Mp].promedio<alu[i].promedio)
		{
			Mp=i;
		}
	}
	cout<<endl<<"El alumno con mayor promedio es: "<<alu[Mp].nombre;
	return 0;
}

