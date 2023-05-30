//realizado por leonardo eguino, grupo 8
#include<iostream>
using namespace std;
//menu
int menu(){
	int a;
	cout<<"**************************************"<<endl;
	cout<<"**************************************"<<endl;
	cout<<"*                MENU                *"<<endl;
	cout<<"**************************************"<<endl;
	cout<<"* TIPO ASISTENTE          COSTO TUTO *"<<endl;
	cout<<"**************************************"<<endl;
	cout<<"*1.-Estudiante EMI           69.6Bs. *"<<endl;
	cout<<"*2.-Estudiante Externo      104.4Bs. *"<<endl;
	cout<<"*3.-Profesional             139.2Bs. *"<<endl;
	cout<<"*4.-Salir                            *"<<endl;
	cout<<"**************************************"<<endl;
	cout<<"*Ingrese tipo de asistente (1,2 o 3): ";
	cin>>a;
	cout<<"**************************************"<<endl;
	return a;
}
//funcion para calcular costo por inscrito
float costo_unit(float p){
	int n;
	float res=1;
	cout<<"*Ingrese nro. de tutoriales a cursar (max 5): "<<endl;
	cout<<"*Nota: ingresar numeros mayores a 5 no le tomara en cuenta!!"<<endl;
	cin>>n;
	cout<<"**************************************"<<endl;
	if(n==5){
		res=n*p-n*p*0.1;
		return res;
	}else if(n<5){
		res=n*p;
		return res;
	}
	return 0;
}

int main(){
	//definimos variables
	int cant, op;
	float desc, cu, rec=0, num=0;//cu= costo unitario, rec= recaudacion
	do{
		system("cls");
		/*Inicio de la toma de datos*/
		op= menu();
		/*fin de la toma de datos*/	
		switch(op){
			case 1:{
				cu= costo_unit(69.6);
				cout<<"*El costo de incripcion es: "<<cu<<"Bs."<<endl;
				cout<<"**************************************"<<endl;
				rec+=cu;
				if(cu!=0){
					num++;
				}
				break;
			}
			case 2:{
				cu= costo_unit(104.4);
				cout<<"*El costo de incripcion es: "<<cu<<"Bs."<<endl;
				cout<<"**************************************"<<endl;
				rec+=cu;
				if(cu!=0){
					num++;
				}
				break;
			}
			case 3:{
				cu= costo_unit(139.2);
				cout<<"*El costo de incripcion es: "<<cu<<"Bs."<<endl;
				cout<<"**************************************"<<endl;
				rec+=cu;
				if(cu!=0){
					num++;
				}
				break;
			}
		}
		if(op!=4){
			system("pause");
		}
	}while(op!=4);
	cout<<"El total recaudado por "<<num<<" inscritos es: "<<rec<<endl;
	cout<<"**************************************"<<endl;
	cout<<"**************************************"<<endl;
	cout<<"Saliendo del programa...";
	return 0;
}
