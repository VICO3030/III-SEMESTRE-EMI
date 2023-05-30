//ordenamiento por insercion
#include <iostream>
using namespace std;
//menu
int menu(){
	int opcion;
	cout<<""<<endl;
	cout<<"*********MENU*********"<<endl;
	cout<<"         1.-ordenar por insercion "<<endl;
	cout<<"         2.-Ordenar por seleccion  "<<endl;
	cout<<"         3.-Salir del programa  "<<endl;
	cout<<" "<<endl;
	cout<<"   ELIJA UNA OPCION :";
	cin>>opcion;
	return opcion;
}
 //oordenamiento por insercion
 void inserccion(float A[],int n){
	float llave;
	int i,j;
	for(j=1;i<=(n-1);j++)
	{   llave=A[j];
	   i=j-1;
	    while(i>=0 && A[i]>llave)
		{   A[i+1]=A[i];
	        i--;
	    }
	   A[i+1]=llave;
	}
}
//ordenamiento por seleccion
void seleccion(float A[],int n){
	int i,j,AUX,posmenor;
	for (i=0;i<=(n-2);i++){
	    posmenor=i;
	    for (j=i+1;j<=(n-1);j++){
	    	if (A[j]<A[posmenor]){
	    		posmenor=j;
			}	    
	    }
	    AUX=A[posmenor];
	    A[posmenor]=A[i];
	    A[i]=AUX;
    }
}


void llenar(float A[],int n ){       
    for (int p=0;p<n;p++)
    {
    	cout<<"ingrese elemento posicion"<<p<<":";
    	cin>>A[p];
	}  
}

void imprimir(float A[],int n)
{
	for (int p=0;p<n;p++)
	{
		cout<<A[p]<<"  ";
	}
	cout<<endl;
	
}
int main(){
	//locales
	float vec[30];
    int tam,opcion ;
    do{
    	system("cls");
    	opcion=menu();
    	switch(opcion){
    		case 1:{
    			cout<<"ingrese el tamano del vector:";
    			cin>>tam;
    			llenar(vec,tam);
    			cout<<"EL VECTOR DESORDENADO ";
    			imprimir(vec,tam);
    		    cout<<"el vector ordenado por insercion es ";
    		    inserccion(vec,tam);
		 	    imprimir(vec,tam);
			    break;
			}
			case 2:{
    			cout<<"ingrese el tamano del vector:";
    			cin>>tam;
    			llenar(vec,tam);
    			cout<<"EL VECTOR DESORDENADO ES : ";
    			imprimir(vec,tam);
    		    cout<<"el vector ordenado por seleccion es ";
    		    seleccion(vec,tam);
			    imprimir(vec,tam);
			    break;
			}
		}
		if(opcion!=3){
			system("pause");
		}
	}while (opcion!=3);
	cout<<"SALIENDO DEL MENU";
	return 0;

}
