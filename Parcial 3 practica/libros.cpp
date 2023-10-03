#include <iostream>
#include <cstring>
#define CH 31
#define N 50
using namespace std;

struct biblioteca {
	char titulo[CH];
	char autor[CH];
	char genero[CH];
	int bib;
	int dis;
};

bool carga(biblioteca libro[], int &Clib);
void buscar(biblioteca libro[], char titoaut[], int &Clib);
void modificar(biblioteca libro[], char titoaut[], int &Clib);
void mostrarxgen(biblioteca libro[], int &Clib);
void mostrar(biblioteca libro[], int &Clib);

int main(int argc, char *argv[]) {
	biblioteca libro[N];
	char opcion, titoaut[CH];
	int Clib=0;
	do {
		cout<<endl<<"Menu"<<endl;
		cout<<"1. Agregar un nuevo libro a la biblioteca."<<endl;
		cout<<"2. Buscar un libro por titulo o autor."<<endl;
		cout<<"3. Modificar la cantidad de ejemplares de un libro."<<endl;
		cout<<"4. Mostrar libros por genero."<<endl;
		cout<<"5. Mostrar todos los libros en la biblioteca."<<endl;
		cout<<"Q. Salir."<<endl;
		cout<<"opcion: ";
		cin>>opcion;
		fflush(stdin);
		switch(opcion) {
			case'1':
				if(carga(libro,Clib)) {
					cout<<endl<<"El libro se ha cargado con exito"<<endl;
					Clib++;
				}
				else {
					cout<<endl<<"El libro no se ha podido cargar"<<endl;
				}
				break;
				
			case'2':
				cout<<endl<<"Ingrese un titulo o autor: ";
				cin.getline(titoaut,CH-1);
				fflush(stdin);
				buscar(libro,titoaut,Clib);
				break;
				
			case'3':
				cout<<endl<<"Ingrese un titulo: ";
				cin.getline(titoaut,CH-1);
				fflush(stdin);
				modificar(libro,titoaut,Clib);
				break;
				
			case'4':
				mostrarxgen(libro,Clib);
				break;
				
			case'5':
				mostrar(libro,Clib);
				break;
				
			case'Q':
				break;
				
			case'q':
				break;
				
			default:
				cout<<endl<<"Error"<<endl;
				break;
		}
	} while(opcion!='Q' and opcion!='q');
	return 0;
}

bool carga(biblioteca libro[],int &Clib) {
	bool exito=true;
	char tituloaux[N];
	if(Clib<50) {
		cout<<endl<<"Ingrese el nombre del libro: ";
		cin.getline(tituloaux,CH-1);
		fflush(stdin);
		for(int i=0;i<Clib;i++)
		{
			if(!strcmp(tituloaux,libro[i].titulo)) {
				exito=false;
			}
		}
	}
	else {
		exito=false;
	}
	if(exito) {
		strcpy(libro[Clib].titulo,tituloaux);
		cout<<"Ingrese el autor del libro: ";
		cin.getline(libro[Clib].autor,CH-1);
		fflush(stdin);
		cout<<"Ingrese el genero del libro: ";
		cin.getline(libro[Clib].genero,CH-1);
		fflush(stdin);
		do {
			cout<<"Ejemplares en biblioteca: ";
			cin>>libro[Clib].bib;
			cin.clear();
			if(libro[Clib].bib<1) {
				cout<<endl<<"Error"<<endl;
			}
		} while(libro[Clib].bib<1);
		do {
			cout<<"Ejemplares disponibles: ";
			cin>>libro[Clib].dis;
			cin.clear();
			if(libro[Clib].dis<1 or libro[Clib].dis>libro[Clib].bib) {
				cout<<endl<<"Error"<<endl<<endl;
			}
		} while(libro[Clib].dis<1 or libro[Clib].dis>libro[Clib].bib);
	}
	return exito;
}

void buscar(biblioteca libro[], char titoaut[], int &Clib) {
	for(int i=0;i<Clib;i++) {
		if(!strcmp(titoaut,libro[i].titulo)or!strcmp(titoaut,libro[i].autor)) {
			cout<<endl<<"Titulo: "<<libro[i].titulo;
			cout<<endl<<"Autor: "<<libro[i].autor;
			cout<<endl<<"Genero: "<<libro[i].genero;
			cout<<endl<<"Ej totales: "<<libro[i].bib;
			cout<<endl<<"Ej disp.: "<<libro[i].dis;
			cout<<endl;
		}
	}
}

void modificar(biblioteca libro[], char titoaut[], int &Clib) {
	int i=0, indice=-1, mod;
	while(i<Clib) {
		if(!strcmp(titoaut,libro[i].titulo)) {
			indice=i;
			i=Clib;
		}
		i++;
	}
	if(indice!=-1) {
		do {
			cout<<endl<<"Actualmente hay "<<libro[indice].dis;
			cout<<" ejemplares disponibles, cuantos desea agreagar/quitar?: ";
			cin>>mod;
			cin.clear();
			mod+=libro[indice].dis;
			if(mod<0 or mod>libro[indice].bib)
			{
				cout<<endl<<"Error"<<endl;
			}
		} while(mod<0 or mod>libro[indice].bib);
		cout<<"Ahora hay "<<libro[indice].dis<<" ejemplares disponibles"<<endl;
	}
}

void mostrarxgen(biblioteca libro[], int &Clib) {
	char gen[CH];
	cout<<endl<<"Ingrese un genero: ";
	cin.getline(gen,CH-1);
	for(int i=0;i<Clib;i++)
	{
		if(!strcmp(gen,libro[i].genero)) {
			cout<<endl<<"Titulo: "<<libro[i].titulo;
			cout<<endl<<"Autor: "<<libro[i].autor;
			cout<<endl<<"Genero: "<<libro[i].genero;
			cout<<endl<<"Ej totales: "<<libro[i].bib;
			cout<<endl<<"Ej disp.: "<<libro[i].dis;
			cout<<endl;
		}
	}
}

void mostrar(biblioteca libro[], int &Clib) {
	for(int i=0;i<Clib;i++)
	{
		cout<<endl<<"Titulo: "<<libro[i].titulo;
		cout<<endl<<"Autor: "<<libro[i].autor;
		cout<<endl<<"Genero: "<<libro[i].genero;
		cout<<endl<<"Ej totales: "<<libro[i].bib;
		cout<<endl<<"Ej disp.: "<<libro[i].dis;
		cout<<endl;
	}
}
