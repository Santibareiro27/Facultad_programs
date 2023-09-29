#include <iostream>
#define N 4
using namespace std;

int main(int argc, char *argv[]) {
	float V[N];
	int a=0, d=0, c=0, i, j, C[N];
	for (i=0;i<N;i++)
	{
		cout<<endl<<"Ingrese la nota del alumno "<<i+1<<": ";
		cin>>V[i];
		while (V[i]<0 or V[i]>10)
		{
			cout<<"Error de ingreso, vuelva a intentar: ";
			cin>>V[i];
		}
		cout<<endl;
		if (V[i]>=6)
			a++;
		else
			d++;
	}
	for (i=0;i<N;i++)
	{
		for (j=0;j<N;j++)
		{
			if(V[i]==V[j])
				c++;
		}
		C[i]=c;
		c=0;
	}
	cout<<endl<<C[0]<<" - "<<C[1]<<" - "<<C[2]<<" - "<<C[3];
	cout<<endl<<"Aprobaron "<<a<<" alumos";
	cout<<endl<<"Desaprobaron "<<d<<" alumos";
	for (i=0;i<N;i++)
	{
		for (j=i;j>=0;j--)
		{
			if(C[i]==C[j])
				c++;
		}
		if (c<=1)
			cout<<endl<<"El numero "<<V[i]<<" se repite "<<C[i]<<" veces.";
		c=0;
	}
	return 0;
}

