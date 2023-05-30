#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
//estructura de lista de clientes
struct almacen{
char nombree[20];
char codigo[10];
char marca[20];
float precio;
int stock;
char proveedor[50];
};
//PROTOTIPOS DE LAS PROCEMIENTOS :DD
void crear_fichero(FILE* f,almacen xd);
void leer_fichero(FILE* f,almacen xd);
void modificar_fichero(FILE* f,almacen xd);
void eliminar_fichero(FILE* f,FILE* aux,almacen xd);
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
           case 3: modificar_fichero( f, xd);break;
           case 4: eliminar_fichero( f,aux, xd); break;
           case 5: break;
		}
	}while(op!=5);
    
    
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
	cout<<"INGRESE EL NOMBRE DEL PRODUCTO: "; fflush(stdin);gets(xd.nombree);fflush(stdin);
	cout<<"INGRESE EL CODIGO DEL PRODUCTO: "; fflush(stdin);gets(xd.codigo);fflush(stdin);
	cout<<"INGRESE LA MARCA DEL PRODUCTO: "; fflush(stdin);gets(xd.marca);fflush(stdin);
	cout<<"INGRESE EL PRECIO DEL PRODUCTO: "; cin>>xd.precio;
	cout<<"INGRESE EL STOCK DEL PRODUCTO: "; cin>>xd.stock;
	cout<<"INGRESE EL PROVEEDOR DEL PRODUCTO: "; fflush(stdin);gets(xd.proveedor);fflush(stdin);
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
	cout<<"| 3.- MODIFICAR DATOS DEL FICHERO|\n";
	cout<<"| 4.- BORRAR DATOS DEL FICHERO   |\n";
	cout<<"| 5.- SALIR                      |\n";
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
	cout<<"|\t\t                   LISTA DE PRODUCTOS                                   |"<<endl;
	cout<<"|_______________________________________________________________________________________|\n\n";
	cout<<"|\tCODIGO \tNOMBRE \tMARCA \tPRECIO \tSTOCK \tPROVEEDOR \t\t\t\t|"<<endl;
	fread(&xd,sizeof(xd),1,f);
	while (!feof(f))
	{
		cout<<"|\t"<<xd.codigo<<"\t"<<xd.nombree<<"\t"<<xd.marca<<"\t"<<xd.precio<<"\t"<<xd.stock<<"\t"<<xd.proveedor<<"\t\t\t\t|"<<endl;
		fread(&xd,sizeof(xd),1,f);
	}
	cout<<"|_______________________________________________________________________________________|\n\n";
}
fclose(f);
}
//PROCEDIMIENTO MODIFICAR FICHERO BINARIO :dddd
void modificar_fichero(FILE* f,almacen xd)
{	int i,pos;
	char co[10];
	bool bandera=false;
if((f=fopen("DATOSALMACEN.dat","r+b"))==NULL)
{
    cout<<"error en apertura";
}
else
{
	cout<<"Ingrese el codigo del producto que desea modificar: "; fflush(stdin);gets(co); fflush(stdin);
	fread(&xd,sizeof(xd),1,f);
	while(!feof(f) && bandera==false)
	{	if(strcmp(co,xd.codigo)==0)
		{
			cout<<"Los datos que puede modificar son: "<<endl;
			cout<<"PRECIO: "<<endl;cin>>xd.precio;
			cout<<"STOCK: "<<endl;cin>>xd.stock;
			pos=ftell(f)-sizeof(xd);//resta los baits para que se posicione al principio
			fseek(f,pos,SEEK_SET);
			fwrite(&xd,sizeof(xd),1,f);
			bandera=true;
			break;
		}
		fread(&xd,sizeof(xd),1,f);
	}
	if (bandera==false)
	{ cout<<"El codigo no exites :DDDD"<<endl;
	}
	else
	{	cout<<"Los datos fueron modificados correctamente!"<<endl;
	}
}
fclose(f);
}


//PROCEDIMIENTO ELIMINAR DE FICHERO BINARIO
void eliminar_fichero(FILE* f,FILE* aux,almacen xd)
{	int i,pos;
	char co[10];
	f=fopen("DATOSALMACEN.dat","rb");
	aux=fopen("auxiliar.dat","wb");
	if((f=fopen("DATOSALMACEN.dat","r+b"))==NULL)
	{
		cout<<"error en apertura, del fichero ";
	}
	else
	{
		cout<<"Ingrese el codigo del producto que desea eliminar: "; cin>>co;
		fread(&xd,sizeof(xd),1,f);
		while(!feof(f))
		{	
			if (strcmp(co,xd.codigo)==0)
			{
				cout<<"El articulo se eliminara del fichero!"<<endl;
				cout<<"CODIGO: "<<xd.codigo<<endl;
				cout<<"NOMBRE: "<<xd.nombree<<endl;
				cout<<"EL REGISTRO SE EMILIMINO CORRECTAMENTE"<<endl;
			}
			else
			{
			fwrite(&xd,sizeof(xd),1,aux);
			}
			fread(&xd,sizeof(xd),1,f);
		}
	}
	fclose(f);
	fclose(aux);
	f=fopen("DATOSALMACEN.dat","wb");
	aux=fopen("auxiliar.dat","rb");
	if((f=fopen("DATOSALMACEN.dat","wb"))==NULL)
	{
		cout<<"error en apertura, del fichero ";
	}
	else
	{
		fread(&xd,sizeof(xd),1,aux);
		while(!feof(aux))
		{
			fwrite(&xd,sizeof(xd),1,f);
			fread(&xd,sizeof(xd),1,aux);
		}
	}
	fclose(f);
	fclose(aux);
}



