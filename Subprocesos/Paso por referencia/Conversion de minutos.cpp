#include <iostream>
using namespace std;

/*Escribir un procedimiento de nombre tiempo que tenga como parámetro un
número entero llamado totalseg y tres parámetros de referencia enteros de nombre
horas, min y seg.
El procedimiento debe convertir el numero de segundos transmitidos en un numero
equivalente en horas, minutos y segundos. Ayuda: prototipo void tiempo (int, int&,
int&, int&); */

void tiempo (int, int&, int&, int&);

int main(int argc, char *argv[]) {
	int entrada_seg, h, m, s;
	cout<<"Ingrese los segundos a convertir: ";
	cin>>entrada_seg;
	tiempo (entrada_seg, h, m, s);
	cout<<"Horas: "<<h<<" Minutos: "<<m<<" Segundos: "<<s;
	return 0;
}

void tiempo (int entrada, int& h, int& m, int& s) {
	m=entrada/60;
	h=m/60;
	s=entrada%60;
	m=m%60;
}

