#include <iostream>
#define N 20
using namespace std;

int main() {
	int i, n, A[N], t=0, IC[4]={};
    char C[N];
    cout<<"Asistentes: ";
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
        cout<<endl<<"Documento asistente "<<i+1<<": ";
        do
        {
            cin>>A[i];
            if (A[i]<0)
            {
                cout<<"Error de ingreso, reintente: ";
            }
        } while (A[i]<0);
        cout<<endl<<"Lista de cargos:"<<endl;
        cout<<"G - Gerente"<<endl;
        cout<<"J - Jefe de sector"<<endl;
        cout<<"S - Supervisor"<<endl;
        cout<<"O - Operario"<<endl;
        cout<<"Cargo: ";
        do
        {
            cin>>C[i];
            if (C[i]!='G' and C[i]!='J' and C[i]!='S' and C[i]!='O')
            {
                cout<<"Error de ingreso, reintente: ";
            }
        } while (C[i]!='G' and C[i]!='J' and C[i]!='S' and C[i]!='O');
    }
    for (i=0;i<n;i++)
    {
        cout<<endl;
        cout<<"El inscripto "<<A[i]<<" debe pagar $";
        switch (C[i])
        {
        case 'G':
        cout<<"1600";
        t+=1600;
        IC[0]++;
        break;

        case 'J':
        cout<<"1300";
        t+=1300;
        IC[1]++;
        break;

        case 'S':
        cout<<"1000";
        t+=1000;
        IC[2]++;
        break;

        case 'O':
        cout<<"500";
        t+=500;
        IC[3]++;
        break;

        default:
        break;
        }
    }
    cout<<endl<<endl<<"El total recaudado es de: $"<<t<<endl;
    cout<<endl<<"Cantidad de cargos:"<<endl;
    cout<<"Gerente: "<<IC[0]<<endl;
    cout<<"Jefe de sector: "<<IC[1]<<endl;
    cout<<"Supervisor: "<<IC[2]<<endl;
    cout<<"Operario: "<<IC[3]<<endl;

	return 0;
}