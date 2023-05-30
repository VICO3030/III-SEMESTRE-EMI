#include <iostream>
using namespace std;
class Trabajador
{ public: 
      static int horasExtras(int hrs);
      static float pagoExtra(float pago);
      static float pagoNormal(int hrs, float pago);
      static float total(int hrs,float pago);
};
static int horasExtras(int hrs)
{ return hrs-40;
}
static float pagoExtra(float pago)
{ return pago +0.3*pago;
}
static float pagoNormal(int hrs, float pago){
	if(hrs<=40)  return pago*hrs;
	else return pago*40;
}
static float total(int hrs,float pago)
{
	if(hrs<=40)   return pagoNormal(hrs,pago);
	else return pagoNormal(hrs,pago)+horasExtras(hrs)*pagoExtra(pago);
}


int main()
{ 
	int horas;
	float pago;
	do
	{   cout<<"Ingrese la cantidad de hrs trajadas :";cin>>horas;
	}while(horas<=0);
	do{
		cout<<"Ingrese el pago por hora : "; cin >>pago;
	}while(pago<=0);
	cout<<"***********Boleta de pago ********\n";
	cout<<"pago por hora : "<<pago<<endl;
	cout<<"Horas trabajadas "<<horas<<endl;
	if(horas>40)
	{
		cout<<"Horas extras : "<<horasExtras(horas)<<endl;
		cout<<"Pago extra :  "<<pagoExtra(pago)<<endl;
		cout<<"Subtotal del extra : "<<pagoExtra(pago)*horasExtras(horas)<<endl;
	}
	else{
		cout<<"Horas extras = NO TIENE "<<endl;
		cout<<"Pago extra ; NO TIENE "<<endl;
	}
	cout<<"Pago de hrs normales ; "<<pagoNormal(horas, pago)<<endl;
	cout<<"SALARIO TOTAL : "<<total(horas,pago)<<endl;
}
