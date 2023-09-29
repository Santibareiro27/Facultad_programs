/*Escriba una función para determinar si una fecha es válida. La fecha es representada por tres
números enteros día, mes y año (utilice la sentencia switch). Luego, escriba un programa que
solicite al usuario una fecha, llame a la función y el programa principal muestre por pantalla si la
misma es válida o no.*/
#include <iostream>
using namespace std;

void validar (int,int,int);

int main(int argc, char *argv[]) {
	int dia, mes, año;
	cout<<"Ingrese una fecha:"<<endl;
	cout<<"Dia: ";
	cin>>dia;
	cout<<"Mes: ";
	cin>>mes;
	cout<<"Año: ";
	cin>>año;
	
	return 0;
}

void validar (int a,int b,int c) {
	
}

