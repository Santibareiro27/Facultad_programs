#include <iostream>
#define N 4
using namespace std;

int main(int argc, char *argv[]) {
	float M[N], num, *p=M;
	int i, c=0;
	for (i=0;i<N;i++)
	{
		cin>>*(p+i);
	}
	cout<<endl<<"Ingresar un numero para buscar: ";
	cin>>num;
	for (i=0;i<N;i++)
	{
		if (*(p+i)==num)
		{
			c++;
		}
	}
	cout<<endl<<"El numero "<<num<<" se repite "<<c<<" veces en el vector";
	return 0;
}

