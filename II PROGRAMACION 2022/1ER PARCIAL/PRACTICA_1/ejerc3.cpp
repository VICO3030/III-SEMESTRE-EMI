#include <iostream>
using namespace std;
void Area(float & A,float & B, float & C,float&AR);

int main(){
	float a=0,b=0,c=0,ar=0;
	Area(a,b,c,ar);
	cout<<"EL AREA TOTAL DE LA FIGURA ES DE :"<<ar;
	return 0;
}

void Area(float & A,float & B, float & C,float &AR){
	float AT;
	cout<<"ingrese la longitud de A"<<endl;
	cin>>A;
	cout<<"ingrese la longitud de B"<<endl;
	cin>>B;
	cout<<"ingrese la longitud de C"<<endl;
	cin>>C;
	AT=((A-C)*B)/2;
	AR=AT+(B*C);
	
}
