#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float x,y,total;
	cout<<"ingrese el valor de x : ";
	cin>>x;
	cout<<"ingrese el valor de  y : ";
	cin>>y;
	//calculamos la expresion 
	total=((sqrt(x))/pow(y,2)-1);
	cout<<"el resultado de la espresion es de  : "<<total;
	return 0;
}

