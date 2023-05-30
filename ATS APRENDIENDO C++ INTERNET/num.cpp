/*7 Escriba un programa que solicite tres numeros identifi un numero si esta entre los 3*/
#include<iostream>
using namespace std;
int main(){
	int n1,n2,n3,dato;
	cout<<"Digite tres numeros  : ";
	cin>>n1>>n2>>n3;
	cout<<"Digite un numero de busqueda : ";
	cin>>dato;
	if((n1==dato)||(n2==dato)||(n3==dato)){
		cout<<"SU numeros si se encuentra entre los numeros que digito";
	}
	else{
		cout<<"\nSu NUMERO no esta en entre los 3 numeros";
	}
	return 0;
}
