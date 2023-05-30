#include<iostream>
#include "ordenamientos.h"
using namespace std;

void menu(){
	cout<<"------------MENU DE ORDENAMIENTOS-------------"<<endl;
	cout<<"1.- ORDENAMIENTO QUICKSORT   "<<endl;
	cout<<"2.- ORDENAMIENTO BURBUJA "<<endl;
	cout<<"3.- ORDENAMIENTO SHELL "<<endl;
	cout<<"Elija una opcion   "<<endl;
	
}

int main (){
	srand(time(NULL));
	int vec[30],tam,op;
	menu();
	cin>>op;
      switch(op){
    	case 1 :
    		cout<<"\nIngrese el tamano del vector = ";cin>>tam;    	
	        leer(vec,tam);
        	cout<<"Ordenamiento quickSort "<<endl;
	        quickSort(vec,tam);
	        imprimir(vec,tam);
		break;
		case 2:
			cout<<"\nIngrese el tamano del vector = ";cin>>tam; 
		    cout<<"Ordenamiento Burbuja"<<endl;
		    leer(vec,tam);
	        burbuja(vec,tam);
	        imprimir(vec,tam);
		break;
		case 3 :
			cout<<"\nIngrese el tamano del vector = ";cin>>tam; 
			cout<<"Ordenamiento shell "<<endl;
			leer(vec,tam);
	        Shell(vec,tam);
	        imprimir(vec,tam);
			
		break;

		default :	cout<<"NUMERO ERRONEO !!!, INTENTELO DE NUEVO ";break;
	}
	  

	return 0;
}
