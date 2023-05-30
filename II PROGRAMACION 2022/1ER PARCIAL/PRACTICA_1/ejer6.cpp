//ejercicio6
#include<iostream>
#include<math.h>
using namespace std;
void calculos (float & A,float & B,float & C, float & perimetro ,float & area);
//menu 
int main(){
	float A=0,B=0,C=0,D=0,p=0,a=0;
	cout<<"---------CALCULO DEL AREA Y PERIMETRO DEL TRIANGULO ---------"<<endl;
	cout<<"ingrese el lado A :"<<endl;
	cin>>A;
	cout<<"ingrese el lado B :"<<endl;
	cin>>B;
	cout<<"ingrese el lado B :"<<endl;
	cin>>C;
	calculos(A,B,C,p,a);
	cout<<"El perimetro del triangulo es de ="<<p<<endl;
	cout<<"El AREA del triangulo es de ="<<a<<endl;
	return 0;	
}

void calculos (float & A,float & B,float & C, float & perimetro ,float & area){
	perimetro=((A+B+C)/2);
	area=(sqrt(perimetro*(perimetro-A)*(perimetro-B)*(perimetro-C)));
}
