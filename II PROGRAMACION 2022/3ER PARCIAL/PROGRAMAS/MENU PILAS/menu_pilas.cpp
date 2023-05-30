#include<iostream> 
#include "pilas.h " 
using namespace std;

void menu (){
	cout<<"\n-------------------------------------------------"<<endl;
	cout<<"   MENU DE OPCIONES "<<endl;
	cout<<" 1.- APILAR "<<endl;
	cout<<" 2.- DESAPILAR "<<endl;
	cout<<" 3.- VACIAR PILA "<<endl;
	cout<<" 4.- SALIR "<<endl;
	cout<<"--------------------------------------------------"<<endl;
	cout<<"Elija una opcion  : ";
}


int main()
{
   char dato;
   nodo *pila=NULL;
   //nodo *pila2=NULL;
   int op,num;

   do{
   	menu();
   cin>>op;
   	    switch(op){
   	    case 1 : 
		        cout<<"Ingrese cuantos datos va apilar  : ";cin>>num;
   	            for(int i=0 ; i<num ;  i++){
   	         	    cout<<" dato para la pila ; ";cin>>dato;
   	         	    apilar(pila,dato);
   	         	   
	        	}
	        	for(int i=0 ; i<num ; i++){
	        		apilar(pila,dato);
	        		 cout<<dato <<" | ";
				} 
	            break;
	        	
   	    case 2 :
           
   	        apilar(pila,dato);
   	        
		    while ( pila!=NULL){
			desapilar(pila,dato); 
			if(pila!=NULL)
			cout<<dato<<" | ";
			else
			cout<<dato<<" | ";
		    }
		    break;
	       
   	    case 3 :
		    break;
   	    case 4 : cout<<"SALIENDO DEL PROGRAMA  !!! ";break;
   	    //default :cout<<"NUMERO ERRONEO !!!, INTENTELO DE NUEVO ";break;
    }
   }while(op!=4);
	return 0;
}


