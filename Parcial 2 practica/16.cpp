#include <iostream>
#define M 20
using namespace std;

int main(int argc, char const *argv[])
{
    int i, acu, c;
    char A[M]={'S','T','G','E'}, m, a;
    float C[M]={};
    bool b;
    do
    {
        cout<<endl<<"Que accion desea realizar?"<<endl;
        cout<<"1) Buscar un alumno"<<endl;
        cout<<"2) Realizar media de las notas"<<endl;
        cout<<"3) Realizar media de las notas menores a 5"<<endl;
        cout<<"4) Mostrar alumno con mejor nota"<<endl;
        cout<<"5) Mostrar alumno con peor nota"<<endl;
        cout<<"S) Salir"<<endl;
        cout<<"Opcion: ";
        cin>>m;
        switch (m)
        {
            case '1':
            cout<<"Inicial del alumno: ";
            cin>>a;
            i=0;
            b=false;
            do
            {
                if (a==A[i])
                {
                    b=true;
                }
                else
                i++;
            }
            while(b==false and i<M);
            if (b==true)
            {
                cout<<endl<<"Usted selecciono al alumno "<<A[i]<<" y su nota actual es: "<<C[i]<<endl;
                cout<<"Desea modificar su nota? s/n"<<endl;
                cin>>m;
                if (m=='s')
                {
                    cout<<endl<<"Ingrese la nueva nota: ";
                    do
                    {
                        cin>>C[i];
                        if (C[i]<0 or C[i]>10)
                        {
                            cout<<endl<<"Error de ingreso, intente nuevamente: ";
                        }
                    } while (C[i]<0 or C[i]>10);
                }
            }
            else
            {
                cout<<endl<<"Ese alumno no se encuentra en el sistema"<<endl;
            }
            break;

            case '2':
            acu=0;
            for (i=0;i<M;i++)
            {
                acu+=C[i];
            }
            acu/=M;
            cout<<endl<<"La media entre todas las notas es:"<<acu<<endl;
            break;
            
            case '3':
            acu=0;
            c=0;
            for (i=0;i<M;i++)
            {
                if (C[i]<5)
                {
                    acu+=C[i];
                    c++;
                }
            }
            cout<<endl<<"La media entre todas las notas menores de 5 es:"<<acu/c<<endl;
            break;

            case '4':
            for (i=0;i<M;i++)
            {
                if (i==0)
                {
                    a=i;
                }
                if (C[a]<C[i])
                {
                    a=i;
                }
            }
            cout<<endl<<"La nota mas alta es un "<<C[a]<<" del alumno "<<A[a]<<endl;
            break;

            case '5':
            for (i=0;i<M;i++)
            {
                if (i==0)
                {
                    a=i;
                }
                if (C[a]>C[i])
                {
                    a=i;
                }
            }
            cout<<endl<<"La nota mas baja es un "<<C[a]<<" del alumno "<<A[a]<<endl;
            break;
            
            case 'S':
            cout<<endl;
            break;

            default:
            cout<<endl<<"Error de ingreso, intente nuevamente"<<endl;
            break;
        }
    } while (m!='S');
    
    return 0;
}