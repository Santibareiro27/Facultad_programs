/*Realizar un procedimiento que muestre por pantalla si un número es par o impar.
El valor a evaluar se ingresara en el procedimiento y la respuesta se mostrará dentro del mismo.*/
#include <iostream>
using namespace std;

void Par ();

int main(int argc, char *argv[]) {
	Par();
	
	return 0;
}

void Par () {
	int a;
	cout<<"Ingrese un numero entero: ";
	cin>>a;
	if (a%2==0)
	{
		cout<<"El numero es par";
	}
	else
	{
		cout<<"El numero es impar";
	}
}

