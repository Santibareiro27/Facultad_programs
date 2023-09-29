#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int C, N, M, V, Q;
	M=0;
	V=0;
	Q=0;
	cout<<"Escoja 10 numeros"<<endl<<endl;
	for (C=0;C<10;C++)
	{
		cout<<"Ingrese un numero cualquiera: ";
		cin>>N;
		if (N<0)
		{
			M++;
		}
		else if (N>=25 && N<=45)
		{
			V++;
		}
		else if (N>50)
		{
			Q++;
		}
	}
	cout<<endl<<"De los 10 numeros ingresados hay "<<M<<" negativos."<<endl;
	cout<<"Hay "<<V<<" entre el 25 y 45."<<endl;
	cout<<"Y hay "<<Q<<" mayores de 50.";
	return 0;
}

