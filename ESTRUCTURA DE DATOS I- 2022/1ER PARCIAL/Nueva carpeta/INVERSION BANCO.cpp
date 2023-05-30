// calcular el nuevo monto de dinero de una persona sabiendo que
// se halla en base al 15% sobre el mismo monto y este recibe el interes si el
// resultado del mismo es mayor a 100 Bs.

#include <iostream>
using namespace std;

class Persona
{
	float monto;
	public:
		void pedirDatos(float m);
		float interes();
		int averiguar();
		float nuevoMonto();
};

void Persona::pedirDatos(float m){
	monto=m;  //inicializar el atributo
}
float Persona::interes(){
	return  (monto*0.15);
}
int Persona::averiguar(){
    if(interes()>100)
       return 1;  // si el interes es mas de 100 recibe interes
    else return 0; // no recibe interes
}
float Persona::nuevoMonto(){
	if(averiguar()==1)  
		monto=monto+interes();  // se suma al monto el interes
	return monto;
}
	
int main()
{
	float monto;
	int res;
	Persona invertir;  // creacion del objeto
	cout<<"Ingrese monto \n";
	cin>>monto;
	invertir.pedirDatos(monto);  // lamada para enviar el monto leido usando el objeto
	do{
		cout<<"El interes es: "<<invertir.interes()<<endl; // llamada a interes usando el objeto
		cout<<"El nuevo monto es: "<<invertir.nuevoMonto()<<endl; // llamada a nuevo monto usando el objeto
		cout<<"Desea continuar\n";  
		cout<<"si=0      no=1 \n";
		cin>>res;
	}while(res!=1);	
	return 0;
}		   
