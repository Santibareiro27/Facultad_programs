#include <iostream>
#include <cstring>
#define N 31
using namespace std;

void espaciar(char []);

int main(int argc, char const *argv[])
{
    char Cad[N];
    cout<<"Ingrese un string: ";
    cin.getline(Cad,N);
    fflush(stdin);
    espaciar(Cad);
    cin.ignore();
    fflush(stdin);
    return 0;
}

void espaciar(char Cad[])
{
    int i, j=0;
    char Cad2[strlen(Cad)*2+1];
    for (i=0;i<strlen(Cad)+1;i++)
    {
        if ((Cad[i]>='A' and Cad[i]<='Z') or (Cad[i]>='a' and Cad[i]<='z'))
        {
            Cad2[j]=Cad[i];
            j++;
            Cad2[j]=' ';
        }
        else
        {
            Cad2[j]=Cad[i];
        }
        j++;
    }
    cout<<endl<<Cad2;
}