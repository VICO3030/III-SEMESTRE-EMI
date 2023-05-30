#include<iostream>
using namespace std;
float notafinal(float prac,float teo,float part);
int main(){
	float practica,teoria,participacion;
	cout<<"Ingrese la nota de su practica : ";
	cin>>practica;
	cout<<"ingrese la nota de su participacion : ";
	cin>>participacion;
	cout<<"ingrese la nota de teoria : ";
	cin>>teoria;
	cout<<"SU promedio final es de : "<<notafinal(practica,participacion,teoria);
	return 0;
}
float notafinal(float prac,float teo,float part){
	float promedio =0;
	promedio=prac*0.30+teo*0.60+part*0.10;
	return promedio;
}
