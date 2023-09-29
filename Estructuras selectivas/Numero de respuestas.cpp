#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int C, I, B, P;
    cout<<"A continuacion ingrese el numero de respuestas..."<<endl;
    cout<<"Correctas: ";
    cin>>C;
    cout<<"Incorrectas: ";
    cin>>I;
    cout<<"En blanco: ";
    cin>>B;
    C=C*4;
    I=I*-1;
    B=B*0;
    P=C+I+B;
    cout<<"El puntaje final es de: "<<P<<" puntos!";
    return 0;
}