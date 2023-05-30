//realizar un programa para realizar la suma de los digitos de un numero
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
//funcion sumar mis digitos
int suma_digitos(int num){
	int r,sd=0;
	while(num>0){
		r=num%10;
		sd=sd+r;
		num=num/10;
	}
	return sd;
}
//programa principal
int main(){
	int n,res=0;
	cout<<"INGRESE UN NUMERO MAS DE DOS DIGITOS : "<<endl;
	cin>>n;
	cout<<"La suma de los digitos es de : "<<suma_digitos(n);
	return 0;
}
