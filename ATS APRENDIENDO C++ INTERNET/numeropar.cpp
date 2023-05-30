#include<iostream>
using namespace std;
int main(){
	int numero;
	cout<<"Digite un numero : ";
	cin>>numero;
	if(numero==0){
		cout<<"EL numero es 0 ";
	}
	else if(numero%2==0){
		cout<<"EL NUMERO ES PAR";
	}
	else{
		cout<<"EL numero es impar";
		
	}
	return 0;
}
