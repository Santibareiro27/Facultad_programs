#include <iostream>
using namespace std;

/*Crear una estructura llamada corredor, en la cual se tendrán los
siguientes campos: Nombre, edad, sexo, club.
Luego cargar los datos de un corredor y, de acuerdo a su edad, informar a
qué categoría de competición le corresponde. (Juvenil si edad es menor a 18
años, Senior si es menor a 40 años y Veterano mayor a 40 años.)
Al finalizar mostrar todos los datos del corredor, incluida la categoría
asignada.*/

int main(int argc, char *argv[]) {
	int c;
	struct corredor {
		char nombre [20];
		int edad;
		char sexo [20];
		char club [20];
	}cor[100];
	
	cout<<"Ingrese la cantidad de corredores: ";
	cin>>c;
	for (int i=0;i<c;i++) {
		cout<<"Nombre: ";
		fflush(stdin);
		cin.getline(cor[i].nombre,20);
		cout<<"Edad: ";
		cin>>cor[i].edad;
		cout<<"Sexo: ";
		fflush(stdin);
		cin.getline(cor[i].sexo,20);
		cout<<"Club: ";
		fflush(stdin);
		cin.getline(cor[i].club,20);
		
		if (cor[i].edad < 18)
			cout<<"Es de categoria Juvenil \n";
		else if (cor[i].edad > 40)
			cout<<"Es de categoria Veterano \n";
		else
			cout<<"Es de categoria Senior \n";
	}
	for (int i=0;i<c;i++) {
		cout<<endl<<"Nombre: "<<cor[i].nombre;
		cout<<endl<<"Edad: "<<cor[i].edad;
		cout<<endl<<"Sexo: "<<cor[i].sexo;
		cout<<endl<<"Club: "<<cor[i].club;
		
		if (cor[i].edad < 18)
			cout<<endl<<"Categoria: Juvenil";
		else if (cor[i].edad > 40)
			cout<<endl<<"Categoria: Veterano";
		else
			cout<<endl<<"Categoria: Senior";
	}
	
	return 0;
}

