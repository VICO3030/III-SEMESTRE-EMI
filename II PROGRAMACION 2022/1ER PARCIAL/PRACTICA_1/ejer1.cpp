#include <iostream>
using namespace std;
int promocion(float  d,int  n);
//programa principal
int main(){
	int x;
	float dinero;
	cout<<"ingrese el monto de la compra : ";
	cin>>dinero;
	cout<<"ingrese un numero ";
	cin>>x;
	cout<<"El total del pago es de ;"<<promocion(dinero,x);
	return 0;		
}

int promocion(float  d,int n){
	float descuento,total;
	if(n<74){
		descuento=d*0.15;
		total=d-descuento;
	}
	if(n>=74){
		descuento=d*0.20;
		total=d-descuento;	
	}
	return total;
}
