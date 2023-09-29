#include <iostream>
using namespace std;

/*Escribir un algoritmo que permita ingresar varios números, hasta que se ingresa el 999. Al
finalizar se deberá mostrar: ¿Cuántos números se ingresaron? y ¿Cuántas veces se ingresó el
1000? La suma de los números positivos ingresados y el promedio de los números negativos
ingresados*/

int main(int argc, char *argv[]) {
	float N, Pos=0, Neg=0;
	int Cn=0, C=0, M=0;
	cout<<"Ingrese numeros: "<<endl;
	do
	{
		C++;
		cin>>N;
		if(N==1000)
			M++;
		if(N<0)
		{
			Neg+=N;
			Cn++;
		}
		else
			Pos+=N;
	} while(N!=999);
	cout<<"Se ingresaron: "<<C<<" numeros"<<endl;
	cout<<"Se ingreso "<<M<<" veces el numero 1000"<<endl;
	cout<<"Suma de los positivos: "<<Pos<<endl;
	cout<<"Promedio de los negativos: ";
	if (Cn!=0)
		cout<<Neg/Cn;
	else
		cout<<0;
	return 0;
}

