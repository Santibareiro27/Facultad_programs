#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int m, h, d;
	cout<<"A continuacion ingrese la cantidad de minutos a convertir: ";
	cin>>m;
	cout<<m<<" minutos son: ";
	h = m / 60;
	d = h / 24;
	h = h % 24;
	m = m % 60;
	cout<<d<<" dias "<<h<<" horas y "<<m<<" minutos";
	return 0;
}

