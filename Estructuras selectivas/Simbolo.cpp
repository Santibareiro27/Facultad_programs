#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    char S;
    float N1, N2;
    cout<<"A continuacion ingrese dos numeros para realizar una operacion."<<endl;
    cout<<"Primer numero: ";
    cin>>N1;
    cout<<"Segundo numero: ";
    cin>>N2;
    cout<<endl<<"Ahora debera elegir la operacion que desea realizar."<<endl;
    cout<<"Suma: +"<<endl;
    cout<<"Resta: -"<<endl;
    cout<<"Multiplicacion: *"<<endl;
    cout<<"Division: /"<<endl;
    cout<<"Ingrese el simbolo correspondiente a la operacion: ";
    cin>>S;
    cout<<endl;
    switch (S)
    {
    case '+':
        cout<<"A seleccionado la suma."<<endl;
        cout<<"Operacion: "<<N1<<" + "<<N2<<" = "<<N1+N2;
        break;

    case '-':
        cout<<"A seleccionado la resta."<<endl;
        cout<<"Operacion: "<<N1<<" - "<<N2<<" = "<<N1-N2;
        break;

    case '*':
        cout<<"A seleccionado la multiplicacion."<<endl;
        cout<<"Operacion: "<<N1<<" * "<<N2<<" = "<<N1*N2;
        break;

    case '/':
        cout<<"A seleccionado la division."<<endl;
        cout<<"Operacion: "<<N1<<" / "<<N2<<" = "<<N1/N2;
        break;

    default:
        cout<<endl<<"Error de ingreso";
        break;
    }
    return 0;
}