#include<iostream>
#include<string.h>
using namespace std;
/*prototipos  de procedimientos */
void leer(string &usuario , string&pass);
void clave();

//menu principal
main(){
	clave();
	return 0;
	
}

//procedimiento leer 
void leer(string& usuario, string & pass){
	cout<<"Ingreese usuario ";
	cin>>usuario;
	cout<<"ingrese contrasena ";
	cin>>pass;
}

void clave(){
	string usuario=" ",pass=" ";
	leer(usuario,pass);
	if(usuario=="VICO3030" && pass=="EMI2022"){
		
		cout<<"ACCESO PERMITIDO ";
	}
	else{
		cout<<"ACCESON DENEGADO ";
		
	}
}
