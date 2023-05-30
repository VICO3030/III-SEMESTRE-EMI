/*11.- Hacer un prgrama que simule un cajero automatico con un saldo incial d
de 1000dolares */
#include<iostream>
using namespace std;
int main(){

	int sald_ini=1000,op;
	float extra,saldo,retiro;
	cout<<"\tBienvenido a su cajero virtual"<<endl;
	cout<<"1.-Ingresar dinero a tu cuenta"<<endl;
	cout<<"2.-Retirar dinero de la cuenta"<<endl;
	cout<<"3.-salir"<<endl;
	cout<<"opcion : ";
	cin>>op;
	
		switch(op){
		case 1:
			cout<<"Digite la cantidad de dinero que desea  ingresar  ";
			cin>>extra;
			saldo=sald_ini+extra;
			cout<<"Dinero en cuenta : "<<saldo;break;
		case 2:
			cout<<"Digite la cantidad de dinero que bva retirar :";
			cin>>retiro;
			if(retiro>sald_ini){
				cout<<"NO TIENE ESA CANTIDAD DE DINERO";
			}
			else{
				saldo=sald_ini-retiro;
				cout<<"Dinero en cuenta : "<<saldo;
			}
		case 3 :break;   
	    }
	    return  0;
	}
	

