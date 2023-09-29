/*Crear una subrutina llamada “Login”, que recibe un nombre de usuario y una contraseña y te devuelve Verdadero si el nombre de usuario es “usuario1” y la contraseña es “asdasd”.
Además recibe el número de intentos que se ha intentado hacer login y si no se ha podido hacer login incremente este valor. */
#include <iostream>
#include <cstring>
using namespace std;

struct Logindata
{
    char username[20];
    char password[20];
} Ld1;

bool Login(struct Logindata, int&);

int main(int argc, char const *argv[])
{
    int Att=0;
    do {
    cout<<endl<<"Enter username: ";
    cin.getline(Ld1.username,20);
    fflush(stdin);
    cout<<"Enter password: ";
    cin.getline(Ld1.password,20);
    fflush(stdin);
    } while(Login(Ld1,Att)==false);
    cout<<endl<<"Welcome. (Attempts: "<<Att<<")"<<endl;
    cout<<endl<<"Press enter to end: ";
    cin.ignore();
    return 0;
}

bool Login(struct Logindata Ld, int& A)
{
    A++;
    if (strcmp(Ld.username,"usuario1")==0 and strcmp(Ld.password,"asdasd")==0)
    {
        return true;
    }
    else
    {
        cout<<endl<<"Incorrect username or password, please try again."<<endl;
        return false;
    }
}