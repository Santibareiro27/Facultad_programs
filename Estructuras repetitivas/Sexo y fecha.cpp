#include <iostream>
using namespace std;

int main()
{
    int M=0, F=0, D, D1=0, D2=0;
    char S;
    cout<<"A continuacion debera ingresar el sexo y fecha de nacimiento de los bebes";
    cout<<endl<<"Sexo (M/F): ";
    cin>>S;
    while (S=='F' or S=='M')
    {
        cout<<"Fecha de nacimiento: "<<endl;
        cout<<"Dia: ";
        cin>>D;
        cout<<"Mes: ";
        cin>>D;
        if (S=='M')
        M++;
        if (S=='F')
        F++;
        if (D>=1 && D<=6)
        D1++;
        if (D>=7 && D<=12)
        D2++;
        cout<<endl<<"Sexo (M/F): ";
        cin>>S;
    }
    cout<<endl<<"Hay un total de "<<M<<" hombres y "<<F<<" mujeres.";
    cout<<endl<<D1<<" nacieron en el primer semestre y "<<D2<<" en el segundo semestre.";
    return 0;
}
