#include<iostream>
using namespace std;

class Tiempo{
	private:
		int horas,minutos,segundos;
	public: 
	    Tiempo(int, int ,int);//constructor 1
	    void mostrarHora();
	    Tiempo(long);
};
//constructor 1
Tiempo::Tiempo(int h,int m,int s){
	horas=h;
	minutos=m;
	segundos=s;
}
//constructor 2
Tiempo::Tiempo(long segun){//255
	horas=(segun/3600);
	minutos=((segun-horas*3600)/60);
	segundos=((segun-horas*3600-minutos*60));
}
void Tiempo::mostrarHora(){
	cout<<"LA HORA ES: "<<horas<<" con minutos :"<<minutos<<" Con segundos :"<<segundos<<endl;
}
int main(){
	Tiempo ahora(9,12,15);
	Tiempo segundo(33135);
	ahora.mostrarHora();
	segundo.mostrarHora();
	
	return 0;
}
