#include <iostream>
#define M 12 //meses
#define N 5 //depas
using namespace std;

int main(int argc, char const *argv[])
{
    float A[M][N], Vm[M]={}, Ma=0, J=0, D[N]={};
    int i, j, d;
    char m;
    cout<<"Ingresar ventas:"<<endl;
    for (i=0;i<M;i++)
    {
        cout<<"Mes "<<i+1<<":"<<endl;
        for (j=0;j<N;j++)
        {
            cout<<"Departamento "<<j+1<<": ";
            do
            {
                cin>>A[i][j];
                if (A[i][j]<0)
                {
                    cout<<"Error de ingreso, reintentar: ";
                }
            } while (A[i][j]<0);
            Vm[i]+=A[i][j];
            Ma+=A[i][j];
            if (i==6)
            {
                if (J<A[i][j])
                {
                    J=A[i][j];
                }
            }
            if (D[j]<A[i][j])
            {
                D[j]=A[i][j];
            }
        }
    }
    cout<<endl<<"Analisis:"<<endl;
    for (i=0;i<M;i++)
    {
        cout<<"Mes "<<i+1<<": ";
        for (j=0;j<N;j++)
        {
            cout<<"$"<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    do
    {
        cout<<endl<<"Que accion desea realizar?"<<endl;
        cout<<"1) Ver ventas mensuales"<<endl;
        cout<<"2) Ver monto anual"<<endl;
        cout<<"3) Mayor venta de julio"<<endl;
        cout<<"4) Mayor venta de un departamento"<<endl;
        cout<<"F/f) Salir"<<endl;
        cout<<"Opcion: ";
        cin>>m;
        switch (m)
        {
            case '1':
            cout<<endl<<"Ventas mensuales:"<<endl;
            for (i=0;i<M;i++)
            {
                cout<<"Mes "<<i+1<<": $"<<Vm[i]<<endl;
            }
            break;

            case '2':
            cout<<endl<<"Monto anual: $"<<Ma<<endl;
            break;
            
            case '3':
            cout<<endl<<"Mayor venta de julio: $"<<J<<endl;
            break;

            case '4':
            cout<<endl<<"Departamento: ";
            do
            {
                cin>>d;
                if (d<=0 or d>N)
                {
                    cout<<endl<<"No existe ese departamento, intente nuevamente: ";
                }
            } while (d<=0 or d>N);
            cout<<endl<<"Mayor venta del departamento 000"<<d<<": $"<<D[d-1]<<endl;
            break;

            default:
            if (m!='F' and m!='f')
            cout<<endl<<"Error de ingreso, intente nuevamente"<<endl;
            break;
        }
    } while (m!='F' and m!='f');

    return 0;
}