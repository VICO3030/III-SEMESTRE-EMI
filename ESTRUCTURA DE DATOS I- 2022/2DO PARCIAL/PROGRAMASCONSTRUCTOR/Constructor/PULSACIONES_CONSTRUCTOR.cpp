// pulsaciones con constructor creando 4 objetos
#include <iostream>
using namespace std;
class Gimnasio
{	private:
		char gen;
		int edad;
	public:
		Gimnasio(char ge, int ed);
		float pulsaciones();
};
Gimnasio::	Gimnasio(char ge, int ed)
{	gen=ge;
	edad=ed;
}
float Gimnasio::pulsaciones()
{	if (gen=='f'|| gen=='F')
	{	return (220 - edad)/10.0;
	}
	else
	{	return (210.0-edad)/10;
	}
}
char validarGenero()
{	char letra;
	do
	{	cout<<"Ingrese el genero: <f o F> = Femenino <m o M> = Masculino : ";
		cin>>letra;
		if (letra!='f' && letra!='F'&& letra!='m' && letra!='M')
			cout<<"No es un genero válido  dentro de las opciones \n";
	}while(letra!='f' && letra!='F'&& letra!='m' && letra!='M');
	return letra;
}

int validarEdad()
{	int letra;
	do
	{	cout<<"Ingrese la edad  : ";
		cin>>letra;
		if (letra<1 || letra>100)
			cout<<"No es una edad valida \n";
	}while(letra<1 || letra>100);
	return letra;
}
int main()
{	char genero;
	int edad;
	genero=validarGenero();
	edad=validarEdad();
	Gimnasio persona1(genero,edad);
	genero=validarGenero();
	edad=validarEdad();
	Gimnasio persona2(genero,edad);
	genero=validarGenero();
	edad=validarEdad();
	Gimnasio persona3(genero,edad);
	genero=validarGenero();
	edad=validarEdad();
	Gimnasio persona4(genero,edad);
	cout<<"Reporte de las pulsaciones es :\n";
	cout<<"Persona 1, sus pulsaciones = "<<persona1.pulsaciones()<<endl;
	cout<<"Persona 2, sus pulsaciones = "<<persona2.pulsaciones()<<endl;
	cout<<"Persona 3, sus pulsaciones = "<<persona3.pulsaciones()<<endl;
	cout<<"Persona 4, sus pulsaciones = "<<persona4.pulsaciones()<<endl;
}
