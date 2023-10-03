#include <iostream>
#include <cstring>
#define NL 31
#define N 4
using namespace std;

struct estudiante{
	char nombre[NL];
	int edad;
	char division;
	float nota;
}est[N];

void CARGA(int&);
int MOSTRAR(char);
void BUSCAR(char[]);
void REINGRESAR(int);

int main(int argc, char *argv[]) {
	char menu, menu2, div, auxnombre[NL];
	int auxdiv, Cest=0;
	float promedio;
	do {
		cout<<endl<<"Menu"<<endl;
		cout<<"1. Registrar estudiantes"<<endl;
		cout<<"2. Mostrar estudiantes"<<endl;
		cout<<"3. Buscar estudiante"<<endl;
		cout<<"4. Calificacion promedio"<<endl;
		cout<<"S. Salir"<<endl;
		cout<<endl<<"Opcion: ";
		cin>>menu;
		fflush(stdin);
		switch (menu)
		{
		case '1':
			if(Cest<N)
			{
				CARGA(Cest);
			}
			break;
			
		case '2':
			cout<<endl<<"Ingrese una division: ";
			cin>>div;
			auxdiv=MOSTRAR(div);
			cout<<endl<<"Hay "<<auxdiv<<" alumnos de la division "<<div<<endl;
			break;
			
		case '3':
			cout<<endl<<"Ingrese el nombre de un estudiante: ";
			cin.getline(auxnombre,NL-1);
			fflush(stdin);
			BUSCAR(auxnombre);
			break;
			
		case '4':
			promedio=0;
			for(int i=0;i<Cest;i++)
			{
				promedio+=est[i].nota;
			}
			cout<<endl<<"Calificacion promedio: "<<promedio/Cest;
			cout<<endl<<"Desea reingresar las notas? (s/n):";
			cin>>menu2;
			if(menu2=='s')
			{
				REINGRESAR(Cest);
			}
			break;
			
		case 'S':
			break;
			
		default:
			cout<<endl<<"Error"<<endl;
			break;
			
		}
	} while(menu!='S');
	return 0;
}

void CARGA(int &Cest)
{
	cout<<endl<<"Ingresar nombre: ";
	cin.getline(est[Cest].nombre,NL-1);
	fflush(stdin);
	do {
		cout<<"Ingresar edad: ";
		cin>>est[Cest].edad;
		cin.clear();
		if(est[Cest].edad<=0)
		{
			cout<<endl<<"Error"<<endl;
		}
	} while(est[Cest].edad<=0);
	do {
		cout<<"Ingresar division: ";
		cin>>est[Cest].division;
		fflush(stdin);
		if(est[Cest].division<'A' or est[Cest].division>'C')
		{
			cout<<endl<<"Error"<<endl;
		}
	} while(est[Cest].division<'A' or est[Cest].division>'C');
	do {
		cout<<"Ingresar nota: ";
		cin>>est[Cest].nota;
		cin.clear();
		if(est[Cest].nota<0 or est[Cest].nota>10)
		{
			cout<<endl<<"Error"<<endl;
		}
	} while(est[Cest].nota<0 or est[Cest].nota>10);
	Cest++;
}

int MOSTRAR(char div)
{
	int contador=0;
	for(int i=0;i<N;i++)
	{
		if(est[i].division==div)
		{
			cout<<endl<<"Nombre: "<<est[i].nombre;
			cout<<endl<<"Edad: "<<est[i].edad;
			cout<<endl<<"Division: "<<est[i].division;
			cout<<endl<<"Nota: "<<est[i].nota<<endl;
			contador++;
		}
	}
	return contador;
}

void BUSCAR(char auxnombre[])
{
	for(int i=0;i<N;i++)
	{
		if(!strcmp(auxnombre,est[i].nombre))
		{
			cout<<endl<<"Nombre: "<<est[i].nombre;
			cout<<endl<<"Edad: "<<est[i].edad;
			cout<<endl<<"Division: "<<est[i].division;
			cout<<endl<<"Nota: "<<est[i].nota<<endl;
		}
	}
}

void REINGRESAR(int Cest)
{
	for(int i=0;i<Cest;i++)
	{
		do {
			cout<<endl<<"Nueva nota de "<<est[i].nombre<<": ";
			cin>>est[Cest].nota;
			cin.clear();
			if(est[Cest].nota<0 or est[Cest].nota>10)
			{
				cout<<endl<<"Error"<<endl;
			}
		} while(est[Cest].nota<0 or est[Cest].nota>10);
	}
}
