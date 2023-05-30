//cremaos el objeto
#include <iostream>
using namespace std;

class Empleados
{  float m1,m2,m3,m4;
    public:
  	    void datos();
  	    float promSu();
};
void Empleados::datos(){
	do{
		cout<<"ingrese monto de la 1ra semana :";
	    cin>>m1;
	    if(m1<=0){
	    	cout<<"Monto es incorrecto ,debe ser positivo"<<endl;
		}
		
	}while(m1<=0);
	do{
		cout<<"ingrese monto de la 2da semana :";
	    cin>>m2;
	    if(m2<=0){
	    	cout<<"Monto es incorrecto ,debe ser positivo"<<endl;
		}
		
	}while(m2<=0);
	do{
		cout<<"ingrese monto de la 3ra semana :";
	    cin>>m3;
	    if(m3<=0){
	    	cout<<"Monto es incorrecto ,debe ser positivo"<<endl;
		}
		
	}while(m3<=0);
	do{
		cout<<"ingrese monto de la 4ta semana :";
	    cin>>m4;
	    if(m4<=0){
	    	cout<<"Monto es incorrecto ,debe ser positivo";
		}
		
	}while(m4<=0);
}
 
float Empleados ::promSu()
{   return (m1+m2+m3+m4)/4;
}
int main(){
	Empleados employee;      //creacion el objeto
	employee.datos();
	cout<<"Su promedio es ="<<employee.promSu()<<endl;
	return 0;	
}
