#include <iostream>
#define N 3
#define M 3
using namespace std;

int main(int argc, char *argv[]) {
	float A[N][M];
	int i, j;
	bool D=false;
	cout<<"Ingresar notas de alumnos"<<endl;
	for(i=0;i<N;i++){
		cout<<endl<<"Alumno "<<i+1<<endl;
		for(j=0;j<M;j++){
			cout<<"Nota "<<j+1<<": ";
			do{
				cin>>A[i][j];
			} while(A[i][j]<0 or A[i][j]>10);
		}
	}
	for(i=0;i<N;i++){
		cout<<endl<<"Alumno "<<i+1<<endl;
		for(j=0;j<M;j++){
			cout<<"Nota "<<j+1<<": "<<A[i][j]<<endl;
		}
	}
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			if(A[i][j]==10)
				D=true;
		}
	}
	if (D)
		cout<<endl<<"Si hubo un 10";
	else
		cout<<endl<<"No hubo un 10";
	return 0;
}

