#include<iostream>
#include<string.h>
using namespace std;
class Persona
{
	string nombre;
	int edad;
	protected:
		Persona(string _n, int _e){
			nombre=_n;
			edad=_e;
			
		}
		virtual void datos(){
		}
		//metodos paramis atributos 
		string getNomb(){
			return nombre;
		} 
		int getEdad(){
			return edad;
		}
};


class Estudiante:Persona
{
	int nota;
	public:
		Estudiante( string n , int e , int no):Persona (n,e){
			nota=no;
		}
		void Condicion()
		{
			if(nota>=51){
				cout<<"\nEstudiante aprobado\n";
				
			}
			else{
				cout<<"Estudiante esta reprobado"<<endl;
			}
		}
		//aplicar el POLIMORFISMO
		void datos(){
			cout<<"Nombre del estudiante = "<<getNomb()<<endl;
			cout<<"Nota del Estudiante = "<<nota<<endl;
			cout<<"Edad del estudiante = "<<getEdad();
			Condicion();
		}
};

class Profesor :Persona
{
	int anti;
	public:
		Profesor(string n ,int e ,int a):Persona(n,e){
			anti=a;
		}
		void materias(){
			if (anti<5 ){
				cout<<"DICTA 1 MATERIA\n";	
			}
			else
			  if (anti<10)
			    cout<<"Dicta  2 materias\n";
			    else
			    cout<<"Dicta 3 materia\n";
		}
		void datos(){
			cout<<"Nombre del profesor ="<<getNomb()<<endl;
			cout<<"Edad del profesor = "<<getEdad()<<"\n";
		}
};
int main(){
	Estudiante mostrar("JUAN PEREZ", 22 ,84);
	mostrar.datos();
	Profesor  teacher("OSCAR ANDRES", 38 , 7);
	teacher.datos();
	teacher.materias();
	
	return 0;
}
