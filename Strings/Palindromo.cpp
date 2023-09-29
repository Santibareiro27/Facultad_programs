#include <iostream>
#include <cstring>
#include <cctype>
#define N 51
using namespace std;
int main()
{
    char A[N];
    int i=0, j;
    bool b=true;
    cout<<"Ingrese un palindromo: ";
    cin.get(A,N);
    while (i<strlen(A))
    {

        if (isalpha(A[i])==false)
        {
            for (j=i;j<strlen(A);j++)
            {
                A[j]=A[j+1];
            }
            i--;
        }
        else
        {
            if (A[i]<='Z')
            {
                A[i]+=32;
            }
        }
        i++;
    }
    j=0;
    for (i=strlen(A)-1;i>=0;i--)
    {
        if (A[i]!=A[j])
        {
            b=false;
        }
        j++;
    }
    if (b)
    {
        cout<<endl<<"La frase es un PALINDROMO";
    }
    else
    {
        cout<<endl<<"La frase NO es un PALINDROMO";
    }
    return 0;
}