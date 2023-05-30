#include<iostream>
#include<math.h>
using namespace std;
//procedimiento de mi ecuacion
float ecuacion(float A,float B,float C);
//menu principal
int main(){
	float a,b,c;
	cout<<"----HALLAR LAS RAICES PARA ECUACION DE SEGUN GRADO----"<<endl;
	cout<<"        ax^2 + bx + c = 0 "<<endl;
	cout<<"Ingrese su valor numerica de a  : ";
	cin>>a;
	cout<<"Ingrese valor numerica de b :  ";
	cin>>b;
	cout<<"Ingrese valor numerica de c :  ";
	cin>>c;
	cout<<"las raices de las escuaciones son : "<<ecuacion(a,b,c);
	return 0;
	
}
float ecuacion(float A,float B,float C ){
	float x1=0,x2=0;
	x1=((-B+sqrt(pow(B,2)-4*A*C))/2*A);
	x2=((-B-sqrt(pow(B,2)-4*A*C))/2*A);
	return x1,x2;
}
