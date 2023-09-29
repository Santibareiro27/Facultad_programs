#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int C;
    float D;
    cout<<"Ingrese la clave de la zona del destino de la llamada: ";
    cin>>C;
    cout<<"Ingrese la duracion de la llamada(EN MINUTOS): ";
    cin>>D;
    switch (C)
    {
    case 1:
        cout<<"El costo de la llamada es de: $"<<D*0.13;
        break;

    case 2:
        cout<<"El costo de la llamada es de: $"<<D*0.11;
        break;

    case 5:
        cout<<"El costo de la llamada es de: $"<<D*0.22;
        break;

    case 6:
        cout<<"El costo de la llamada es de: $"<<D*0.19;
        break;

    case 7:
        cout<<"El costo de la llamada es de: $"<<D*0.17;
        break;

    case 9:
        cout<<"El costo de la llamada es de: $"<<D*0.17;
        break;

    case 10:
        cout<<"El costo de la llamada es de: $"<<D*0.20;
        break;

    case 15:
        cout<<"El costo de la llamada es de: $"<<D*0.39;
        break;

    case 20:
        cout<<"El costo de la llamada es de: $"<<D*0.28;
        break;
    
    default:
        cout<<"Error de ingreso";
        break;
    }
}