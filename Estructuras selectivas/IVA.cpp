#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float p, i;
	int o;
	cout<<"Ingrese el precio del producto: ",cin>>p;
	std::cout<<"Desea:"<<std::endl;
	std::cout<<"Calcular el IVA (ingrese '1')"<<std::endl;
	std::cout<<"Discriminar el IVA ya incorporado (ingrese '2')"<<std::endl;
	i = p*0.21;
	cin>>o;
	if (o==1) {
		std::cout<<"El IVA es: $"<<i<<std::endl;
		std::cout<<"El precio final seria un total de: $"<<p + i;
	}
	if (o==2) {
		std::cout<<"El IVA discriminado es: $"<<i<<std::endl;
		std::cout<<"El precio neto seria un total de: $"<<p - i;
	}
	return 0;
}

