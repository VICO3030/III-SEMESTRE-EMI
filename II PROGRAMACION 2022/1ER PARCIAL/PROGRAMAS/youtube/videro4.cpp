/*Escribe un programa que lea de la entrada estandar dos numeros y muestre en la salida estandar 
dos numeros y muestre en la salida estandar sus suma, resta, multiplicacion y division*/
#include<iostream>
using namespace std;
 
 int main(){
 	int n1,n2,suma = 0,resta=0,multiplicacion = 0,division = 0;
 	cout<<"Digite un numero";cin>>n1;
 	cout<<"Digite otro numero";cin>>n2;
 	
 	suma = n1+ n2;
 	resta = n1-n2;
 	multiplicacion =n1 *n2 ;
 	division=n1/n2 ;
 	
 	cout <<"\nla suma es de: "<<suma<<endl;
 	cout << "la resta es de :  "<<resta<<endl;
 	cout <<"la multiplicacion es de : "<<multiplicacion<<endl;
 	cout<<"la division es de : "<<division<<endl;
 
 return 0 ;
 	
 }
