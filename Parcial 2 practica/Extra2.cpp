#include <iostream>
#define N 20
using namespace std;

int main() {
	int i, j, n, v=0;
    float E[N][2], V[N], Ma=0, ma=35, Ct=0;
    cout<<"Empleados: ";
    do
    {
        cin>>n;
        if (n<0)
        {
            cout<<"Error de ingreso, reintente: ";
        }
    } while (n<0);
    for (i=0;i<n;i++)
    {
        for (j=0;j<2;j++)
        {
            if (j==0)
            {
                cout<<"Sueldo empleado "<<i+1<<": ";
                do
                {
                    cin>>E[i][j];
                    if (E[i][j]<0)
                    {
                        cout<<"Error de ingreso, reintente: ";
                    }
                } while (E[i][j]<0);
            }
            else
            {
                cout<<"Antiguedad empleado "<<i+1<<": ";
                do
                {
                    cin>>E[i][j];
                    if (E[i][j]<0 or E[i][j]>35)
                    {
                        cout<<"La antiguedad debe ser de 0 a 35 años, reintente: ";
                    }
                    else
                    {
                        if (E[i][j]>Ma)
                        {
                            Ma=E[i][j];
                        }
                        if (E[i][j]<ma)
                        {
                            ma=E[i][j];
                        }
                    }
                } while (E[i][j]<0 or E[i][j]>35);
            }
        }
    }
    cout<<endl<<"Nuevo sueldo"<<endl;
    for (i=0;i<n;i++)
    {
        if (E[i][1]>=1 and E[i][1]<5)
        {
            V[i]=E[i][0]+E[i][0]*0.15;
        }
        else if (E[i][1]>=5 and E[i][1]<10)
        {
            V[i]=E[i][0]+E[i][0]*0.30;
        }
        else if (E[i][1]>=10 and E[i][1]<15)
        {
            V[i]=E[i][0]+E[i][0]*0.50;
        }
        else if (E[i][1]>=15 and E[i][1]<20)
        {
            V[i]=E[i][0]+E[i][0]*0.75;
        }
        else
        {
            V[i]=E[i][0]*2;
            v++;
        }
        cout<<"Empleado "<<i+1<<": "<<V[i]<<endl;
        Ct+=V[i];
    }
    cout<<endl<<"La mayor antiguedad es de: "<<Ma;
    cout<<endl<<"La menor antiguedad es de: "<<ma;
    cout<<endl<<"El costo total de los empleados es de: "<<Ct;
    cout<<endl<<"La cantidad de empleados con +20 de antiguedad es: "<<v;

	return 0;
}