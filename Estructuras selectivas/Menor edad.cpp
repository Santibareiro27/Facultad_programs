#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int E1, E2, E3;
    string N1, N2, N3;
    cout<<"Nombre y edad persona 1: "<<endl;
    cout<<"Nombre: ",cin>>N1;
    cout<<"Edad: ",cin>>E1;
    cout<<"Nombre y edad persona 2: "<<endl;
    cout<<"Nombre: ",cin>>N2;
    cout<<"Edad: ",cin>>E2;
    cout<<"Nombre y edad persona 3: "<<endl;
    cout<<"Nombre: ",cin>>N3;
    cout<<"Edad: ",cin>>E3;
    if (E1<E2 && E1<E3)
    {
       cout<<N1<<" es el de menor edad y tiene: "<<E1<<" años";
    }
    else if (E2<E1 && E2<E3)
    {
        cout<<N2<<" es el de menor edad y tiene: "<<E2<<" años";
    }
    else
    {
        cout<<N3<<" es el de menor edad y tiene: "<<E3<<" años";
    }
    
    return 0;
}
