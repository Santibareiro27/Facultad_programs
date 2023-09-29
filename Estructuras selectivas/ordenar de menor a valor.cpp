#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float a, b, c;
	std::cout<<"Ingresar 3 numeros:"<<std::endl;
	cin>>a>>b>>c;
	if (a>b) {
		float temp=a;
		a=b;
		b=temp;
	}
	if (a > c) {
		float temp = a;
		a = c;
		c = temp;
	}
	if (b > c) {
		float temp = b;
		b = c;
		c = temp;
	}
	std::cout << "Valores ordenados de menor a mayor: " << a << ", " << b << ", " << c << std::endl;
	return 0;
}

