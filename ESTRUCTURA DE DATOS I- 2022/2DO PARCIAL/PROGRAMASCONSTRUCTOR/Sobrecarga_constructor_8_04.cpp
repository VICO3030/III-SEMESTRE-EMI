/*SOBRE CARGADE CONSTRUCTORES
 fecha(long) 
 fecha(long ,int )
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

class Fecha{
	private:
		int dia,mes,anio;//atributos
	public:
		Fecha(int,int,int);//constructor 1
		Fecha(long);//entero largo long
		Fecha(long,int );//
		void mostrarFecha();

	    
};
//constructor 1
Fecha::Fecha(int _dia,int _mes,int _anio){
	anio=_anio;
	mes=_mes;
	dia=_dia;
}
//cnstructor 2
Fecha::Fecha(long fecha){   //20220408
	anio = int(fecha/10000);
	mes=int((fecha-anio*10000)/100);
	dia = int(fecha-anio*10000-mes*100);
	
}

//constructor 3 _02042022
Fecha::Fecha(long fecha1,int a){
	dia=int (fecha1/1000000);
	mes=int ((fecha1-dia*1000000)/10000);//18042022
	anio=int (fecha1-dia*1000000-mes*10000);
}

void Fecha::mostrarFecha(){
	cout<<" La fecha es : "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}
int main(){
	Fecha hoy(8,4,2022);
	Fecha ayer(20220408);
	Fecha manana(18042022, 2);
	hoy.mostrarFecha();
	ayer.mostrarFecha();
	manana.mostrarFecha();
	system("pause");
	return 0;
}
