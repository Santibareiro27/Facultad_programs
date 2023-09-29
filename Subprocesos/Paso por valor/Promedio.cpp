#include <iostream>
using namespace std;

/*Escribir un programa que llame a la función promedio que reciba como
argumento un conjunto de números, calcule la media y retorne ese valor a main.*/

float promedio (float,float,float);

int main(int argc, char *argv[]) {
	float n1, n2, n3 ,p;
	cin>>n1;
	cin>>n2;
	cin>>n3;
	p=promedio(n1, n2, n3);
	cout<<endl<<p;
	return 0;
}

float promedio (float a, float b, float c) {
	a=(a+b+c)/3;
	return (a);
}

