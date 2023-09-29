#include <iostream>
using namespace std;

void operation (float, float, char, float&, bool&);

int main(int argc, char *argv[]) {
	float n1, n2;
	char op;
	do {
	cout<<"Ingrese 2 valores:"<<endl;
	cin>>n1>>n2;
	cout<<"Ahora ingrese una operacion:"<<endl;
	cout<<"Suma: (+)"<<endl;
	cout<<"Resta: (-)"<<endl;
	cout<<"Multiplicacion: (*)"<<endl;
	cout<<"Division: (/)"<<endl;
	cout<<"Potencia: (P)"<<endl;
	cout<<"Factorial: (F)"<<endl;
	cout<<"Salir: (S)"<<endl;
	cin>>op;
	operation (n1, n2, op);
	} while();
	return 0;
}

void operation (float a, float b, char op, float& result, bool& error) {
}
