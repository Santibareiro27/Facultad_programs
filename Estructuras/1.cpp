#include <iostream>
#define N 3
using namespace std;

struct cliente {
char nombre[30];
int cantidad;
float precio;
char estado;
}C[N];

int main(int argc, char *argv[]) {
    int i;
	for (i=0;i<N;i++)
    {
        fflush(stdin);
        cout<<"Cliente "<<i+1<<":"<<endl;
        cout<<"Nombre: ";
        cin.getline(C[i].nombre,30);
        cout<<"Cantidad de productos: ";
        cin>>C[i].cantidad;
        cout<<"Precio unitario: ";
        cin>>C[i].precio;
        cout<<"Estado del cliente: ";
        cin>>C[i].estado;
    }

    for (i=0;i<N;i++)
    {
        if (C[i].estado=='m' or C[i].cantidad>20)
        {
            cout<<endl<<"Cliente "<<i+1<<": "<<C[i].nombre;
        }
    }

	return 0;
}