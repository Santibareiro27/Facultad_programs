#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	float X, D=3.0, F;
	int C=2, T, I;
	cout<<"Ingrese el valor X: ";
	cin>>X;
	cout<<"Ingrese la cantidad de terminos: ";
	cin>>T;
	while (C<=T)
	{
		for (I=1;I<=D;I++)
		{
			F=D*I;
		}
		if(C%2==0)
			cout<<(-(pow(X,D))/F);
		if(C%2==1)
			cout<<(pow(X,D)/F);
		D+=2;
		cout<<endl;
		C++;
	}
	return 0;
}

