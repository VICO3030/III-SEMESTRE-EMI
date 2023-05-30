//ejercicio4
#include<iostream>
using namespace std;//entradas ingreso de horas que trabajara
void sueldo(float& total,float &  resu);
int main(){
	float tot=0,res=0;
	sueldo(tot,res);
	cout<<"el total sueldo de es de de la semna es de ="<<tot<<endl;
	cout<<"el total del sueldo + horas extra es de ="<<res<<endl;
	return 0;
}
void sueldo(float& total,float  &  resu){
	int horas,totalex,extra;
	cout<<"----------------SI TRABAJA MAS DE 40 , EL PAGO POR HORA EXTRA ES DE 25 BS-------------"<<endl;
	cout<<"ingrese el total de horas que desea trabajar durante la semana"<<endl;
	cin>>horas;
	
	if(horas<40){
		total=horas*20;
	}
	if (horas>=40){
		total=horas*20;
		cout<<"ingrese el las horas extras"<<endl;
		cin>>extra;
		totalex=extra*25;
		cout<<"el total de las horas extras es de "<<totalex<<endl;
		resu=totalex+total;
	}
}
