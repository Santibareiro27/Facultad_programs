#include <iostream>
#include <cstring>
#include <cctype>
#define N 200
using namespace std;
int main()
{
    char A[N];
    int i, p=0;
    bool b=false;
    cout<<"Ingrese un texto de menos de 200 caracteres: "<<endl;
    cin.get(A,N);
    for (i=0;i<strlen(A);i++)
    {
        if (isalpha(A[i]))
        {
            if (b==false)
            {
                p++;
                b=true;
            }
        }
        else
        {
            b=false;
        }
    }
    cout<<endl<<"Cantidad de palabras: "<<p;

    return 0;
}