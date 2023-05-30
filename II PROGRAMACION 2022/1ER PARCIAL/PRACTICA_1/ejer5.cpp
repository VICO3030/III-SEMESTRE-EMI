//ejercicio4 
#include <iostream>
using namespace std;
void numeros(float &a,float &b,float& c,float &d,float &mayor);
int main(){
	float a=0,b=0,c=0,d=0,Mayor=0;
	cout<<"ingrese el primer numero "<<endl;
	cin>>a;
	cout<<"ingrese el primer numero "<<endl;
	cin>>b;
	cout<<"ingrese el primer numero "<<endl;
	cin>>c;
	cout<<"ingrese el primer numero "<<endl;
	cin>>d;
	numeros(a,b,c,d,Mayor);
	cout<<"EL NUMERO MAYOR DE LOS 4 NUMEROS ES ="<<Mayor<<endl;

	return 0;
	
	}
void numeros(float &a,float &b,float &c,float& d,float& mayor ){
	if (a>b,c,d){
		mayor=a;
	}
	if (b>a,c,d){
		mayor =b;
	}
	if(c>a,b,d){
		mayor=c;
    }
	if (d>a,b,c){
		mayor=d;
	}
}
