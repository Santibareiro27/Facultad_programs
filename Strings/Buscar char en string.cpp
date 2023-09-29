#include <iostream>
#include <cstring>
#define N 7
using namespace std;

int main(int argc, char *argv[]) {
	char cad[N], C;
	int i;
	bool B=false;
	cout<<"Ingrese una cadena de caracteres: "<<endl;
	cin.get(cad,N)
	cout<<endl<<"Que caracter desea buscar?: ";
	cin>>C;
	i=0;
	while(i<strlen(cad) && B==false)
	{
		if (cad[i]==C)
			B=true;
		i++;
	}
	if (B)
		cout<<endl<<"Se encuentra dentro del arreglo";
	else
		cout<<endl<<"No se encuentra dentro del arreglo";
	return 0;
}

