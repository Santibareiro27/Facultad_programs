/*Escribir un programa que cargue POR FILAS una matriz de 7x2 (utilice una funcion para la carga).
En la primera columna se cargan los numeros ganadores de un sorteo.
Esos nu meros esta n entre 0 y 1000.
Se debe validar y reingresar en caso de que este mal cargado.
En la segunda columna se carga el premio correspondiente a ese nu mero.
El premio es un valor entre 1 y
100.000. Se debe validar y reingresar en caso de que este mal cargado.*/
#include <iostream>
#define N 3
#define M 2
using namespace std;

void IngresarM (int [][M]);

void Sorteo (int [][M]);

int main(int argc, char *argv[]) {
	int m[N][M];
	char menu;
	IngresarM(m);
	do {
		cout<<endl<<"1.- Número Sorteado \n";
		cout<<"2.- Buscar premio mayor \n";
		cout<<"3.- Buscar número más sorteado \n";
		cout<<"4.- Copiar columna \n";
		cout<<"5.- Ordenar vector \n";
		cout<<"6.- Mostrar arreglos \n";
		cout<<"s.- Salir \n";
		cin>>menu;
		switch (menu)
		{
		case '1':
			Sorteo(m);
			break;
			
		case '2':
			break;
			
		case '3':
			break;
			
		case '4':
			break;
			
		case '5':
			break;
			
		case '6':
			break;
			
		case 's':
			break;
			
		default:
			cout<<endl<<"Error de ingreso. \n"<<endl;
			break;
		}
		fflush(stdin);
		cin.clear();
	} while(menu!='s');
	return 0;
}

void IngresarM (int m[][M])
{
	int j;
	for (int i=0;i<N;i++)
	{
		j=0;
		do {
			cout<<i+1<<" ";
			if (j==0)
			{
				cout<<"Numero ganador: ";
				cin>>m[i][j];
				fflush(stdin);
				cin.clear();
				if (m[i][j]>=0 and m[i][j]<=1000)
				{
					j++;
				}
			}
			else
			{
				cout<<"Premio: ";
				cin>>m[i][j];
				fflush(stdin);
				cin.clear();
				if (m[i][j]>=1 and m[i][j]<=100000)
				{
					j++;
				}
			}
			cout<<endl;
		} while(j<2);
	}
}

void Sorteo (int m[][M])
{
	int s;
	do {
		cout<<endl<<"Ingrese un numero del sorteo: ";
		cin>>s;
		if (!(s>=0 and s<=1000))
		{
			cout<<endl<<"Error."<<endl;
		}
		cin.clear();
	} while(!(s>=0 and s<=1000));
	for (int i=0;i<N;i++)
	{
		if (s==m[i][0])
		{
			cout<<"\nEl dia "<<i+1<<" salio "<<s<<" premio: "<<m[i][1]<<endl;
		}
	}
}
