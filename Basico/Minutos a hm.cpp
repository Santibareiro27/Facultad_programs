#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int m, h;
	cout<<"A continuacion ingrese la cantidad de minutos a convertir: ";
	cin>>m;
	cout<<m<<" minutos son: ";
	h = m / 60;
	m = m % 60;
	cout<<h<<" horas y "<<m<<" minutos";
	return 0;
}

