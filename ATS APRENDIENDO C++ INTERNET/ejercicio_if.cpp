/*1.-Escriba un programa que lea dos numeros y deetermine cual de ellos es mayor*/
#include<iostream>
using namespace std;
int main(){
	int n2,n1;
	cout<<"Digite dos numeros : "; 
	cin>>n1>>n2;
	if(n1==n2){
		cout<<"AMBOS NUMEROS SON IGUALES";
	}
	else if(n1>n2){
		cout<<"El mayor es  :"<<n1;
	}
	else{
		cout<<"El mayor es : "<<n2;
	}
	return 0;
}

