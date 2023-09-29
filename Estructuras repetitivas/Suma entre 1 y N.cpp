#include <iostream>
using namespace std;

int main()
{
    int N, P=0, I=0, C=0;
    cout<<"Ingrese un numero: ";
    cin>>N;
    while (C<N)
    {
        C++;
        if (C%2==0)
        {
            P=P+C;
        }
        else
        {
            I=I+C;
        }
    }
    cout<<endl<<"Suma de pares: "<<P;
    cout<<endl<<"Suma de impares: "<<I;
    return 0;
}
