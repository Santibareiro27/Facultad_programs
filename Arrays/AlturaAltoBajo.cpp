#include <iostream>
#define N 30
using namespace std;

int main(int argc, char *argv[]) {
	int A=0, B=0, i, Alu;
	float Vec[N], M=0;
	do{
		cout<<"Ingrese la cantidad de alumnos (max. 30): ";
		cin>>Alu;
	} while(!(Alu>=1 && Alu<=30));
	for(i=0;i<Alu;i++){
		cout<<"Ingrese la altura de los alumnos: ";
		cin>>Vec[i];
		M=M+Vec[i];		
	}
	M=M/Alu;
		for(i=0;i<Alu;i++){
		if(Vec[i]>M)
		{
			A++;
		}
		if(Vec[i]<M)
		{
			B++;
		}
	}
	cout<<"Los mas altos de la media son: "<<A<<" alumnos."<<endl;
	cout<<"Los mas bajos de la media son: "<<B<<" alumnos."<<endl;
	return 0;
}

