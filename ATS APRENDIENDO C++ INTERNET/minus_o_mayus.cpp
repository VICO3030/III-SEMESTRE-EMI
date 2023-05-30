/*6 Escribir un prograama que lea la entrada estandar un caracter e indique en la salida estandar si el caracter es una vocal minuscula o no */

#include<iostream>
using namespace std;
int main(){
	char letra;
	cout<<"Digite un caracter  : ";
	cin>>letra;
	if(letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u'){
	 	cout<<"Es una vocal minuscula ";
	 }
	if(letra=='A'||letra=='E'||letra=='I'||letra=='O'||letra=='U'){
		cout<<"es un vocal MAYUSCULA ";
	}
	
	 return 0;
}
