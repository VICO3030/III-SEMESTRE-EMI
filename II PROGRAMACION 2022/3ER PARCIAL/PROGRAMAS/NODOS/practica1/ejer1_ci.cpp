/*ejercicio 1 Crear la estructura cola que represente una cola de gente en el banco para 
atender. Implementar los procedimientos apilar y desapilar, se lee como dato de
entrada el número de carnet.*/
#include<iostream>
using namespace std;
struct Nodo{
	int carnet;
	Nodo *sig;
};

//prototipos
void insertarCola(Nodo *& ,Nodo*&, int );
bool cola_vacia(Nodo *); 
void Mostrar(Nodo *& frente ,Nodo*& fin, int ci);
void suprimirCola(Nodo *&,Nodo *&,int &);

//funcion para determinar si la cola esta vacio o no
bool cola_vacia(Nodo *frente){
	return (frente == NULL)? true : false ;
	/*if(frente==NULL)
	return true;
	else
	return false;*/
}
void insertarCola(Nodo *& frente  ,Nodo*& fin , int  ci){
	Nodo *nuevo_nodo =new Nodo();
	nuevo_nodo->carnet = ci;
	nuevo_nodo->sig=NULL;
	
	if(cola_vacia(frente)){
		frente=nuevo_nodo;
	}
	else{
		fin->sig = nuevo_nodo;
	}
	fin=nuevo_nodo;
	cout<<"Numero de carnet [ "<<ci<<" ] - >insertado correctamente "<<endl;

}



//funcion para eleminar datos de la cola 
void suprimirCola(Nodo *&frente ,Nodo *&fin ,int &ci){
	ci =frente->carnet;
	Nodo *aux= frente;
	
	if(frente == fin ){
		frente= NULL;
		fin = NULL;
	}
	else{
		frente = frente->sig;
	}
	
	delete aux;
}
void Mostrar(Nodo *& frente ,Nodo*& fin, int ci){
	 while(frente!=NULL){
        suprimirCola(frente,fin,ci);
        if(frente!=NULL)
            cout<<ci<<"\t|" ;
        else
            cout<<ci<<"\t|" ;
    }
	
}

int main()
{
	Nodo *frente=NULL;
	Nodo *fin=NULL;
	int nro ,ci;
	cout<<"Cuantos usuarios ingresaran al banco  ? : ";cin>>nro;
	for(int i=0 ; i< nro ; i++){
		cout<<"----------------------------------------------------------"<<endl;
		cout<<"Ingrese el carnet de la persona ["<<i+1<<" ] :";cin>>ci;
		insertarCola(frente,fin,ci);
	}
	cout<<"==================================================================="<<endl;
	cout<<"Quitando los usuarios de la cola "<<endl;
	Mostrar(frente ,fin, ci);
	cout<<endl;
	cout<<"======================================================================"<<endl;


	return 0;
}

