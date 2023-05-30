#include<iostream>
using namespace std;
//prototipo de funciones 
void leer_datos(float & nota,float &notadea);    //definiendo con void
int main()
{ float nc=0 ,na=0;
     leer_datos(nc,na);
	cout<<"Tu nota de calculo es ="<<nc<<endl;
	cout<<"Tu nota de Algebra es ="<<na<<endl;
	return 0;
	
}

//void 
void leer_datos(float & notacl,float & notadea){
	cout<<"ingresa tu nota de calculo";
	cin>>notacl;
	cout<<"ingresa tu nota de algebra";
	cin>>notadea;
	
}
