#include <iostream>
using namespace std;
int main()
{
    float A[3][4], P[4]={0};
    int i, j, m;
    for (i=0;i<3;i++)
    {
        cout<<"Notas del alumno "<<i+1<<":"<<endl;
        for (j=0;j<4;j++)
        {
            cout<<"Asignatura "<<j+1<<": ";
            cin>>A[i][j];
            P[j]+=A[i][j];
        }
    }
    do
    {
        cout<<endl<<"Que promedio desea saber?:";
        cout<<endl<<"1.- Fisica";
        cout<<endl<<"2.- Quimica";
        cout<<endl<<"3.- Etica";
        cout<<endl<<"4.- Historia";
        cout<<endl<<"5.- Salir"<<endl;
        cin>>m;
        switch (m)
        {
        case 1:
            cout<<endl<<"El promedio de Fisica es: "<<P[0]/3;
            break;

        case 2:
            cout<<endl<<"El promedio de Quimica  es: "<<P[1]/3;
            break;

        case 3:
            cout<<endl<<"El promedio de Etica es: "<<P[2]/3;
            break;

        case 4:
            cout<<endl<<"El promedio de Historia es: "<<P[3]/3;
            break;

        case 5:
            break;
        
        default:
            cout<<endl<<"Error, vuelva a intentar";
            break;
        }
        cout<<endl;
    } while (m!=5);

    return 0;
}