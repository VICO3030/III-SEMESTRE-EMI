#include<iostream>
using namespace std;
//LA CLASE BASE
class Persona
{
	string nombre;
	int edad;
	protected:
		Persona(string,int);
		// para polimorfismo
		virtual void datosP() ;
		virtual void resultados()  {	}  // se deja VACIO.
};
Persona::Persona(string nom,int ed)
{
	nombre=nom;
	edad=ed;
}
void Persona::datosP()
{
	cout<<"NOMBRE = "<<nombre<<endl<<"EDAD = "<<edad<<endl;
}

// LA CLASE DERIVADA ESTUDIANTE
class Estudiante:Persona
{	int nota;
	public:
		Estudiante(string,int,int);
		void resultados();  //condicion();
		void datosP();
};
Estudiante::Estudiante(string nom,int ed,int no):Persona(nom,ed)
{	nota=no;
}
void Estudiante::datosP() 
{	
}
void Estudiante::resultados()    //condicion()
{	datosP();
	if (nota>50)
		cout<<"Su condicion = APROBADO"<<endl;
	else
		cout<<"Su condicion = REPROBADO"<<endl;
}
// LA CLASE BASE PROFESOR
class Profesor:Persona
{	int antig;
	public:
		Profesor(string,int,int);
		void datosP();
		void resultados(); //materias();
		/* materias de acuerdo con : menos de 5 dicta 1 ,
		de  5 a 10 dicta 2, y mas de 10 dicta 3*/
};
Profesor::Profesor(string n,int e,int a):Persona(n,e)
{	antig=a;
}
void Profesor::	datosP() 
{   }
void Profesor::resultados()   // materias()
{	datosP();
	if (antig<5)
		cout<<"Dicta 1 materia";
	else
		if (antig<=10)
			cout<<"Dicta 2 materias";
		else
			cout<<"Dicta 3 materias";
	cout<<endl;
}

void menu(string n, int e)
{	int opcion,nota;
	cout<<"SELECCIONAR UNA PERSONA "<<endl<<"----------------------------"<<endl;
	cout<<"1. ESTUDIANTE : "<<endl;  
	cout<<"2. PROFESOR : "<<endl;  
	cout<< "Opcion =  "; cin>>opcion;
	switch (opcion)
	{
		case 1: {	
					do
					{	cout<<" NOTA = ";  cin>>nota;
					} while (nota<0||nota>100);
					Estudiante student(n,e,nota);
					student.resultados();   //condicion() ;
					break;
				}
		case 2: {	
					do
					{	cout<<" ANTIGUEDAD = ";  cin>>nota;
					} while (nota<=0);
					Profesor teacher(n,e,nota);
					teacher.resultados();   //materias() ;
					break;
				}				
	}
}
void datos()
{	string nombre;
	int edad;
	cout<<"INGRESO DE DATOS "<<endl<<"-------------------"<<endl;
	cout<<"SU NOMBRE : ";  cin >>nombre;
	cout<<"SU EDAD : ";  cin >>edad;
	menu(nombre,edad);
}
int main()
{	int seguir;
	do
	{	datos();
		cout<<endl;
		cout<<"Desea continuar..[0]= terminar y otro valor para seguir"; cin>>seguir;
	}while(seguir!=0);
	return 0;
}
