/* Escribir un programa en lenguaje C que permita cargar dos variables tipo int mediante punteros.
Obtener y mostrar su dirección en memoria. Intercambiar los datos almacenados en las mismas y mostrar su contenido. */
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int A, B, aux, *p;
	p=&A;
	cin>>*p;
	cout<<p<<endl;
	p=&B;
	cin>>*p;
	cout<<p<<endl;
	
	p=&aux;
	*p=B;
	p=&B;
	*p=A;
	p=&A;
	*p=aux;
	cout<<endl<<*p;
	p=&B;
	cout<<endl<<*p;
	
	return 0;
}

