#include <iostream>
using namespace std;	

int main()
{
	float AT,AR,A,B,C;
	cout<<"ingrese la longitud de A"<<endl;
	cin>>A;
	cout<<"ingrese la longitud de B"<<endl;
	cin>>B;
	cout<<"ingrese la longitud de C"<<endl;
	cin>>C;
	AT=((A-C)*B)/2;
	AR=AT+(B*C);
	cout<<"EL AREA TOTAL DE LA FIGURA ES DE :"<<AR<<endl;
	return 0;
}



