#include <iostream>
using namespace std;
int main ()
{
    int Num, i=2;
    bool flag1=true;
    int *pNum;
    pNum=&Num;
    cin>>Num;
    if (Num>1)
    {
        while (Num!=i)
        {
            if (Num%i==0)
            {
                flag1=false;
            }
            i++;
        }
    }
    else
    {
        flag1=false;
    }
    if (flag1==true)
    {
        cout<<"Es un numero primo";
    }
    else
    {
        cout<<"No es un numero primo";
    }
    cout<<endl<<"Su direccion en memoria es: "<<pNum;
    
    return 0;
}