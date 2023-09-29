#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int E;
    float P;
    cout<<"ingresar los siguientes datos del alumno para saber el monto de la beca"<<endl;
    cout<<"Edad: ";
    cin>>E;
    cout<<"Promedio: ";
    cin>>P;
    if (E>18)
    {
        if (P>=9)
        {
            cout<<"El monto de la beca sera de: $2000.00"; 
        }
        else if (P>=7.5 && P<9)
        {
            cout<<"El monto de la beca sera de: $1000.00";
        }
        else if (P>=6 && P<7.5)
        {
            cout<<"El monto de la beca sera de: $500.00";
        }
        else
        {
            cout<<"El alumno no recibira la beca";
        }
    }
    else
    {
        if (P>=9)
        {
            cout<<"El monto de la beca sera de: $3000.00"; 
        }
        else if (P>=8 && P<9)
        {
            cout<<"El monto de la beca sera de: $2000.00";
        }
        else if (P>=6 && P<8)
        {
            cout<<"El monto de la beca sera de: $100.00";
        }
        else
        {
            cout<<"El alumno no recibira la beca";
        }
    }
    return 0;
}