#include <iostream>
#define N 3
#define M 2
using namespace std;

//Prototipos
void IngresarM (int [][M]);
void MostrarM (int [][M]);
void Space ();
void Sorteo (int [][M]);
void Buscar (int [][M]);
int Buscar2 (int [][M]);
void Copia (int [][M], int []);
void MostrarV (int []);
void OrdenaV (int [], bool &);
void Muestra(int [][M], int [], bool op4);

int main(int argc, char *argv[]) {
	int m1[N][M], v1[N], rep;
	char menu;
	bool op4=false;
	IngresarM(m1);
	do {
		cout<<endl<<"1.- Numero Sorteado \n";
		cout<<"2.- Buscar premio mayor \n";
		cout<<"3.- Buscar numero mas sorteado \n";
		cout<<"4.- Copiar columna \n";
		cout<<"5.- Ordenar vector \n";
		cout<<"6.- Mostrar arreglos \n";
		cout<<"s.- Salir \n";
		fflush(stdin);
		cin>>menu;
		fflush(stdin);
		cin.clear();
		switch (menu)
		{
		case '1':
			Sorteo(m1);
			Space();
			break;
			
		case '2':
			Buscar(m1);
			Space();
			break;
			
		case '3':
			rep=Buscar2(m1);
			if (rep==-1)
			{
				cout<<endl<<"Ningun numero se repite mas de 1 vez"<<endl;
			}
			else
			{
				cout<<endl<<"El numero "<<m1[rep][0]<<" es el que mas veces salio sorteado"<<endl;
			}
			Space();
			break;
			
		case '4':
			Copia(m1,v1);
			op4=true;
			Space();
			break;
			
		case '5':
			OrdenaV(v1,op4);
			Space();
		 	break;
			
		case '6':
			Muestra(m1,v1,op4);
			break;
			
		case 's':
			break;
			
		default:
			cout<<endl<<"Error de ingreso. \n"<<endl;
			break;
		}
	} while(menu!='s');
	return 0;
}

void IngresarM (int m1[][M])
{
	int j;
	for (int i=0;i<N;i++)
	{
		j=0;
		do {
			if (j==0)
			{
				cout<<endl<<"Numero ganador dia "<<i+1<<": ";
				cin>>m1[i][j];
				fflush(stdin);
				cin.clear();
				if (m1[i][j]>=0 and m1[i][j]<=1000)
				{
					j++;
				}
			}
			else
			{
				cout<<"Premio: ";
				cin>>m1[i][j];
				fflush(stdin);
				cin.clear();
				if (m1[i][j]>=1 and m1[i][j]<=100000)
				{
					j++;
				}
			}
		} while(j<2);
	}
}

void MostrarM (int m1[][M])
{
	int i, j;
	for (i=0;i<N;i++)
	{
		cout<<endl<<"|";
		for (j=0;j<M;j++)
		{
			cout<<m1[i][j]<<"|";
		}
	}
	cout<<endl;
}

void Space ()
{
	cout<<endl<<"Presiona espacio para continuar";
	cin.ignore();
	fflush(stdin);
}

void Sorteo (int m1[][M])
{
	int n;
	bool n_found=false;
	do {
		cout<<endl<<"Ingrese un numero del sorteo: ";
		cin>>n;
		if (!(n>=0 and n<=1000))
		{
			cout<<endl<<"Error."<<endl;
		}
		cin.clear();
	} while(!(n>=0 and n<=1000));
	for (int i=0;i<N;i++)
	{
		if (n==m1[i][0])
		{
			cout<<"\nEl dia "<<i+1<<" salio el numero "<<n<<" premio: "<<m1[i][1]<<endl;
			n_found=true;
		}
	}
	if (!n_found)
	{
		cout<<endl<<"No se encontro el numero ingresado"<<endl;
	}
}

void Buscar (int m1[][M])
{
	int mayor=0, i;
	for (i=0;i<N-1;i++)
	{
		if (m1[i][1]<m1[i+1][1])
		{
			mayor=i+1;
		}
	}
	cout<<endl<<"El premio mayor se gano el dia "<<mayor+1<<" y fue de: "<<m1[mayor][1]<<endl;
}

int Buscar2 (int m1[][M])
{
	int n_rep=-1, c_rep=1, c, i, j;
	for (i=0;i<N;i++)
	{
		c=0;
		for (j=0;j<N;j++)
		{
			if (m1[i][0]==m1[j][0])
			{
				c++;
				cout<<c;

			}
		}
		if (c>c_rep)
		{
			c_rep=c;
			n_rep=i;
		}
	}
	return n_rep;
}

void Copia (int m1[][M], int v1[])
{
	for (int i=0;i<N;i++)
	{
		v1[i]=m1[i][1];
	}
	MostrarV(v1);
}

void MostrarV (int v1[])
{
	cout<<endl<<"|";
	for (int i=0;i<N;i++)
	{
		cout<<v1[i]<<"|";
	}
	cout<<endl;
}

void OrdenaV (int v1[], bool &op4)
{
	int i, j, aux;
	if (op4)
	{
		for (i=0;i<N;i++)
		{
			for (j=0;j<N-1;j++)
			{
				if (v1[j]<v1[j+1])
				{
					aux=v1[j];
					v1[j]=v1[j+1];
					v1[j+1]=aux;
				}
			}
		}
		MostrarV(v1);
	}
	else
	{
		cout<<endl<<"Aun no se ha copiado un vector"<<endl;
	}
}

void Muestra(int m1[][M], int v1[],bool op4)
{
	char menu;
	do {
		cout<<endl<<"m.- Mostrar matriz \n";
		cout<<"v.- Mostrar vector \n";
		cout<<"s.- Salir \n";
		cin>>menu;
		fflush(stdin);
		cin.clear();
		switch (menu)
		{
		case 'm':
			MostrarM(m1);
			break;
			
		case 'v':
			if (op4)
			{
				MostrarV(v1);
			}
			else
			{
				cout<<endl<<"Aun no se ha copiado un vector"<<endl;
			}
			break;
			
		case 's':
			break;
			
		default:
			cout<<endl<<"Error de ingreso. \n"<<endl;
			break;
		}
	} while(menu!='s');
}