/*1.-Escriba un programa que lea tres numeros y deetermine cual de ellos es mayor*/
#include<iostream>
using namespace std;
int main(){
	int n2,n1,n3,mayor=0;
	cout<<"Digite dos numeros : "; 
	cin>>n1>>n2>>n3;
	if(n1>n2,n3){
		mayor=n1;
	}
	if(n2>n1,n3){
		mayor=n2;
		
	}
	if(n3>n2,n1){
		mayor=n3;
		
	}
	cout<<"El numero mayor de los tres numeros es : "<<mayor;
	return 0 ;
}
