#include <iostream>
#define N 3
#define M 3
using namespace std;

int main(int argc, char *argv[]) {
	float A[N][M];
	int i, j;
	cout<<"Ingresar notas de alumnos"<<endl;
	for(i=0;i<N;i++){
		cout<<endl<<"Alumno "<<i+1<<endl;
		for(j=0;j<M;j++){
			cout<<"Nota "<<j+1<<": ";
			cin>>A[i][j];
		}
	}
	for(i=0;i<N;i++){
		cout<<endl<<"Alumno "<<i+1<<endl;
		cout<<"Nota "<<i+1<<": "<<A[i][i]<<endl;
	}
	return 0;
}

