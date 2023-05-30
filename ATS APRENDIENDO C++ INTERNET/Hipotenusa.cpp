//calculamos la hipotenusa de un triangulo rectangulo
#include<iostream>
#include<math.h>
using namespace std;
float hipotenusa(float ca,float co);
//funcion para calcular la hipotenusa
int main(){
	float CA,CO;
	cout<<"Ingrese el cateto adiacente : " ;
	cin>>CA;
	cout<<"Ingrese el cateto opuesto  : " ;
	cin>>CO;
	cout<<"LA HIPOTENUSA DEL TRIANGULO ES  : "<<hipotenusa(CA,CO);
	return 0;
}

float hipotenusa(float ca,float co){
	float r;
	r=(sqrt(pow(ca,2)+pow(co,2)));
	return r;
}


