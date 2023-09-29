#include <iostream>
#define N 3
#define M 3
using namespace std;

int main(int argc, char *argv[]) {
	float A[N][M]{0};
	int i, j;
	bool b;
	do{
		cout<<"Ingrese la fila que desea cargar: ";
		do{
			cin>>i;
			i--;
		} while(i<0 or i>2);
		cout<<endl<<"Ahora ingrese los valores de la fila "<<i+1<<endl;
		for(j=0;j<M;j++){
			do{
				cin>>A[i][j];
			} while(j<0 or j>2);
		}
		cout<<endl<<"Desea cargar otra fila?(Si=1 No=0):";
		cin>>b;
	} while(b);
	cout<<endl<<"Mostrar:"<<endl;
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			cout<<endl<<A[i][j];
		}
		cout<<endl;
	}
	return 0;
}

