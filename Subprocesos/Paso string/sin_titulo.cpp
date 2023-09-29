#include <iostream>
#include <cstring>
#define N 30
using namespace std;

void Caracter(char []);
void Coma(char []);

int main(int argc, char *argv[]) {
	char s[N], menu;
	cout<<"Ingrese una cadena(max "<<N-1<<" caracteres): ";
	cin.getline(s,N-1);
	fflush(stdin);
	do {
		cout<<endl;
		cout<<"1- CARACTER"<<endl;
		cout<<"2- COMA"<<endl;
		cout<<"3- LETRA"<<endl;
		cout<<"4- FIN"<<endl;
		cin>>menu;
		fflush(stdin);
		switch (menu) {
		case '1':
			Caracter(s);
			break;
			
		case '2':
			Coma(s);
			break;
			
		case '3':
			break;
			
		case '4':
			break;
			
		default:
			break;
		}
	} while(menu!='4');
	return 0;
}

void Caracter(char s[]) {
	char r;
	cout<<endl<<"Ingrese un caracter para remplazar en espacios en blanco: ";
	cin>>r;
	fflush(stdin);
	for (int i=0;i<strlen(s);i++)
	{
		if (s[i]==' ')
		{
			s[i]=r;
		}
	}
	cout<<endl<<s<<endl;
}

void Coma(char s[])
{
	for (int i=0;i<strlen(s);i++)
	{
		if (s[i]==',')
		{
			for (int j=i;j<N;j++)
			{
				s[j]==s[j+1];
			}
		}
	}
	cout<<endl<<s<<endl;
}

