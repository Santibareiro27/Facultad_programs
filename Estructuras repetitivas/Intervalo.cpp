#include <iostream>
using namespace std;

int main()
{
    float A, B, N, S=0;
    cout<<"Ingrese 2 valores para formar un intervalo.";
    cout<<endl<<"A: ";
    cin>>A;
    cout<<"B: ";
    cin>>B;
    if (A>B)
    {
        N=A;
        A=B;
        B=N;
        N=0;
    }
    cout<<endl<<"Ingrese los numeros que desea sumar: "<<endl;
    while (N!=99)
    {
        cin>>N;
        if (N>=A && N<=B)
        {
            S=S+N;
        }
    }
    cout<<endl<<"La suma de los numeros ingresados, dentro del intervalo ["<<A<<","<<B<<"] da un total de "<<S;
    return 0;
}
