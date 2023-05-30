#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<time.h>
using namespace std;

class Mascota{
	string nom;
	int edad ; //semanas
	protected:
		Mascota(string na , int ed){
			nom=na;
			edad=ed;
		}
		string getNombre(){
			return nom;

		}
		int getEdad(){
			return edad;
		}
};

class Tarjeta{  // perro y gato 
	int tipoMas;
	protected:
		Tarjeta(int ti){
			tipoMas = ti;
		}
		int  getTipo(){
			return tipoMas;
		}
};


class Vacuna:Mascota, Tarjeta {
	public:
		Vacuna(string n ,  int e , int t):Mascota(n,e),Tarjeta(t){
		}
		
	string vacunaPerro()
    {
	if(getEdad()>=6 && getEdad()<=8)
	{return "PARVOVIRUS O MOQUILLO ";
	} 
	else if((getEdad ()>8 && getEdad ()<=10) || (getEdad()>=12 && getEdad()<=14)){
		return "POLIVALENTE CANINA ";
	}
	   else
	   	if(getEdad()>=16 && getEdad()<=18){
	   		return "TRANQUEO BRONQUITIS ";
		   }
	   
	   else  if(getEdad()>=20 && getEdad()<=24){
	     	return "ANTIRRABICA ";}
		
	     	
	   else  if(getEdad ()>=48){
	     	return "SE VACUNA ANUAL";
		 }
	    else{
	    	return "NO TIENE VACUNACION PENDIENTE ";
		}
    }    
    string vacunaGato(){
    	
    	if(getEdad()>8){
    		return "LEUCEMIA";
		}
		if(getEdad()>=12 && 14<=getEdad()){
			return "TRIPLE";
			
		}
		if(getEdad()>=16 && 18<=getEdad()){
			return " LEUCEMIA";
		}
		if(getEdad()>=18 && 20<=getEdad()){
			return "PIF";
		}
		if(getEdad()>20 && 22<getEdad()){
			return "RABIA";
		}
		if(getEdad()>22){
			return "PIF";
		}
	}
		 

		string tipoVacuna(){
			if(getTipo()==1){
					return vacunaPerro();
				}
			else{
				return vacunaGato();
		    	}
		    }
		void reporte (){
			if(getTipo()==1){
				cout<<"MASCOTA PERRO "<<endl;
				
			}
			else{
				cout<<"MASCOTA GATO "<<endl;
			}
			cout<<" NOMBRE : "<<getNombre()<<endl;
			cout<<"\nEdad : "<<getEdad()<<" [semanas ]"<<endl;
			cout<<"\nRecibe  : "<<tipoVacuna()<<endl;
		}
};



int main(){
	srand(time(NULL));
	string name;
	int edad,tipo, pos;
	string nombres[7]={ "pelusa ","Tigre","lluvia","jhazmin","eduardo","sergio", "Monica"};
	pos =rand()%(7-1);
	name= nombres[pos];
	edad= +rand()%(20+1-1);
	tipo =1+rand()%(2+1-1);
	Vacuna vacunar(name,edad,tipo );
	vacunar.reporte();
	return 0;
}

