#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float N;
	do
	{
		cout<<"Ingrese una nota: ";
		cin>>N;
	} while(N<0 || N>10);
	if(N>=0 && N<6)
		cout<<"Desaprobado";
	else
		cout<<"Aprobado";
	return 0;
}

