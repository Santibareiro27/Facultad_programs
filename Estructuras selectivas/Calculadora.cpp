#include <iostream>
#include <cmath>
#include <ctype.h>
using namespace std;

int main(int argc, char *argv[])
{
    char M;
    bool B=1;
    float x, y;
    while (B==1)
    {
        cout<<endl<<"Ingrese la operacion que desea realizar."<<endl;
        cout<<"1- Operacion suma"<<endl;
        cout<<"2- Operacion resta"<<endl;
        cout<<"3- Operacion producto"<<endl;
        cout<<"4- Operacion division"<<endl;
        cout<<"5- Raiz cuadrada"<<endl;
        cout<<"6- Operacion potencia"<<endl;
        cout<<"S- Salir del programa"<<endl;
        cout<<"Opcion: ";
        cin>>M;
        switch (M)
        {
        case '1':
            cout<<endl<<"Usted a elegido la operacion: suma"<<endl;
            cout<<"Ingrese un numero: ";
            cin>>x;
            cout<<"Ingrese el otro numero: ";
            cin>>y;
            cout<<endl<<"Resultado: "<<x+y;
            break;

        case '2':
            cout<<endl<<"Usted a elegido la operacion: resta"<<endl;
            cout<<"Ingrese un numero: ";
            cin>>x;
            cout<<"Ingrese el otro numero: ";
            cin>>y;
            cout<<endl<<"Resultado: "<<x-y;
            break;

        case '3':
            cout<<endl<<"Usted a elegido la operacion: producto"<<endl;
            cout<<"Ingrese un numero: ";
            cin>>x;
            cout<<"Ingrese el otro numero: ";
            cin>>y;
            cout<<endl<<"Resultado: "<<x*y;
            break;

        case '4':
            cout<<endl<<"Usted a elegido la operacion: division"<<endl;
            cout<<"Ingrese el numerador: ";
            cin>>x;
            cout<<"Ingrese el denominador: ";
            cin>>y;
            if (y==0)
            {
                cout<<endl<<"ERROR";
            }
            else
            {
                cout<<endl<<"Resultado: "<<x/y;
            }
            break;

        case '5':
            cout<<endl<<"Usted a elegido la operacion: raiz cuadrada"<<endl;
            cout<<"Ingrese un numero: ";
            cin>>x;
            if (x<0)
            {
                cout<<endl<<"ERROR";
            }
            else
            {
                cout<<endl<<"Resultado: "<<sqrt(x);
            }
            break;

        case '6':
            cout<<endl<<"Usted a elegido la operacion: potencia"<<endl;
            cout<<"Ingrese un numero: ";
            cin>>x;
            cout<<"Ingrese el exponente: ";
            cin>>y;
            cout<<endl<<"Resultado: "<<pow(x,y);
            break;

        case 'S':
            B=0;
            break;

        default:
            cout<<endl<<"ERROR: Intente nuevamente";
            break;
        }
        if (M>=49 && M<=54)
        {
            while (M!='s' && M!='r')
            {
                cout<<endl<<endl<<"Si desea salir ingrese 's'";
                cout<<endl<<"Si desea reiniciar ingrese 'r'";
                cout<<endl<<"Opcion: ";
                cin>>M;
                switch (M)
                {
                case 's':
                    B=0;
                    break;

                case 'r':
                    B=1;
                    break;
                
                default:
                    cout<<"ERROR: Intente nuevamente";
                    break;
                }
            }
        }
    }
    
    
    return 0;
}