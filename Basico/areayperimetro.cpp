#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	float b, h, P, A;
	std::cout<<"Ingrese la base y altura para calcular el Perimetro y Area"<<std::endl;
	cout<<"Base: ", cin>>b;
	cout<<"Altura: ", cin>>h;
	P = b + h + sqrt(h*h+b*b);
	A = b*h/2;
	std::cout<<"El valor del Perimetro es: "<<P<<std::endl;
	std::cout<<"El valor del Area es: "<<A<<std::endl;
	return 0;
}

