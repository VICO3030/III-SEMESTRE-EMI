#include<math.h>
#include<string.h>
using namespace std;
//opcion 1 funcion de busqueda 
int busqueda(char cad[],char ca){
	int i;
	for( i=0; i<strlen(cad); i++){
		if(cad[i]==ca){
			return i;
			break;
		}
	}
	return -1;
}


//opcion 2 contar letras 
//opcio 3 borrar espacios
void espacio(char cade[]){
	int i,n;
	n=strlen(cade);
	for (i=0;i<n;i++){
		if(cade[i]==' '){
			for(int j=i;j<n;j++){
				cade[j]=cade[j+1];
			}
		}
	}
}
//ejercicio 4 invertir
void invertir_cadena(char cade[],int t){
	int i,j;
	j=t-1;
	char aux;
	for(i=0;i<t/2;i++){
	aux=cade[i];
	cade[i]=cade[j];
	cade[j]=aux;
	j--;
	}
}
//ejercicio 5
void get_cad(char cad[]){
	fflush(stdin);
	gets(cad);
	fflush(stdin);
}

