#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int E, D;
    cout<<"Ingrese el numero identificador del empleado: ";
    cin>>E;
    cout<<"Ahora ingrese la cantidad de dias que trabajo en la semana: ";
    cin>>D;
    if (E>=1 && E<=4 && D>=1 && D<=6)
    {
        switch (E)
        {
            case 1:
            cout<<"La paga de la semana del cajero es de: $"<<D*2300;
            break;

            case 2:
            cout<<"La paga de la semana del servidor es de: $"<<D*1200;
            break;

            case 3:
            cout<<"La paga de la semana del preparador de mezclas es de: $"<<D*1500;
            break;

            case 4:
            cout<<"La paga de la semana del mantenimiento es de: $"<<D*2500;
            break;
            
            default:
            break;
        }
    }
    else
    {
        cout<<"Error de ingreso";
    }
    
    return 0;
}