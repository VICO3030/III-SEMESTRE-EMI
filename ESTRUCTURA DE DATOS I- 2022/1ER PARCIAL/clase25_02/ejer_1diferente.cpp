//cremaos el objeto
#include <iostream>
using namespace std;

class Empleados
{  float m1,m2,m3,m4;
    public:
    	float monto(string msg);
  	    void datos();
  	    float promSu();
};
float Empleados::monto(string msg){
	int monto;
	do{
		cout<<msg;
		cin>>monto;
		if(monto<=0){
			cout<<"Monto es incorrecto, ingrese un numero positivo";
		}
	}while(monto<=0);
	return monto;
}

void Empleados::datos(){
	m1=monto("ingrese el monto de la 1ra semana = ");
	m2=monto("ingrese el monto de la 2da semana = ");
	m3=monto("ingrese el monto de la 3ra semana = " );
	m4=monto("ingrese el monto de la 4ta semana = ");			
}

float Empleados ::promSu(){
	return (m1+m2+m3+m4)/4;
	
}

int main(){
	Empleados employee;      //creacion el objeto
	for(int i=0;i<5;i++){
		cout<<"------------ empleado #"<<i+1<<"------------------"<<endl;
		employee.datos();
		cout<<"Su promedio del empleado #"<<i+1<<"Es de "<<employee.promSu()<<endl;
	}
	return 0;
	
}
