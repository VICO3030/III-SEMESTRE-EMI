#include<iostream>
using namespace std;


void datos (int v[], int tam)//llenado CICLO DE VUELTA 
{	if(tam>=0)
	{	datos(v,tam-1);
		cout<<"ingrese elemento de la posicion ["<<tam<<"] : ";
		cin>>v[tam];
	}
//	else{	si tam>0 
//		cout<<"Ingrese elemento de la posicion ["<<tam<<"] :";
//		cin>>v[tam];
//	}	
} 

//LLENADO CON CICLO DE IDA 
 void llenado(int v[], int tam, int i ){
 	if(i<tam){
 		cout<<"Ingrese elemento de a posicion ["<<i<<" ] : ";cin>>v[i];
 		llenado(v,tam,i+1);	
	 }
 }


//MOSTRAR DE CICLO DE IDA 
void mostrar(int v[],int posi, int tam){
	if(posi<tam){
		cout<<v[posi]<<" | ";
		mostrar(v,posi+1,tam);
		
	}
}

//MOSTRAR DE CICLO DE  VUELTA 
void mostrarVuelta(int v[], int tam){
	if(tam>=0){
		mostrarVuelta(v,tam-1);
		cout<<" vector [ "<<tam<<" ] :" <<v[tam]<<endl;
	}
}

int  sumaTodo(int v[], int tam , int i ,int ac)
{
	if(i<tam){
		ac=ac+v[i];
		return sumaTodo(v,tam,i+1,ac);
	}
	else{
		//caso base
		return ac;
	}
}



int main(){
	int v[30],tam;
	cout<<"Ingrese la cantidad de elemntos del vetor : ";cin>>tam;	
	//datos(v,tam-1);
	llenado(v,tam,0);;
	mostrar(v, 0 ,tam);
	cout<<endl;
	mostrarVuelta(v,tam-1);
	cout<<endl;
	cout<<"SUMA TOTAL DE LOS ELEMENTOS DEL VECTOR ES DE "<<sumaTodo(v,tam,0,0);
	return 0;
}
