#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
using namespace std;


class Animal
{
	//atributos
	int	edad;
	protected:
		Animal(int _edad){
			edad=_edad;
		}
	int getEdad(){
		return edad;
	}
	virtual void comer() {}
};


class Perro :Animal
{
	string nombre,raza;
	public:
		Perro(string _nombre, string _raza, int edad):Animal(edad){
			nombre=_nombre;
		    raza=_raza;	
		}
		void comer(){
			cout<<" EL PERRO COME DE SENTADO "<<endl;
			cout<<"SU edad es de : "<<getEdad()<<endl;
			cout<<"Su raza  es de : "<<raza<<endl;
		}
};


class Humano: Animal{
	string nombre;
	public :
		Humano(string _nombre, int edad):Animal(edad){
			nombre=_nombre;
		}
		void comer(){
			cout<<"EL HUMANO COME DE SENTADO ";
			cout<<"SU nombre es : "<<nombre<<endl;
			cout<<"Su edad es   : "<<getEdad()<<endl;
		}

};
int main(){
	srand(time(NULL));
	int ale,r,edad;
	string nombre[5]={"victor", "tobi","juanito","tomas","esteban"};
	string raza[3]={"rot wailer", "pitbull","chapi"};

	edad=20+rand()%(30+1-20);
    for (int i=0 ; i<5 ; i++ ){
    	ale=0+rand()%(4+1-0);
	    r=0+rand()%(2+1-0);
    	Perro mostrar(nombre[ale],raza[r],edad);
	    mostrar.comer();
	}
	cout<<"-------------------------------------------------------"<<endl;
	for (int j=0 ; j<3 ; j++){
			ale=0+rand()%(4+1-0);
		Humano ver(nombre[ale], edad);
	    ver.comer();
    }

	
	return 0;
	
}
