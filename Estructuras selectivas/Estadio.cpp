#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int E,S;
	cout<<"Bienvenido al estadio!"<<endl;
	cout<<"Seleccione la cantidad de entradas: ";
	cin>>E;
	cout<<"Ahora seleccione el sector:"<<endl;
	cout<<"1-General"<<endl;
	cout<<"2-Preferencial"<<endl;
	cout<<"3-Tribuna"<<endl;
	cout<<"4-Platea"<<endl;
	cin>>S;
	switch(S)
	{case 1:
		cout<<"El total a pagar es: $"<<300*E;
		break;
	case 2:
		cout<<"El total a pagar es: $"<<500*E;
		break;
	case 3:
		cout<<"El total a pagar es: $"<<1500*E;
		break;
	case 4:
		cout<<"El total a pagar es: $"<<2000*E;
		break;
	default:
		cout<<"El valor ingresado no corresponde a ningun sector";
	}
	return 0;
}

