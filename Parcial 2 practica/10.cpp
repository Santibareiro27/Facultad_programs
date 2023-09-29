#include <iostream>
#include <cstring>
#define M 2
#define N 7
using namespace std;

int main(int argc, char const *argv[])
{
    char V[N];
    float A[M][N], Ms[M]={0}, Mm=0;
    int i, j;
    do
    {
        cin.get(V,N);
        cin.ignore();
    } while (
    strcmp(V,"ENERO")==true);
    cout<<endl<<"Introduzca las temperaturas de "<<V<<":"<<endl;
    for (i=0;i<M;i++)
    {
        cout<<endl<<"Semana "<<i+1<<":"<<endl;
        for (j=0;j<N;j++)
        {
            cout<<"Dia "<<j+1<<":"<<endl;
            cin>>A[i][j];
            Ms[i]+=A[i][j];
            Mm+=A[i][j];
        }
        Ms[i]/=N;
    }
    Mm/=M*N;
    cout<<endl<<"Mes:"<<endl;
    for (i=0;i<M;i++)
    {
        for (j=0;j<N;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for (i=0;i<M;i++)
    {
        cout<<"En la semana "<<i+1<<" la media fue: "<<Ms[i]<<endl;
    }
    cout<<endl<<"En el mes la media fue: "<<Mm<<endl<<endl;
    for (i=0;i<M;i++)
    {
        for (j=0;j<N;j++)
        {
            if (A[i][j]>=Ms[i])
            {
                cout<<"En el dia "<<i*N+j+1<<" semana "<<i+1<<" se igualo o supero la media semanal"<<endl;
            }
        }
    }
    for (i=0;i<M;i++)
    {
        for (j=0;j<N;j++)
        {
            if (A[i][j]>=Mm)
            {
                cout<<"En el dia "<<i*N+j+1<<" se igualo o supero la media semestral"<<endl;
            }
        }
    }

    return 0;
}