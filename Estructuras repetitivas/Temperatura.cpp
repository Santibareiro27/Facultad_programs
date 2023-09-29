#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t, c, tm, dm, tv, tp;
    cout<<"A continuacion debera ingresar la temperatura de los ultimos 7 dias (en grados centigrados)."<<endl;
    tm=0;
    dm=0;
    tv=0;
    tp=0;
    for (c=1;c<=7;c++)
    {
        cout<<"Temperatura del dia "<<c<<": "<<endl;
        cin>>t;
        if (t>=5 && t<=40)
        {
            tp=tp+t;
            if (t>25)
            {
                tv++;
            }
            if (t>tm)
            {
                tm=t;
                dm=c;
            }
        }
        else
        {
            cout<<"La temperatura debe estar comprendida entre 5 y 40 grados, vuelva intentarlo."<<endl;
            c--;
        }
    }
    cout<<endl<<"La temperatura maxima fue de "<<tm<<" grados centigrados y se produjo en el dia "<<dm<<"."<<endl;
    cout<<"La temperatura supero los 25 grados "<<tv<<" dias."<<endl;
    cout<<"El promedio de temperatura fue de "<<tp/7<<" grados";
    return 0;
}
