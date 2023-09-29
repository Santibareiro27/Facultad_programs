#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int N1, N2, M, C;
	cout<<"Ingrese un numero: "<<endl;
	cout<<"1er Numero: ";
	cin>>N1;
	M=N1;
	for (C=1;C<5;C++){
		cout<<"Ingrese el siguiente numero: "<<endl;
		cout<<"Numero: ";
		cin>>N2;
		if (N2<N1)
		{
			cout<<"Error de ingreso";
			C=C+5;
		}
		else
		{
			M=N2;
			N1=N2;
		}
	}
	if (C==5)
	{
		cout<<"El numero mayor es: "<<M;
	}
	return 0;
}

