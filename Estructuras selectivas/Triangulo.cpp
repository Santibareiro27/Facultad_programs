#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    float C1, C2, C3;
    cout<<"Ingresar la longitud de los 3 catetos."<<endl;
    cout<<"Cateto 1: ";
    cin>>C1;
    cout<<"Cateto 2: ";
    cin>>C2;
    cout<<"Cateto 3: ";
    cin>>C3;
    if (C1>0 && C2>0 && C3>0)
    {
        if (C1==C2 && C1==C3)
        {
            cout<<"El triangulo es: Equilatero";
        }
        else if (C1!=C2 && C1!=C3 && C2!=C3)
        {
            cout<<"El triangulo es: Escaleno";
        }
        else
        {
            cout<<"El triangulo es: Isoceles";
        }
    }
    else
    {
        cout<<endl<<"Error";
    }
    return 0;
}