/*Realice un programa en lenguaje C que permita cargar tres vectores con las calificaciones de tres asignaturas para 10 alumnos.
Cada vector se utiliza para una asignatura. Validar los datos cargados. 
Una vez finalizada la carga, calcular y mostrar el promedio de las 3 materias para cada alumno.*/
#include <iostream>
#define N 3
using namespace std;

int main()
{
    float A1[N], A2[N], A3[N], *p, aux;
    int i;
    for (i=0;i<N;i++)
    {
        cout<<endl<<"Ingresar las notas del alumno "<<i+1<<":"<<endl;
        do
        {
            cout<<"Asignatura A1: ";
            p=&A1[i];
            cin>>*p;
            if (*p<=0 or *p>10)
            {
                cout<<endl<<"Error de ingreso"<<endl;
            }
        } while (*p<=0 or *p>10);
        do
        {
            cout<<"Asignatura A2: ";
            p=&A2[i];
            cin>>*p;
            if (*p<=0 or *p>10)
            {
                cout<<endl<<"Error de ingreso"<<endl;
            }
        } while (*p<=0 or *p>10);
        do
        {
            cout<<"Asignatura A3: ";
            p=&A3[i];
            cin>>*p;
            if (*p<=0 or *p>10)
            {
                cout<<endl<<"Error de ingreso"<<endl;
            }
        } while (*p<=0 or *p>10);
    }
    for (i=0;i<N;i++)
    {
        aux=0;
        cout<<endl<<"Promedio del alumno "<<i+1<<": ";
        p=&A1[i];
        aux+=(*p);
        p=&A2[i];
        aux+=(*p);
        p=&A3[i];
        aux+=(*p);
        p=&aux;
        cout<<*p/3;
    }

    return 0;
}