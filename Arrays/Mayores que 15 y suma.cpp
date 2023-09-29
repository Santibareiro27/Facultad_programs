#include <iostream>
#define N 3
using namespace std;

int main(int argc, char *argv[]) {
	int Vec[N], S=0, C=0;
	for (int i=0;i<N;i++)
	{
		cout<<"Ingrese un valor: ";
		cin>>Vec[i];
		S=S+Vec[i];
		if (Vec[i]>15)
			C++;
	}
	cout<<"Suma total: "<<S<<endl;
	cout<<"Cantidad de valores mayores a 15: "<<C;
	return 0;
}

