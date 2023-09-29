#include <iostream>
using namespace std;

/*. Dado el intervalo [V, W], calcular y mostrar la sumatoria de los números enteros
que pertenecen al intervalo y son divisibles de un número entero Z ingresado
por el usuario.
Utilice una función que calcule la sumatoria de divisibles de Z pertenecientes
al intervalo [V, W] pasando los valores V, W y Z como parámetros.*/

void Calculo (int, int, int);

int main(int argc, char *argv[]) {
	int V=1,W=100,Z;
	cout<<"Ingrese un divisor: ";
	cin>>Z;
	Calculo (V,W,Z);
	
	
	return 0;
}

void Calculo (int a, int b, int divisor) {
	int s=0;
	for (int i=a;i<b+1;i++) {
		if (i%divisor==0) {
			s=s+i;
		}
	}
	cout<<s;
}

