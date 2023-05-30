//.Repaso calcular el factorial de un numero
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int factorial(int n){
	int i ,f=1;
	for(i=n;i>=1;i--){
		f=f*i;
	}
	return f;
}

//menu principal
 
int main(){
	int fac,num;
	cout<<"Ingrese un numero entero : ";
	cin>>num;
	fac=factorial(num);
	cout<<"El factorial del numero es de : "<<fac;
	
}
