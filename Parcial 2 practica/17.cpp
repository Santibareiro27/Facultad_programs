#include <iostream>
#define M 2
#define N 4
using namespace std;

int main(int argc, char const *argv[])
{
    float C[M][N], P[N]={}, aux;
    int i, j;
    char m;
    bool b;
    for (i=0;i<M; i++)
    {
        cout<<endl<<"A continuacion califique algunos aspectos del restaurante"<<endl;
        cout<<"Atencion: ";
        j=0;
        cin>>C[i][j];
        P[j]+=C[i][j];
        cout<<"Comida: ";
        j=1;
        cin>>C[i][j];
        P[j]+=C[i][j];
        cout<<"Precio: ";
        j=2;
        cin>>C[i][j];
        P[j]+=C[i][j];
        cout<<"Ambiente: ";
        j=3;
        cin>>C[i][j];
        P[j]+=C[i][j];
        cout<<endl;
    }
    for (i=0;i<N;i++)
    {
        P[i]/=M;
    }
    do
    {
        b=true;
        for (i=0;i<M-1;i++)
        {
            if (P[i]<P[i+1])
            {
                aux=P[i];
                P[i]=P[i+1];
                P[i+1]=aux;
                b=false;
            }
        }
    } while (b==false);
    cout<<endl<<"Promedio de calificaciones"<<endl;
    cout<<"Atencion: "<<P[0]<<endl;
    cout<<"Comida: "<<P[1]<<endl;
    cout<<"Precio: "<<P[2]<<endl;
    cout<<"Ambiente: "<<P[3]<<endl;

    return 0;
}