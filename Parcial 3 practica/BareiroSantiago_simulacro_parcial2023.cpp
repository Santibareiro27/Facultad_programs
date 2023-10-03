#include <iostream>
#include <cstring>
#define P 3
#define N 31
using namespace std;

struct producto
{
	char codigo[N];
	char nombre[N];
	float precio;
	int stock;
}pro[P];

bool CARGA(int&);
int BUSCAR(char []);
void MODIFICA(int);
float CONTROL(int, int&);
void MUESTRA(int&);

int main(int argc, char *argv[]) {
	system("Color 02");
	char opcion[3], nombreaux[N];
	int Cpro=0, Ipro, stockaux;
	do
	{
		cout<<endl<<"Menu:"<<endl;
		cout<<"1. Cargar los datos de UN producto nuevo."<<endl;
		cout<<"2. Buscar un producto por su nombre."<<endl;
		cout<<"3. Modificar el stock o precio de los productos."<<endl;
		cout<<"4. Avisar stock minimo."<<endl;
		cout<<"5. Mostrar datos cargados."<<endl;
		cout<<"F o f. Finalizar."<<endl;
		cout<<endl<<"Opcion: ";
		cin.getline(opcion,2);
		fflush(stdin);
		system("cls");
		switch (opcion[0])
		{
			case'1':
				if(CARGA(Cpro))
				{
					cout<<endl<<"Ingrese el nombre del producto: ";
					cin.getline(pro[Cpro].nombre,N-1);
					fflush(stdin);
					do{
						cout<<endl<<"Ingrese el precio del producto: ";
						cin>>pro[Cpro].precio;
						if (pro[Cpro].precio<=0)
						{
							cout<<endl<<"Error de ingreso";
						}
						cin.clear();
					} while(pro[Cpro].precio<=0);
					do{
						cout<<endl<<"Ingrese el stock del producto: ";
						cin>>pro[Cpro].stock;
						if (pro[Cpro].stock<0)
						{
							cout<<endl<<"Error de ingreso";
						}
						cin.clear();
					} while(pro[Cpro].stock<=0);
					Cpro++;
				}
				else
				{
					cout<<endl<<"El producto no se pudo cargar"<<endl;
				}
				break;
			
			case'2':
				cout<<"Ingrese el nombre de un producto: ";
				cin.getline(nombreaux,N-1);
				fflush(stdin);
				Ipro=BUSCAR(nombreaux);
				if(Ipro>=0)
				{
					cout<<endl<<"codigo: "<<pro[Ipro].codigo;
					cout<<endl<<"nombre: "<<pro[Ipro].nombre;
					cout<<endl<<"precio: "<<pro[Ipro].precio;
					cout<<endl<<"stock: "<<pro[Ipro].stock;
				}
				else
				{
					cout<<endl<<"No se a encontrado el producto "<<nombreaux;
				}
				cout<<endl;
				break;
			
			case'3':
				MODIFICA(Cpro);
				break;
			
			case'4':
				do {
					cout<<endl<<"Ingrese una cantidad: ";
					cin>>stockaux;
					cin.clear();
				} while(stockaux<0);
				cout<<endl<<CONTROL(stockaux,Cpro);
				cout<<"% de los productos tienen un stock menor"<<endl;
				break;
			
			case'5':
				break;
			
			case'F':
				break;
			
			case'f':
				break;
			
			default:
				cout<<endl<<"Error de ingreso"<<endl;
				cin.clear();
				break;
		}
	} while(opcion[0]!='F' and opcion[0]!='f');
	
	return 0;
}

bool CARGA(int &Cpro)
{
	char codigoaux[N];
	bool exito=true;
	cout<<endl<<"Ingrese el codigo del producto: ";
	cin.getline(codigoaux,N-1);
	fflush(stdin);
	if(Cpro<P)
	{
		for(int i=0;i<P;i++)
		{
			if (!strcmp(codigoaux,pro[i].codigo))
			{
				exito=false;
			}
		}
	}
	else
	{
		exito=false;
	}
	if(exito)
	{
		strcpy(pro[Cpro].codigo,codigoaux);
	}
	return exito;
}

int BUSCAR(char nombreaux[])
{
	int registro=-1;
	for(int i=0;i<P;i++)
	{
		if(!strcmp(nombreaux,pro[i].nombre))
		{
			registro=i;
		}
	}
	return registro;
}

void MODIFICA(int Cpro)
{
	char opcion2;
	int modaux;
	do
	{
		cout<<endl<<"Menu:"<<endl;
		cout<<"S. Modificar Stock."<<endl;
		cout<<"P. Modificar Precio."<<endl;
		cout<<"F. Finalizar."<<endl;
		cout<<endl<<"Opcion: ";
		cin>>opcion2;
		fflush(stdin);
		switch (opcion2)
		{
			case'S':
				do {
					cout<<endl<<"Proporcione una cantidad: ";
					cin>>modaux;
					cin.clear();
					if(modaux<1) {
						cout<<endl<<"Error"<<endl;
					}
				} while(modaux<1);
				for(int i=0;i<Cpro;i++) {
					pro[i].stock+=modaux;
				}
				break;
				
			case'P':
				do {
					cout<<endl<<"Proporcione un porcentaje: ";
					cin>>modaux;
					cin.clear();
					if(modaux<1 or modaux>100) {
						cout<<endl<<"Error"<<endl;
					}
				} while(modaux<1 or modaux>100);
				for(int i=0;i<Cpro;i++) {
					pro[i].precio+=modaux*(pro[i].precio/100);
				}
				break;
					
			case'F':
				break;
					
			default:
				cout<<endl<<"Error de ingreso"<<endl;
				break;
		}
	} while(opcion2!='F');
}

float CONTROL(int stockaux, int &Cpro) {
	int Cstock=0;
	for(int i=0;i<Cpro;i++) {
		if(pro[i].stock<stockaux) {
			Cstock++;
		}
	}
	return Cstock*(100/Cpro);
}

void MUESTRA(int &Cpro) {
	for(int i=0;i<Cpro;i++) {
		cout<<endl<<"Codigo: "<<pro[i].codigo<<endl;
		cout<<endl<<"Nombre: "<<pro[i].codigo<<endl;
		cout<<endl<<"Precio: "<<pro[i].codigo<<endl;
		cout<<endl<<"Stock: "<<pro[i].codigo<<endl;
	}
}
