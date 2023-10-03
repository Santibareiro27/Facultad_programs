#include <iostream>
#include <cstring>
#define N 3 //Cantidad de alumnos
#define NL 31 //Tamaño cadenas de caracteres
using namespace std;

struct alumnos
{
    char legajo[7];
    char apellido[NL];
    char nombre[NL];
    float nota;
};

void Carga(alumnos []);
float Valida();
int Consulta(alumnos []);
void Muestra(alumnos []); 
void Buscar(alumnos [], char []);
void Enter();

int main(int argc, char const *argv[])
{
    char menu, apellido_in[NL];
    bool op1=false;
    alumnos alu[N];
    do
    {
        cout<<endl;
        cout<<"            Menu"<<endl;
        cout<<" __________________________"<<endl;
        cout<<"| 1. Carga de datos        |"<<endl;
        cout<<"| 2. Consulta regulares    |"<<endl;
        cout<<"| 3. Muestra de datos      |"<<endl;
        cout<<"| 4. Buscar alumno         |"<<endl;
        cout<<"| S. Salir                 |"<<endl;
        cout<<"|__________________________|"<<endl;
        cout<<endl<<"Opcion: ";
        cin>>menu;
        fflush(stdin);
        cin.clear();
        system("cls");
        switch (menu)
        {
            case '1':
            Carga(alu);
            op1=true;
            system("cls");
            break;

            case '2':
            if (op1) {
                cout<<endl<<Consulta(alu)<<" alumnos regularizaron"<<endl;
            }
            else {
                cout<<endl<<"No se han cargado datos de alumnos aun"<<endl;
            }
            Enter();
            system("cls");
            break;

            case '3':
            if (op1) {
                Muestra(alu);
            }
            else {
                cout<<endl<<"No se han cargado datos de alumnos aun"<<endl;
            }
            Enter();
            system("cls");
            break;

            case '4':
            if (op1) {
                cout<<endl<<"Ingrese el apellido que desea buscar: ";
                cin.getline(apellido_in,NL-1);
                fflush(stdin);
                cin.clear();
                Buscar(alu,apellido_in);
            }
            else {
                cout<<endl<<"No se han cargado datos de alumnos aun"<<endl;
            }
            Enter();
            system("cls");
            break;

            case 'S':
            break;

            default:
            cout<<endl<<"Error de ingreso, intente nuevamente"<<endl;
            Enter();
            system("cls");
            break;
        }
    } while (menu!='S');
    
    return 0;
}

void Carga(alumnos alu[])
{
    for (int i=0;i<N;i++)
    {
        cout<<endl<<"Alumno "<<i+1<<":"<<endl;
        cout<<"Ingrese el legajo: ";
        cin.getline(alu[i].legajo,6);
        fflush(stdin);
        cin.clear();
        cout<<"Ingrese el apellido: ";
        cin.getline(alu[i].apellido,NL-1);
        fflush(stdin);
        cin.clear();
        cout<<"Ingrese el nombre: ";
        cin.getline(alu[i].nombre,NL-1);
        fflush(stdin);
        cin.clear();
        cout<<"Ingrese la nota: ";
        alu[i].nota=Valida();
        cout<<endl;
    }
}

float Valida()
{
    float nota;
    do
    {
        cin>>nota;
        fflush(stdin);
        cin.clear();
        if (nota<=0 or nota >10)
        {
            cout<<endl<<"Error de ingreso(nota), intente nuevamente: ";
        }
    } while (nota<=0 or nota >10);
    return nota;
}

int Consulta(alumnos alu[])
{
    int cont=0;
    for (int i=0;i<N;i++)
    {
        if (alu[i].nota >= 6)
        {
            cout<<endl<<"Alumno "<<i+1<<endl;
            cout<<"Legajo: "<<alu[i].legajo<<endl;
            cout<<"Apellido: "<<alu[i].apellido<<endl;
            cout<<"Nombre: "<<alu[i].nombre<<endl;
            cout<<"Nota: "<<alu[i].nota<<endl;
            cont++;
        }
    }
    cout<<endl;
    return cont;
}

void Muestra(alumnos alu[])
{
    for (int i=0;i<N;i++)
    {
        cout<<endl<<"Alumno "<<i+1<<endl;
        cout<<"Legajo: "<<alu[i].legajo<<endl;
        cout<<"Apellido: "<<alu[i].apellido<<endl;
        cout<<"Nombre: "<<alu[i].nombre<<endl;
        cout<<"Nota: "<<alu[i].nota<<endl;
    }
}

void Buscar(alumnos alu[], char apellido_in[])
{
    bool ap_found=false;
    for (int i=0;i<N;i++)
    {
        if (!strcmp(alu[i].apellido,apellido_in))
        {
            cout<<endl<<"Alumno "<<i+1<<endl;
            cout<<"Legajo: "<<alu[i].legajo<<endl;
            cout<<"Apellido: "<<alu[i].apellido<<endl;
            cout<<"Nombre: "<<alu[i].nombre<<endl;
            cout<<"Nota: "<<alu[i].nota<<endl;
            ap_found=true;
        }
    }
    if (!ap_found)
    {
        cout<<endl<<"Apellido no cargado"<<endl;
    }
}

void Enter()
{
    cout<<endl<<"Presione enter para continuar "<<endl;
    cin.ignore();
    fflush(stdin);
    cin.clear();
}