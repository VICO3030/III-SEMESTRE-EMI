#include<stdlib.h>
#include<time.h>
#include<iostream>
using namespace std;

class Postulante
{    float correctas;
     float total;
     public:
     	Postulante(int t, int c);
     	float porciento();
     	string nivel();
};
int aleatorio(int linf,int lsup)
{
	return linf+rand()%(lsup+1-linf);
}

Postulante::Postulante(int t, int c)
{    
     correctas=c;
     total=t;
}
float Postulante::porciento()
{   float porcentaje;
    porcentaje= (correctas/ total)*100;
    return porcentaje;
}   

string Postulante::nivel() 
{   if(porciento()>=90){
	return "NIVEL MAXIMO";
    }
     if(porciento()>75||90<porciento()){
     	return "NIVEL MEDIO";
	 }
     
     if(porciento()>50||75<porciento()){
     	return "NIVEL REGULAR";
	 }
    if(porciento()<50){
    	 return "FUERA DE NIVEL";
	}
}

int main()
{   //preguntas del test
    int total,correctas;
    total=aleatorio(10,100);
    correctas=aleatorio(1,total);
    
    cout<<"Test para postulantes "<<endl;
    cout<<"El test tiene "<<total<<" preguntas"<<endl;
    cout<<"Ha respondido "<<correctas<<" preguntas correctamente"<<endl;
    Postulante postulant(total,correctas);
    cout<<"su porcentaje es : "<<postulant.porciento()<<" %"<<endl;
    cout<<"Su nivel de aceptacion es de = "<<postulant.nivel()<<endl;

}
