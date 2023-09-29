/*Escribir una función que calcule el promedio de dos números. Los valores a promediar se
ingresarán en la función y el valor del promedio calculado deberá mostrarse en main.*/

#include <iostream>
using namespace std;

float promedio();

int main(int argc, char *argv[]) {
	cout<<promedio();
	
	return 0;
}

float promedio () {
	float a, b;
	cout<<"Ingresar los dos numeros a promediar:"<<endl;
	cin>>a;
	cin>>b;
	return ((a+b)/2);
}
