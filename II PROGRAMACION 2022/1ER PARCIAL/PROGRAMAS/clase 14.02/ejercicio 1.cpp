//realizarun programa para calcular la hipotenusa de un triangulo
#include<iostream>
#include<math.h>
using namespace std;
//definir prototipo
//programa principal
float hipotenusa(float  ca,float co);
int main()
{ float ca1 , co2 ,resu;
	cout<<"-------HIPOTENUSA DEL TRIANGTULO------"<<endl;
	cout<<"ingrese el cateto adyacente "<<endl;
	cin>>ca1;
	cout<<"ingrese el cateto opuesto"<<endl;
    cin>>co2;
    resu=hipotenusa(ca1,co2);
    cout<<"el valor de la hipotenusa = "<<resu;
    //lamado a la funcion hipotenusa
    return 0 ;
}
//implementacion o definicion de la hipotenusa
float hipotenusa(float  ca,float co){
float h,c;
c=pow(ca,2)+pow(co,2);
h=sqrt(c);
return h ;
}


