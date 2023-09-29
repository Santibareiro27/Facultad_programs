#include <iostream>
using namespace std;

/*El usuario podra elegir cualquier alternativa, luego ingresar dos nu meros y realizar la operacio n
seleccionada. Solamente con “S” podrá Salir.
Tener en cuenta que si elige 4.- División debera e ingresar el denominador hasta que ingrese un
valor diferente a 0 (cero).
Si ingresa un nu mero negativo o mayor que 4 debera informar “Opcio n no va lida”.*/

int main(int argc, char *argv[]) {
	char M;
	float X, Y;
	do
	{
		cout<<endl<<"Escoja una operacion: "<<endl;
		cout<<"1.- Suma"<<endl;
		cout<<"2.- Resta"<<endl;
		cout<<"3.- Producto"<<endl;
		cout<<"4.- Division"<<endl;
		cout<<"S.- Salir"<<endl<<endl;
		cin>>M;
		cout<<endl;
		switch(M)
		{
		case '1':
			cout<<"Primer numero: ";
			cin>>X;
			cout<<"Segundo numero: ";
			cin>>Y;
			cout<<"Resultado: "<<X+Y<<endl;
			break;
			
		case '2':
			cout<<"Primer numero: ";
			cin>>X;
			cout<<"Segundo numero: ";
			cin>>Y;
			cout<<"Resultado: "<<X-Y<<endl;
			break;
			
		case '3':
			cout<<"Primer numero: ";
			cin>>X;
			cout<<"Segundo numero: ";
			cin>>Y;
			cout<<"Resultado: "<<X*Y<<endl;
			break;
			
		case '4':
			cout<<"Primer numero: ";
			cin>>X;
			cout<<"Segundo numero: ";
			cin>>Y;
			while(Y==0)
			{
				cout<<"No puede ingresar 0, intente nuevamente: ";
				cin>>Y;
			}
			cout<<"Resultado: "<<X/Y<<endl;
			break;
			
		case 'S':
			break;
			
		default:
			cout<<"Opcion no valida"<<endl;
			break;
		}
		
	} while(M!='S');
	return 0;
}

