#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int N;
    float S;
    cout<<"Ingrese el nivel del profesor."<<endl;
    cout<<"1 - Profesor Adjunto"<<endl;
    cout<<"2 - Profesor Auxiliar"<<endl;
    cout<<"3 - Profesor Asistente"<<endl;
    cout<<"4 - Profesor Titular"<<endl;
    cout<<"Nivel: ";
    cin>>N;
    cout<<endl<<"Ahora ingrese el salario: $";
    cin>>S;
    switch (N)
    {
    case 1:
        cout<<"Nivel: Profesor Adjunto"<<endl;
        cout<<"Nuevo salario: "<<S+S*0.035;
        break;

    case 2:
        cout<<"Nivel: Profesor Auxiliar"<<endl;
        cout<<"Nuevo salario: "<<S+S*0.041;
        break;

    case 3:
        cout<<"Nivel: Profesor Asistente"<<endl;
        cout<<"Nuevo salario: "<<S+S*0.048;
        break;

    case 4:
        cout<<"Nivel: Profesor Titular"<<endl;
        cout<<"Nuevo salario: "<<S+S*0.053;
        break;

    default:
        cout<<"Error de ingreso";
        break;
    }
}