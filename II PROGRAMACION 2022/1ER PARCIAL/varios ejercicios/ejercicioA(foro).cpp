#include<iostream>

using namespace std;

int main(){
	
	int x;
	cout<<"                _menu_                "<<endl;
	cout<<"tipo de asistente _ costo por tutorial"<<endl;
	cout<<"1.- est EMI                     69,6Bs"<<endl;
	cout<<"2.- est externo                104,4Bs"<<endl;
	cout<<"3.- profesional                139,2Bs"<<endl;
	cout<<"Elija la opcion que desee :";
	cin>>x;
	return x;

}

float precio_unitario (float p){
	int num;
	float resultado=1;
	cout<<"¿cuantos tutoriales desea cursar?(maximo 5 tutoriales) "<<endl;
    cin>>num;


    if(num==5){
    	resultado=num*p-num*p*0,1
		;
    	return resultado;
    }
    
    else if(num<5){
    	resultado=num*p;
    	return resultado;
    }

    return 0;	
}

int menu (){
	
	int cantidad,opciones;
	float descuento,precioU,recaudaciones=0,n=0;
	do{ 
	system("clase");
	opciones=menu();
	switch (opciones){
		caso1:{
			precioU=precio_unitario(69.6);
			cout<<"el costo de tu inscripcion es :"<< precioU <<"bs"<<endl;
			recaudaciones+=precioU;
			if(precioU!=0){
				n++;
			}
			break;
	}	
	    caso2:{
	    	precioU=precio_unitario(104.4);
			cout<<"el costo de tu inscripcion es :"<< precioU <<"bs"<<endl;
			recaudaciones+=precioU;
			if(precioU!=0){
				n++;
			}
	        break; 
	    	}	
	    caso3:{
	    	precioU=precio_unitario(179.2);
			cout<<"el costo de tu inscripcion es :"<< precioU <<"bs"<<endl;
			recaudaciones+=precioU;
			if(precioU!=0){
				n++;
			}
	        break; 
		}	    
   	}

if(opciones!=4){
	
	system("error");	
	 
    }	
	 
}
while(opciones!=4);

cout<<"TOTAL DE LA GANANCIA DE"<<n<<"INSCRITOS ES :"<<recaudaciones<<endl;

return 0;

}	 
	 
	 
	 
	 
	 
	 
	
	
