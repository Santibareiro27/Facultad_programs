#include <iostream>
using namespace std;

/*Escribir un programa en C que tenga una estructura de nombre info con campos
nombre (char 30), dirección (char 30), teléfono. Realizar la carga y muestra de la
estructura utilizando funciones.*/

struct info {
	char n[30], d[30];
	int t;
}datos;

void carga(struct info &);
void muestra(struct info);

int main(int argc, char *argv[]) {
	carga (datos);
	muestra (datos);
	return 0;
}

void carga(struct info &datos){
cout<<"Nombre: ";
cin.getline(datos.n,30);
//cin.get(datos.n,30,'\n');
fflush(stdin);
cout<<"Direccion: ";
cin.getline(datos.d,30);
//cin.get(datos.d,30,'\n');
fflush(stdin);
cout<<"Telefono: ";
cin>>datos.t;
}

void muestra(struct info datos){
	cout<<datos.n<<" | "<<datos.d<<" | "<<datos.t<<endl;
}

