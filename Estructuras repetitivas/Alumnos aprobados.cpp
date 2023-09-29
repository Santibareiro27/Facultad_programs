#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int Ca, C, M, Mm, Cm;
	float P, N, Nm, Pa, Pr;
	bool A;
	cout<<"Ingrese la cantidad de alumnos: ";
	cin>>Ca;
	P=0;
	Pa=0;
	Pr=0;
	Nm=0;
	Mm=0;
	Cm=1;
	for (C=0;C<Ca;C++)
	{
		cout<<"Numero de matricula: ";
		cin>>M;
		if (M>=1 && M<=9999)
		{
			cout<<"Asistencia (Ingrese '1' para presente o '0' para ausente): ";
			cin>>A;
			cout<<"Calificacion: ";
			cin>>N;
			if (A==1)
			{
				P++;
			    Pr=Pr+N;
			    if (N>=6)
			    {
				    Pa++;
			    }
			    if (N>Nm)
			    {
				    Nm=N;
				    Mm=M;
			    }
			    else if (N==Nm)
			    {
				    Cm++;
			    }
		    }
		}
		else
		{
			cout<<"Matricula no valida"<<endl<<endl;
			C--;
		}
	}
	cout<<"Hay "<<P<<" alumnos presentes (un "<<P*100/Ca<<"% de los totales)"<<endl;
	cout<<"El promedio general de los presentes es "<<Pr/P<<" (porcentaje de aprobados: "<<Pa*100/Ca<<"%)"<<endl;
	if (Cm==1)
	{
		cout<<"La mayor calificacion fue de "<<Nm<<" y su matricula es: "<<Mm<<endl;
	}
	else
	{
		cout<<"La mayor calificacion fue de "<<Nm<<" y la obtuvieron "<<Cm<<" alumnos";
	}
	return 0;
}

