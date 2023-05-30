//actividad 2 calcular un numero elevado a la potencia
#include <iostream>
using namespace std;
//declaracion de mi funcion
float calcular_potencia(int base,int expo);

int main(){
	int b,exp;
	float resu;
	cout<<"ingrese la base para elevar al exponente =";
	cin>>b;
	cout<<"ingrese el exponente para elevar a la base =";
	cin>>exp;
	//funcion
	resu=calcular_potencia(b,exp);
	cout<<"el resultado de la base "<<b<<"  elevado a la "<<exp<<"  es de ="<<resu;
	return 0;
}

float calcular_potencia(int base,int expo){
	float resu;
	if(expo==0)
		resu=1.0;
	else if (expo==0 && base==0){
		cout<<"El resulstado es indeterminado o infinito"<<endl;
	}
	else if(expo>0){
		resu= base*calcular_potencia(base,expo-1);
	}
	else if(expo<0){
		resu=1.0/(base *calcular_potencia(base,expo+1));
	}
	return resu;
}
