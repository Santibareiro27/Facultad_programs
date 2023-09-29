#include <iostream>
using namespace std;
struct Persona {
	char nombre[30];
	int edad;
};
// prototipo de la función para el ingreso de datos
void pedirdatos(Persona &);
// prototipo de la función para pasar la estructura
void mostrardatos(Persona);
int main() {
	struct Persona p1;
	// Llamada a la función para el ingreso de datos en la estructura
	pedirdatos(p1);
	// llamada a la función para mostrar los datos de la estructura
	mostrardatos(p1);
	return 0;}
// definición de la función pedirdatos
void pedirdatos(Persona &p1){
	cout << "Ingrese nombre: ";
	cin.getline(p1.nombre,30,'\n');
	cout << "Ingrese edad: ";
	cin >> p1.edad;}
	// definición de la función mostrardatos
	void mostrardatos(Persona p){
		cout << "\n\nNombre: " << p.nombre<<endl;
		cout << "Edad: " << p.edad << endl;}
