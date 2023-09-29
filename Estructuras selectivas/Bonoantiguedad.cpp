#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int A, S;
    cout<<"Ingrese a continuacion su sueldo y su antiguedad en la empresa"<<endl;
    cout<<"Sueldo: ";
    cin>>S;
    cout<<"Años de antiguedad: ";
    cin>>A;
    if (A>=2 && A<5)
    {
        A=S*20/100;
    }
    else if (A>=5)
    {
        A=S*30/100;
    }
    else
    {
        A=0;
    }

    if (S<=1000)
    {
        S=S*25/100;
    }
    else if (S>1000 && S<=3500)
    {
        S=S*15/100;
    }
    else
    {
        S=S*10/100;
    }

    if (A>S)
    {
        cout<<"El bono es de: $"<<A;
    }
    else
    {
        cout<<"El bono es de: $"<<S;
    }
    
    return 0;
}
