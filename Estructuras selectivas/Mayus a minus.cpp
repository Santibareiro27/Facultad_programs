#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    char L;
    int M;
    cout<<"A continuacion ingrese una letra: ";
    cin>>L;
    if (L>=48 && L<=57)
    {
        cout<<"Error se ha ingresado un numero";
    }
    else if (L<48 || L>122 || (L>57 && L<65) || (L>90 && L<97))
    {
        cout<<"Error se ha ingresado un simbolo";
    }
    else
    {
        cout<<"Ahora elija que hacer con la letra"<<endl;
        cout<<"1- Pasar a mayuscula"<<endl;
        cout<<"2- Pasar a minuscula"<<endl;
        cout<<"3- Salir sin hacer nada"<<endl;
        cin>>M;
        switch (M)
        {
        case 1:
            if (L>=97 && L<=122) 
            {
                cout<<"La letra '"<<L<<"' en mayuscula es: "<<char(L-32);
            }
            else
            {
                cout<<"La letra ingresada ya es una mayuscula.";
            }
            break;
            
        case 2:
            if (L>=65 && L<=90)
            {
                cout<<"La letra '"<<L<<"' en minuscula es: "<<char(L+32);
            }
            else
            {
                cout<<"La letra ingresada ya es una minuscula.";
            }
            break;
            
        case 3:
            break;
            
        default:
            cout<<"Opcion no valida";
            break;
        }
    }
}