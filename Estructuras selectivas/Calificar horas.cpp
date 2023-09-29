#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    string E1, E2, E3;
    float H1, H2, H3;
    cout<<"Ingrese el nombre del empleado y la cantidad de horas trabajadas en el dia:"<<endl;
    cout<<endl<<"Empleado 1: ";
    cin>>E1;
    cout<<"Horas trabajadas: ";
    cin>>H1;
    cout<<endl<<"Empleado 2: ";
    cin>>E2;
    cout<<"Horas trabajadas: ";
    cin>>H2;
    cout<<endl<<"Empleado 3: ";
    cin>>E3;
    cout<<"Horas trabajadas: ";
    cin>>H3;
    cout<<endl;
    if (H1>H2 && H1>H3)
    {
        cout<<"El empleado mejor calificado es: "<<E1;
    }
    else if (H2>H1 && H2>H3)
    {
        cout<<"El empleado mejor calificado es: "<<E2;
    }
    else if (H3>H1 && H3>H2)
    {
        cout<<"El empleado mejor calificado es: "<<E3;
    }
    else 
    {
        cout<<"Hubo un empate";
    }
    return 0;
}