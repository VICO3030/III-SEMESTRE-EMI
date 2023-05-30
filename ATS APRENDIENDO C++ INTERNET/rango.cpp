/*7 Escriba un programa que solicite un a edad infique en la salida estandar si la edad esta en el rango[18-25]*/
#include<iostream>
using namespace std;
int main(){
	int edad;
	cout<<"Digite su edad : ";
	cin>>edad;
	if((edad>=18)&&(edad<=25)){
		cout<<"su edad esta en el rango de [18-25]";
	}
	else{
		cout<<"Su edad no esta en dicho rango";
	}
	return 0;
}
