#include <iostream>
#define N 3
#define M 3
using namespace std;

int main(int argc, char *argv[]) {
	float A[N][M]{0};
	int i, j;
	bool b;
	do{
		cout<<"Ingrese la columna que desea cargar: ";
		do{
			cin>>j;
			j--;
		} while(j<0 or j>=M);
		cout<<endl<<"Ahora ingrese los valores de la columna "<<j+1<<endl;
		for(i=0;i<M;i++){
			cout<<"Elemento ["<<i+1<<"-"<<j+1<<"]:";
			do{
				cin>>A[i][j];
			} while(i<0 or i>=N);
		}
		cout<<endl<<"Desea cargar otra columna?(Si=1 No=0):";
		cin>>b;
		cout<<endl;
	} while(b);
	cout<<endl<<"Mostrar:"<<endl;
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

