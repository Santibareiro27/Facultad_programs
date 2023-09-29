#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int P;
    cout<<"Ingrese el presupuesto para el regalo: ";
    cin>>P;
    if (P>0 && P<=10)
    {
        cout<<"Puede comprarle una tarjeta";
    }
    else if (P>10 && P<=100)
    {
        cout<<"Puede comprarle unos chocolates";
    }
    else if (P>100 && P<=250)
    {
        cout<<"Puede comprarle unas flores";
    }
    else
    {
        cout<<"Puede comprarle un anillo";
    }
    
    return 0;
}
