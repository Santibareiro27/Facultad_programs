#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
    int M, N;
    string S;
    cout<<"Escoja una de las siguientes opciones:"<<endl;
    cout<<"1.- Mostrar listado de los signos con sus respectivos numeros asociados."<<endl;
    cout<<"2.- Seleccionar un numero y mostrar el signo asociado."<<endl;
    cout<<"3.- Ingrese un signo del zodiaco y muestrar su elemento."<<endl;
    cout<<"Opcion: ";
    cin>>M;
    switch (M)
    {
        case 1:
        cout<<endl<<"Lista de signos:"<<endl;
        cout<<"1. Aries"<<endl;
        cout<<"2. Tauro"<<endl;
        cout<<"3. Geminis"<<endl;
        cout<<"4. Cancer"<<endl;
        cout<<"5. Leo"<<endl;
        cout<<"6. Virgo"<<endl;
        cout<<"7. Libra"<<endl;
        cout<<"8. Escorpio"<<endl;
        cout<<"9. Sagitario"<<endl;
        cout<<"10. Capricornio"<<endl;
        cout<<"11. Acuario"<<endl;
        cout<<"12. Piscis";
        break;

        case 2:
        cout<<endl<<"Seleccione un numero del 1 al 12: ";
        cin>>N;
        switch (N)
        {
            case 1:
            cout<<"El numero "<<N<<" corresponde al signo de Aries";
            break;

            case 2:
            cout<<"El numero "<<N<<" corresponde al signo de Tauro";
            break;

            case 3:
            cout<<"El numero "<<N<<" corresponde al signo de Geminis";
            break;

            case 4:
            cout<<"El numero "<<N<<" corresponde al signo de Cancer";
            break;

            case 5:
            cout<<"El numero "<<N<<" corresponde al signo de Leo";
            break;

            case 6:
            cout<<"El numero "<<N<<" corresponde al signo de Virgo";
            break;

            case 7:
            cout<<"El numero "<<N<<" corresponde al signo de Libra";
            break;

            case 8:
            cout<<"El numero "<<N<<" corresponde al signo de Escorpio";
            break;

            case 9:
            cout<<"El numero "<<N<<" corresponde al signo de Sagitario";
            break;

            case 10:
            cout<<"El numero "<<N<<" corresponde al signo de Capricornio";
            break;

            case 11:
            cout<<"El numero "<<N<<" corresponde al signo de Acuario";
            break;

            case 12:
            cout<<"El numero "<<N<<" corresponde al signo de Piscis";
            break;
        
            default:
            cout<<"ERROR: "<<N<<" no esta asociado a ningun signo del zodiaco";
            break;
        }
        break;

        case 3:
        cout<<endl<<"Escriba un signo zodiacal (todo minusculas y sin tildes): ";
        cin>>S;
        if (S=="aries")
        {
            cout<<"El elemento de "<<S<<" es: Fuego";
        }
        else if (S=="tauro")
        {
            cout<<"El elemento de "<<S<<" es: Tierra";
        }
        else if (S=="geminis")
        {
            cout<<"El elemento de "<<S<<" es: Aire";
        }
        else if (S=="cancer")
        {
            cout<<"El elemento de "<<S<<" es: Agua";
        }
        else if (S=="leo")
        {
            cout<<"El elemento de "<<S<<" es: Fuego";
        }
        else if (S=="virgo")
        {
            cout<<"El elemento de "<<S<<" es: Tierra";
        }
        else if (S=="libra")
        {
            cout<<"El elemento de "<<S<<" es: Aire";
        }
        else if (S=="escorpio")
        {
            cout<<"El elemento de "<<S<<" es: Agua";
        }
        else if (S=="sagitario")
        {
            cout<<"El elemento de "<<S<<" es: Fuego";
        }
        else if (S=="capricornio")
        {
            cout<<"El elemento de "<<S<<" es: Tierra";
        }
        else if (S=="acuario")
        {
            cout<<"El elemento de "<<S<<" es: Aire";
        }
        else if (S=="piscis")
        {
            cout<<"El elemento de "<<S<<" es: Agua";
        }
        break;
    
        default:
        cout<<endl<<"ERROR, opcion incorrecta.";
        break;
    }
    return 0;
}