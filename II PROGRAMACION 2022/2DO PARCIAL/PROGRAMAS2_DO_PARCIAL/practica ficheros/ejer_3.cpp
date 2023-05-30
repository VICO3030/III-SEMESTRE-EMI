#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
//estructura de lista de clientes
struct almacen{
char nombree[20];
char codigo[10];
char SEMESTRE[20];
char materia[20];
float nota1;
float nota2;
float nota3;
float notafinal;

char proveedor[50];
};
//PROTOTIPOS DE LAS PROCEMIENTOS :DD
void crear_fichero(FILE* f,almacen xd);
void leer_fichero(FILE* f,almacen xd);

void menu();
//PROGRAMA PRINCIPAL
int main()
{
FILE *f;	
FILE *aux;
almacen xd;
int op;
    cout << "ALMACEN" << endl;
    do{menu();
    	cout<<"Coloque la opcion: "; cin>>op;
    	switch(op)
    	{	
    		case 1:crear_fichero(f,xd) ;break;
           case 2:leer_fichero(f,xd) ;break;
           case 3: ;break;

		}
	}while(op!=3);
    
    
    return 0;
}
//PROCEDIMIENTO CREAR FICHERO BINARIO
void crear_fichero(FILE* f,almacen xd){

int i,n;
if((f=fopen("DATOSALMACEN.dat","ab"))==NULL)//Colocamos b alado del nombre del fichero para que sepa que es binario
{
    cout<<"error en apertura";
}
else
{
	cout<<"INGRESE EL CODIGO DEL ESTUDIANTE: "; fflush(stdin);gets(xd.codigo);fflush(stdin);
	cout<<"INGRESE EL NOMBRE DEL ESTUDIANTE :";fflush(stdin);gets(xd.nombree);fflush(stdin);
	cout<<"INGRESE EL SEMESTRE DEL ESTUDIANTE: "; fflush(stdin);gets(xd.SEMESTRE);fflush(stdin);
	cout<<"INGRESE LA MATERIA : ";fflush(stdin);gets(xd.nombree);fflush(stdin);
	cout<<"INGRESE LA NOTA DEL PRIMER PARCIAL : "; cin>>xd.nota1;
	cout<<"INGRESE LA NOTA DEL SEGUNDO PARCIAL : "; cin>>xd.nota2;
	cout<<"INGRESE LA NOTA DEL TERCER PARCIAL : "; cin>>xd.nota3;
	cout<<"INGRESE LA NOTA DEL FINAL PARCIAL : "; cin>>xd.notafinal;
	
	fwrite(&xd,sizeof(xd),1,f);
}
fclose(f);
}
void menu()
{
	cout<<" _________________________________\n";
	cout<<"|              MENU              |\n";
	cout<<"|________________________________| \n";
	cout<<"| 1.- GUARDAR DATOS DEL FICHERO  |\n";
	cout<<"| 2.- MOSTRAR DATOS DEL FICHERO  |\n";
	cout<<"| 3.- SALIR                      |\n";
	cout<<"|________________________________| \n";

}
//PROCEDIMIENTO LEER DE FICHERO BINARIO

void leer_fichero(FILE* f,almacen xd)
{
if((f=fopen("DATOSALMACEN.dat","rb"))==NULL)
{
    cout<<"error en apertura";
}
else
{	cout<<"________________________________________________________________________________________\n";
	cout<<"|\t\t                    INFORMACION DE ESTUDIANTE                                      |"<<endl;
	
	cout<<"\tCODIGO \tNOMBRE \tSEMESTRE \tMATERIA \tNOTA_1P \tNOTA_2P \tNOTA_3P \tNOTA_FINAL  \t\t"<<endl;
	fread(&xd,sizeof(xd),1,f);
	while (!feof(f))
	{
		cout<<"\t"<<xd.codigo<<"\t\t"<<xd.nombree<<"\t"<<xd.SEMESTRE<<"\t"<<xd.materia<<"\t"<<xd.nota1<<"\t\t"<<xd.nota2<<"\t\t"<<xd.nota3<<"\t\t"<<xd.notafinal<<"\t\t\t\t"<<endl;
		fread(&xd,sizeof(xd),1,f);
	}
	cout<<"_______________________________________________________________________________________\n\n";
}
fclose(f);
}


