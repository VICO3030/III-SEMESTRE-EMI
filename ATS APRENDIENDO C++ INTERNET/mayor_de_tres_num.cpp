/*1.-Escriba un programa que lea tres numeros y deetermine cual de ellos es mayor*/
#include<iostream>
using namespace std;
int main(){
	int n2,n1,n3;
	cout<<"Digite dos numeros : "; 
	cin>>n1>>n2>>n3;
	if(n1>n2||n1>n3){
		cout<<"EL MAYOR ES : "<<n1;
	}
	if(n2>n1||n2>n3){
		cout<<"EL MAYOR ES : "<<n2;
	}
	else{
		cout<<"EL mayor es : "<<n3;
	}
	return 0;
}

