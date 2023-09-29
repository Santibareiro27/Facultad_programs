#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int N1, N2, P, C;
	cout<<"Ingrese el 1er numero: ";
	cin>>N1;
	cout<<"Ingrese el 2do numero: ";
	cin>>N2;
	P=0;
	for (C=1;C<=N2;C++)
	{
		P=P+N1;
	}
	cout<<N1<<" x "<<N2<<" = "<<P<<endl;
	return 0;
}

