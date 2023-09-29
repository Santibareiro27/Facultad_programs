#include <iostream>
using namespace std;

int main() /*emitir el valor máximo de la lista, y la ubicación del máximo dentro de la lista. (Suponer un único máximo).*/
{
    float N, M, C=1, L;
    cout<<"Ingrese numeros para crear una lista (finaliza cuando se ingresa 0): "<<endl;
    cin>>N;
    M=N;
    while (N!=0)
    {
        C++;
        cin>>N;
        if (N>M)
        {
            M=N;
            L=C;
        }
    }
    cout<<"El numero mas grande de la lista fue el "<<M<<" que esta en el puesto: "<<L;

    return 0;
}
