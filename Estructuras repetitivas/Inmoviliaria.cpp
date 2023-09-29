#include<iostream>
using namespace std;

int main()
{
    float A, L;
    cout<<"Ingresar el ancho y el largo del terreno."<<endl;
    cout<<"Ancho: ";
    cin>>A;
    if(A!=0)
    {
        cout<<"Largo: ";
        cin>>L;
    }
    while(A!=0 && L!=0)
    {
        cout<<"Superficie: "<<A*L<<endl;
        if(A*L>1000)
            cout<<"Probabilidad de venta: ALTA";
        if(A*L<=1000 && A*L>=250)
            cout<<"Probabilidad de venta: MEDIA";
        if(A*L<250)
            cout<<"Probabilidad de venta: BAJA";
        cout<<endl<<endl<<"Ingresar el ancho y el largo del terreno."<<endl;
        cout<<"Ancho: ";
        cin>>A;
        if(A!=0)
        {
            cout<<"Largo: ";
            cin>>L;
        }
    }
    return 0;
}