#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int C;
	cout<<"Ingrese el numero de cita: ";
	cin>>C;
	switch (C)
	{
	case 1:
		cout<<"Usted pagara $200 esta cita"<<endl;
		cout<<"Usted pago $200 en tratamientos";
		break;
		
	case 2:
		cout<<"Usted pagara $200 esta cita"<<endl;
		cout<<"Usted pago $400 en tratamientos";
			break;
		
	case 3:
		cout<<"Usted pagara $200 esta cita"<<endl;
		cout<<"Usted pago $600 en tratamientos";
			break;
		
	case 4:
		cout<<"Usted pagara $150 esta cita"<<endl;
		cout<<"Usted pago $750 en tratamientos";
			break;
		
	case 5:
		cout<<"Usted pagara $150 esta cita"<<endl;
		cout<<"Usted pago $900 en tratamientos";
			break;
		
	case 6:
		cout<<"Usted pagara $100 esta cita"<<endl;
		cout<<"Usted pago $1000 en tratamientos";
			break;
		
	case 7:
		cout<<"Usted pagara $100 esta cita"<<endl;
		cout<<"Usted pago $1100 en tratamientos";
			break;
		
	case 8:
		cout<<"Usted pagara $100 esta cita"<<endl;
		cout<<"Usted pago $1200 en tratamientos";
			break;
		
	default:
		C=C-8;
		cout<<"Usted pagara $50 esta cita"<<endl;
		cout<<"Usted pago $"<<(C*50)+1200<<" en tratamiento";
			break;
	}
	return 0;
}

