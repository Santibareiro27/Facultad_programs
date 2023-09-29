#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float N, A=0;
	cout<<"Ingrese numeros: ";
	do
	{
		cin>>N;
		if(A+N <= 100)
		A+=N;
	} while(A+N <= 100);
	cout<<"Valor maximo antes de 100: ";
	cout<<A;
	return 0;
}

