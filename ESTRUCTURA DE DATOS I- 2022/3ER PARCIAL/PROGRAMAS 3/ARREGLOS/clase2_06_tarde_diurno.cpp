#include<iostream>
#include<string.h>
using namespace std;
class Trabajadores
{
	private:
    	string nombre;
	    float sueldo;
	protected :
		Trabajadores(string _nombre , float _sueldo){
			nombre=_nombre;
			sueldo=_sueldo;
		}
		string getNom(){
			return nombre;
		}
		float getSueldo()
		{
			return sueldo;
		}
		virtual void  mostrarDatos()
		{
		cout<<"NOMBRES ES  : "<<nombre<<endl;
		cout<<"SU SUELDO ES : "<<sueldo<<endl;
		}
};

class Diurno:Trabajadores{
	public:
		Diurno(string nom, float sue  ):Trabajadores(nom,sue){}
		float bono(){
			float  porc;
			if(getSueldo()>2000){
				porc=0.12;
			}
			else{
				porc=0.05;
			}
			return getSueldo()*porc;
		}
		float total(){
			return getSueldo()+bono();
		}
		int verifMay3500(){
			if(getSueldo()>=3500){
				return 1;
			}
			else{
			}
			return 0;

		} 
		void mostrarDatos()
		{
			Trabajadores::mostrarDatos();
			cout<<"SU BONO ES DE : "<<bono()<<endl;
			cout<<"EL TOTAL ES DE : "<<total()<<endl;
		}
};

class Tarde:Trabajadores
{
	int anti;
	public:
		Tarde(int _anti, string nom ,float suel ):Trabajadores(nom,suel){
			anti=_anti;
		}
		int getAnti(){
			return anti;
		}
		char Categoria(){
			if(anti>20){
				cout<<"ES CATEGORIA A "<<endl;
			}
			if(anti>=10 && anti<20){
				cout<<"ES CATEGORIA B "<<endl;
			}
			if(anti<10){
				cout<<"ES CATEGORIA C "<<endl;
			}
		}
		void mostrarDatos(){
			Trabajadores::mostrarDatos();
			cout<<"SU ANTIGUEDAD ES  : "<<getAnti()<<endl;
			Categoria();
		}
		int cateA(){
			int cont=0;
			if(getAnti()>20){
				return 1;
			}
			else{
				return 0;
			}
		}
};


void menu()
{	int opcion,nu,anti;
    string nombre;
    float sueldo;
	cout<<"SELECCIONAR SU TURNO "<<endl<<"----------------------------"<<endl;
	cout<<"-----------------1.DIURNO -----------------------  "<<endl;  
	cout<<"-----------------2.TARDE ------------------------ "<<endl;  
	cout<< "Opcion =  "; cin>>opcion;
	int c=0;
	switch (opcion)
	{ 
		case 1 :{
				    cout<<"ingrese la cantidad de trabajadores : ";cin>>nu;
					Diurno * pers[nu];
					cout<<"==============================================="<<endl;
                     for(int i=0 ; i<nu ; i++)
                     {
                     	cout<<"Ingrese su nombre : ";cin>>nombre;
                     	cout<<"Ingrese su sueldo ";cin>>sueldo;
                     	
                     	cout<<"--------------------------------------------"<<endl;
					 	cout<<"   TRABAJADOR  "<<(i+1)<<endl;
					 	pers[i]=new Diurno(nombre,sueldo);
                     	pers[i]->mostrarDatos();
                     	cout<<"--------------------------------------------"<<endl;
                     	c=c+pers[i]->verifMay3500();
                     	
                     }
					 cout<<"La cantidad de trabajadores que ganas arriba de 3500 son : "<<c<<endl;
		    	    break;
	        	}           

		case 2: {	
                    cout<<"ingrese la cantidad de trabajadores : ";cin>>nu;
					Tarde *pers[nu];
				    int 	cont=0;
					for(int i=0 ; i<nu ; i++)
                    {
                    	cout<<"Ingrese su nombre : ";cin>>nombre;
                     	cout<<"Ingrese su sueldo ";cin>>sueldo;
                     	do{	cout<<" ANTIGUEDAD = ";  cin>>anti;
					    } while (anti<=0);
                     	
                     	cout<<"--------------------------------------------"<<endl;
					 	cout<<"   TRABAJADOR  "<<(i+1)<<endl;
                        pers[i]=new Tarde(anti,nombre,sueldo);
                     	pers[i]->mostrarDatos();
                     	cont=cont+pers[i]->cateA();
                     	cout<<"--------------------------------------------"<<endl;
					}
					cout<<"LA CANTIDAD DE PERSONAS DE CATEGORIAS [A]  SON : "<<cont;
		    	break;
	        	}           
			
	}
}

int main()
{	int seguir;
	do
	{	menu();
		cout<<endl;
		cout<<"Desea continuar..[0]= terminar y otro valor para seguir"; cin>>seguir;
	}while(seguir!=0);
	return 0;
}



