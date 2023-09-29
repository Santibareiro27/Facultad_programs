#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    float A;
    cout<<"Ingrese un angulo (entre 0 y 360 grados) para determinar el cuadrante: ";
    cin>>A;
    if (A<0 || A>360)
    {
        cout<<"Valor incompatible";
    }
    else if (A>0 && A<90)
    {
        cout<<"El angulo se encuentra en el cuadrante: 1";
    }
    else if (A>90 && A<180)
    {
        cout<<"El angulo se encuentra en el cuadrante: 2";
    }
    else if (A>180 && A<270)
    {
        cout<<"El angulo se encuentra en el cuadrante: 3";
    }
    else if (A>270 && A<360)
    {
        cout<<"El angulo se encuentra en el cuadrante: 4";
    }
    else if (A==0 || A==180 || A==360)
    {
        cout<<"El angulo se encuentra en el eje x";
    }
    else if (A==90 || A==270)
    {
        cout<<"El angulo se encuentra en el eje y";
    }
    else {
        cout<<"Como le hiciste para que de esto???";
    }
    
    return 0;
}
