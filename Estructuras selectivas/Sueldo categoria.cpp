#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    float S;
    char C;
    cout<<"A continuacion ingrese el sueldo del empleado: ";
    cin>>S;
    cout<<"Ahora ingrese su categoria: ";
    cin>>C;
    cout<<endl;
    if (S>0 && C>=65 && C<=68)
    {
        switch (C)
        {
        case 65:
        cout<<"Su nuevo salario es de: $"<<S+S*0.20;
        break;

        case 66:
        cout<<"Su nuevo salario es de: $"<<S+S*0.10;
        break;

        case 67:
        cout<<"Su nuevo salario es de: $"<<S+S*0.05;
        break;

        case 68:
        cout<<"Su nuevo salario es de: $"<<S+S*0.03;
        break;

        default:
        cout<<"Error.";
        break;
        }
    }
    else
    {
        cout<<"Error.";
    } 
    return 0;
}
