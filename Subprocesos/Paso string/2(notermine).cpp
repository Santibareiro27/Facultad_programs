#include <iostream>
#include <cstring>

using namespace std;

struct fecha
{
    int dia;
    int mes;
    int anio;
};
struct alumnos
{
    char legajo [10];
    char apnom [35];
    char direc [40];
    struct fecha fe [2];
    int edad;
};

void carga_alu (alumnos [], int &);
void carga_fecha (fecha [], int);
alumnos Ordena (alumnos [], int);

int main (int argc, char const *argv[])
{
    alumnos alu[100];
    int N;
    char menu;
    carga_alu(alu,N);
    do
    {
        cout<<endl;
        cout<<"            Menu"<<endl;
        cout<<" __________________________"<<endl;
        cout<<"| 1. Ordenar               |"<<endl;
        cout<<"| 2. Buscar Legajo         |"<<endl;
        cout<<"| S. Salir                 |"<<endl;
        cout<<"|__________________________|"<<endl;
        cout<<endl<<"Opcion: ";
        cin>>menu;
        fflush(stdin);
        cin.clear();
        switch (menu)
        {
            case '1':
            Ordena(alu,N);
            for (int i=0;i<N;i++)
            {
                cout<<endl<<"Alumno "<<i+1<<endl;
                cout<<"Legajo: "<<alu[i].legajo<<endl;
                cout<<"Apellido y nombre: "<<alu[i].apnom<<endl;
                cout<<"Direccion: "<<alu[i].direc<<endl;
                cout<<"Fecha de nacimiento: "<<alu[i].fe[0].dia<<"/"<<alu[i].fe[0].mes<<"/"<<alu[i].fe[0].anio<<endl;
                cout<<"Fecha de Ingreso: "<<alu[i].fe[1].dia<<"/"<<alu[i].fe[1].mes<<"/"<<alu[i].fe[1].anio<<endl;
                cout<<"Edad: "<<alu[i].edad<<endl;
            }
            break;

            case '2':
            break;

            case 'S':
            break;

            default:
            break;
        }
    } while (menu!='S');
    return 0;
}

void carga_alu (alumnos alu[], int &N)
{
    do
    {
        cout<<endl<<"Ingrese la cantidad de alumnos: ";
        cin>>N;
        fflush(stdin);
        cin.clear();
        if (N<1 or N>100)
        {
            cout<<endl<<"Error de ingreso, intente nuevamente"<<endl;
        }
    } while (N<1 or N>100);
    for (int i=0;i<N;i++)
    {
        cout<<endl<<"Alumno "<<i+1<<endl;
        cout<<"Ingrese el legajo: ";
        cin.getline(alu[i].legajo,9);
        fflush(stdin);cin.clear();
        cout<<"Ingrese el apellido y nombre (respectivamente): ";
        cin.getline(alu[i].apnom,34);
        fflush(stdin);cin.clear();
        cout<<"Ingrese la direccion: ";
        cin.getline(alu[i].direc,39);
        fflush(stdin);cin.clear();
        cout<<"Ingrese la fecha de nacimiento: "<<endl;
        carga_fecha(alu[i].fe,0);
        cout<<"Ingrese la fecha de Ingreso: "<<endl;
        carga_fecha(alu[i].fe,1);
        do
        {
            cout<<"Ingrese la edad del alumno: "<<endl;
            cin>>alu[i].edad;
            fflush(stdin);cin.clear();
            if (alu[i].edad<=0)
            {
                cout<<endl<<"Error de ingreso, intente nuevamente"<<endl;
            }
        } while (alu[i].edad<=0);
    }
}

void carga_fecha (fecha fe[], int i)
{
    do
    {
        cout<<"Dia:";cin>>fe[i].dia;
        fflush(stdin);cin.clear();
        if (fe[i].dia<1 or fe[i].dia>30)
        {
            cout<<endl<<"Error de ingreso, intente nuevamente"<<endl;
        }
    } while (fe[i].dia<1 or fe[i].dia>30);
    do
    {
        cout<<"Mes:";cin>>fe[i].mes;
        fflush(stdin);cin.clear();
        if (fe[i].mes<1 or fe[i].mes>12)
        {
            cout<<endl<<"Error de ingreso, intente nuevamente"<<endl;
        }
    } while (fe[i].mes<1 or fe[i].mes>12);
    do
    {
        cout<<"Anio:";cin>>fe[i].anio;
        fflush(stdin);cin.clear();
        if (fe[i].anio<0)
        {
            cout<<endl<<"Error de ingreso, intente nuevamente"<<endl;
        }
    } while (fe[i].anio<0);
}

alumnos Ordena (alumnos alu[], int N)
{
    alumnos aluord[N];
    char aux[35];
    for (int i=0;i<N;i++)
    {
        strcpy(aluord[i],alu[i])
    }

    for (int i=0;i<N;i++)
    {
        for (int j=0;j<N-1;j++)
        {
            if (strcmp(alu[j].apnom,alu[j+1].apnom)>0)
            {
                strcpy(aux,alu[j].apnom);
                strcpy(alu[j].apnom,alu[j+1].apnom);
                strcpy(alu[j+1].apnom,aux);
            }
        }
    }
    return;
}