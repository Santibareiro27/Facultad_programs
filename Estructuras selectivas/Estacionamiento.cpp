#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int H;
    cout<<"Ingrese la cantidad de horas: ";
    cin>>H;
    if (H>0 && H<3)
    {
        H=H*5;
    }
    else if (H>2 && H<6)
    {
        H=H*4+2;
    }
    else if (H>5 && H<11)
    {
        H=H*3+7;
    }
    else if (H>10)
    {
        H=H*2+17;
    }
    cout<<"Debe cobrar un total de: $"<<H;

    return 0;
}
