/*Mediante un procedimiento calcular la potencia de una base elevado a un exponente. El valor
resultante debe ser mostrado en el procedimiento.*/
#include <iostream>
using namespace std;

void potencia (int,int);

int main(int argc, char *argv[]) {
	int base, exp;
	cout<<"Ingresar una base seguida de un exponente:"<<endl;
	cout<<"Base: ";
	cin>>base;
	cout<<"Exponente: ";
	cin>>exp;
	potencia (base, exp);
	return 0;
}

void potencia (int a, int b)
{
	int resultado=a, i;
	for (i=1;i<b;i++)
	{
		resultado*=a;
	}
	cout<<endl<<"Resultado: "<<resultado<<endl;
}

