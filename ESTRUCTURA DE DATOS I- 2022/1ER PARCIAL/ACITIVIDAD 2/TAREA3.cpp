#include<iostream>
using namespace std;
//procedimientos
void notas_llenado(float arr[],int nota);
void imprimir_notas(float arr[],int nota);
void notas_altas(float arr[]);
void notas_bajas(float arr[],int nota);
//ingresp notas finales
void notas_llenado(float arr[],int nota){
	int i;
	do{
	    for (i=0;i<nota;i++){
		cout<<" Nota final rango[0-10] del estudiante # "<<(i+1)<<"  : ";
		cin>>arr[i];
		if(arr[i]>10 || arr[i]<0)
		{
		cout<<"numero erroneo, ingrese en el rango correspondido[0-10]"<<endl;
		}
		}
	}while(arr[i]>10 || arr[i]<0);
}
void imprimir_notas(float arr[],int nota){
	int i;
	for(i=0;i<nota;i++){
		cout<<arr[i]<<"|";
	}
	cout<<endl;
}
void notas_altas(float arr[]){
	int i,mayor=0;
	for(i=0;i<4;i){
		if(arr[i]>mayor){
		mayor=arr[i];
		cout<<"el mayor elemento es de "<<mayor<<endl;
	    } 
	}
}
void notas_bajas(float arr[],int nota){
	int i ,menor=100;
	if(arr[i]<menor){
		menor=arr[i];
		cout<<"el menor elemento es de "<<menor<<endl;
	}
}
//menu principal
int main(){
	float est[30];
	int cant;
	//llenar las notas
	cout<<"ingrese la cantidad de n estudiantes"<<endl;
	cin>>cant;      
	notas_llenado(est,cant);
	imprimir_notas(est,cant); //imprimido de notas
	
////	4 notas mas altas
//	cout<<"------Las cuatro notas mas altas son --------";
//	cout<<"primera nota Alta"<<notas_altas(est);
//	cout<<"segunda nota Alta"<<notas_altas(est);
//	cout<<"tercera nota Alta"<<notas_altas(est);
//	
////	4  notas mas bajas 
//	cout<<"--------Las tres notas mas bajas son------- ";
//	cout<<"primera nota mas baja"<<notas_bajas(est)
//	cout<<"Segunda nota mas baja"<<notas_bajas(est);
//	cout<<"tercera nota mas baja"<<notas_bajas(est);
//	
    return 0;
}


