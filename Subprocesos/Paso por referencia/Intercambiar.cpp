#include <iostream>
using namespace std;

/*Utilice un procedimiento para intercambiar el valor de dos variables utilizando
paso de parámetros por referencia. Ayuda: prototipo void intercambiar (int&, int&)*/

void intercambiar (int &, int &);

int main(int argc, char *argv[]) {
	int x=5, y=2;
	cout<<"Valor de x: "<<x<<endl;
	cout<<"Valor de y: "<<y<<endl;
	intercambiar (x,y);
	cout<<"Nuevo valor de x: "<<x<<endl;
	cout<<"Nuevo valor de y: "<<y<<endl;
	return 0;
}

void intercambiar (int &a, int &b) {
	int aux;
	aux=a;
	a=b;
	b=aux;
}
