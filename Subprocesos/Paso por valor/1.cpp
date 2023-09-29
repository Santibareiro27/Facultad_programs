#include <iostream>
using namespace std;

/*Crear un procedimiento MayorDeTres, que reciba tres números enteros y encuentre el valor del mayor de ellos.*/

void MayorDeTres (int, int, int);

int main(int argc, char const *argv[])
{
    int x, y, z;
    cin>>x>>y>>z;
    MayorDeTres (x,y,z);
    return 0;
}

void MayorDeTres (int a, int b, int c)
{
    if (a>b and a>c)
    {
        cout<<"El mayor es: "<<a;
    }
    else if (b>a and b>c)
    {
        cout<<"El mayor es: "<<b;
    }
    else if (c>a and c>b)
    {
        cout<<"El mayor es: "<<c;
    }
    else
    {
        cout<<"xd";
    }
}