#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float C, D;
	cout<<"Bienvenido/a, ingrese el costo del articulo: $";
	cin>>C;
	if(C>=200){
		D = C * 0.15;
		cout<<"El articulo tiene un descuento de: $"<<D<<endl;
	}
	else if (C>=100 && C<200){
		D = C * 0.12;
		cout<<"El articulo tiene un descuento de: $"<<D<<endl;
	}
	else if (C<100){
		D = C * 0.1;
		cout<<"El atriculo tiene un descuento de: $"<<D<<endl;
	}
			 
	return 0;
}

