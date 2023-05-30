#include<iostream>
#include "libreriasss.h"
using namespace std;
//prototipos de funciones y procedimientos
void menu();

int main(){
	char cade1[20],dato;
	char cade[20];
	int opcion,ca1;
	//ejer 2
	char frase[25];
	int letra_a=0,letra_c=0;
	//ejer 3
	char texto1[30];
    char texto2[30];	
    int tam;
	char texto [25];
	char nombre[25],apellido_1,apellido_2,nombre_com;
	//funcion 5
	menu();
	cout<<" Elija una opcion del menu "<<endl;
	cin>>opcion;
	do{

	switch(opcion){
		case 1: //buscar un caracter de una caadena 
		        cout<<"INGRESE UNA PALABRA =";
		        fflush(stdin);
		        gets(cade1);
		        fflush(stdin);
		        cout<<"\nIngrese el caracter de busqueda =";
		        cin>>dato;
		        //condicion
		        if(busqueda(cade1,dato)==-1){
		          cout<<"el caracter no  se encuentra  en la cadena ";
	            }
	            else
	            {
		           cout<<"el caracter si se encuentra en la cadena y esta en la posicion  ["<<busqueda(cade1,dato)<<"]";
               	}
		break;
		case 2: //contar el numero de caractere que tiene mi cadena
               cout<<"INGRESE UNA FRASE DETERMINADAA EN UN PUNTO :"<<endl;
	           fflush(stdin);
		        gets(frase);
		        fflush(stdin);
	           for(int i=0;i<25;i++){
	               switch(frase[i]){
		              case 'a':letra_a++;
		              break;
	                  case 'c':letra_c++;
		              break;
		            }
	            }
	        cout<<"letra a se repite"<<letra_a<<"veces"<<endl;
	        cout<<"letra c se repite"<<letra_c<<"veces"<<endl;     
		break;
		case 3:     
	        cout<<"Ingrese el texto : "<<endl;
	        fflush(stdin);
	        gets(cade1);
	        fflush(stdin);
          	cout<<"El texto actual es de "<<cade1<<endl;
           	espacio(cade1);
	        cout<<"El texto sin espacios es de "<<cade1<<endl;
		break;
		case 4: cout<<"  ingrese un texto = "  <<endl;
            	fflush(stdin);
 	            gets(texto);
         	    fflush(stdin);
            	tam=strlen(texto);
         	    cout<<"el texto es "<<texto<<endl;
                invertir_cadena(texto,tam);//llamado del void 
                 cout<<"el texto invertido es "<<texto;  

		break;
//	    case 5: cout<<"ingrese su nombre";
//	            get_cad(nombre);
//	            cout<<"ingrese su apellido paterno";
//	            get_cad(apellido_1);
//	            cout<<"ingrese su apellido materno";
//	            get_cad(apellido_2);
//	           strcat(nombre_com,nombre);
//	           strcat(nombre_com," ");
// 	           strcat(nombre_com," ");
//	           strcat(nombre_com,apellido_2);
//	           cout<<"su nombre completo es : "<<endl;
//	           cout<<nombre_com; 
//		break;	
	    }if (opcion!=6)	
			system("pause");
	}while (opcion!= 6);
	cout<<"Saliendo del programa...";
	return  0;
}
void menu(){
	cout<<"--------MENU PRINCIPAL----------"<<endl;
	cout<<"1.- BUSCAR CARACTER"<<endl;
	cout<<"2.- CONTAR LETRAS "<<endl;
	cout<<"3.- ELEMINAR ESPACIOS-"<<endl;
	cout<<"4.- UNIR CADENAS INVERTIDAS  "<<endl;
	cout<<"5.- CONCATENAR (invertir cadenas )  "<<endl;
	cout<<"6.- SALIR  "<<endl;
	cout<<"  "<<endl;
	
}


