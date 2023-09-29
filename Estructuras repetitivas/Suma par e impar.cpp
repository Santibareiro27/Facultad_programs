#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int C, N, P, I;
	cout<<"Ingrese un numero: ";
	cin>>N;
	P=0;
	I=0;
	for (C=1;C<=N;C++)
	{
		if (C%2==0)
		{
			P=P+C;
		}
		else
		{
			I=I+C;
		}
	}
	cout<<"La suma de los pares es: "<<P<<endl;
	cout<<"La suma de los impares es: "<<I;
	return 0;
}

