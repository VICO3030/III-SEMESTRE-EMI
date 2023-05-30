#include <iostream>
using namespace  std;

void menu(){
	cout<<"  "<<endl;
	cout<<"------PRECIOS DEL EVENTO---------"<<endl;
	cout<<"--Tipo de asistente -----------costo tutorial"<<endl;
	cout<<"1.-Estudiante de la Emi________10$us"<<endl;//consideraremos el dolar 6.99
	cout<<"2.-Estudiante externo__________15$us"<<endl;
	cout<<"3.-Profesional_________________20$us"<<endl;
	cout<<" "<<endl;
}
int main(){
	int opcion,cant,acu=0,cont=0;
	float total,p;
	menu();
	cout<<"--INGRESE EL TIPO DE ASISTENTE QUE ES---: "<<opcion<<endl;
	cout<<"ingrese la cantidad de tutoriales : "<<cant<<endl;
	    switch(opcion){
		    case 1:
			    if(cant>=5){
				   p=cant*69.6*0.10;
				   total=(cant*69.6)-p;
				   acu++;
			    else{
				   total=cant*69.6;
				   cout<<total;
				   }
				   cont=cont+total;
				cout<<"la cantidad de pago "<<cant<<"tutoriales es ="<<total<<endl;
			    }	
		    case 2:
		        if(cant>=5){
				   p=cant*104.4*0.10;
				   total=(cant*104.4)-p;
				   acu++;
		        else{
					total=cant*104.4;
				    }
				    cont=cont+total;
				cout<<"la cantidad de pago "<<cant<<"tutoriales es ="<<total<<endl;
			    }
		    case 3:
			    if(cant>=5){
			 	   p=cant*139.2*0.10;
				   total=(cant*139.2)-p;
				   acu++;
		        else{
					total=cant*139.2;
				    }
				    cont=cont+total;
				cout<<"la cantidad de pago "<<cant<<"tutoriales es ="<<total<<endl;
				}				
	    }
	}
	cout<<"la cantidad de personas es de "<<acu<<"el total monto"<<cont<<endl;
	return 0;	 	
}

		 	

