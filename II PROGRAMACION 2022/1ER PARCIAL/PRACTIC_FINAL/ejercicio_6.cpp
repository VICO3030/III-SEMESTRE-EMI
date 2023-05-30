#include<iostream>
#include<string.h>
using namespace std;
//prototipo de funciones o procedimientos
void separador(char cade1[],char aux2[],char aux3[],char aux4[]);
//programa principal
int main(){
	char cade1[50],aux1[20],aux2[20],aux3[20];
	cout<<"Ingrese su nombre completo NOMBRE AP.PATERNO AP.MATERNO"<<endl;
	fflush(stdin);
	gets(cade1);
	fflush(stdin);
	separador(cade1,aux1,aux2,aux3);
    strcat(aux3," ");
    strcat(aux3,aux2);
    strcat(aux3," ");
    strcat(aux3,aux1);
    cout<<aux3;
	return 0;	
}
void separador(char cade1[],char aux1[],char aux2[],char aux3[]){
	int c=0,d=0;
	while (cade1[c]!=' '){
		aux1[d]=cade1[c];
	c++;
	d++;
	}
	c++;
	d=0;
	while (cade1[c]!=' '){
		aux2[d]=cade1[c];
	c++;
	d++;
	}
	c++;
	d=0;
	while (cade1[c]!=' '){
		aux3[d]=cade1[c];
	c++;
	d++;
	}

}
