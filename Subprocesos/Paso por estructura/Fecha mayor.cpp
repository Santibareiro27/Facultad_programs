#include <iostream>
using namespace std;

/*Escribir un programa en C que permita mediante una función llamada mayor
que devuelva la fecha mas reciente de cualquier par de fechas que se ingrese.
Utilizar estructura.*/

struct fechas {
	int dia, mes, ano;
}F1, F2;

bool mayor (struct fechas, struct fechas);

int main(int argc, char *argv[]) {
	cout<<"Ingresar 2 fechas: "<<endl;
	cout<<"Fecha 1: ";
	cin>>F1.dia;
	cin>>F1.mes;
	cin>>F1.ano;
	cout<<"Fecha 2: ";
	cin>>F2.dia;
	cin>>F2.mes;
	cin>>F2.ano;
	cout<<mayor (F1,F2);
	return 0;
}

bool mayor (struct fechas f1, struct fechas f2) {
	bool m=1;
	if (f1.ano>f2.ano){
		m=1;
	}
	else if (f1.ano==f2.ano){
		if (f1.mes>f2.mes){
			m=1;
		}
		if (f1.mes<f2.mes){
				m=0;
			}
	}
		if (f1.mes==f2.mes){
			if (f1.dia>f2.dia){
				m=1;
			}
			if (f1.dia<f2.dia){
				m=0;
			}
			else if (f1.dia==f2.dia) {
				cout<<"Es el mismo dia";
			}
		}return m;
}

