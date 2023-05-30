#include <iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<stdlib.h>


using namespace std;
//estructura de lista de clientes
struct datos{
//estructura de dato para el fichero 
int codigo;                          
char nombre[20];
char marca[20];
float precio;
int stok;
char proveedor[50];
};
//protipo de funciones 
void crear_fichero(FILE* f,datos r);
void leer_fichero(FILE* f,datos r);
void menu(int &opcion);
void modificar(FILE *f,datos r);
void borrar_datos(FILE *f ,FILE *aux,datos r);

//PROGRAMA PRINCIPAL
int main()
{
FILE *f;	
datos r;
FILE *aux;
    srand(time(NULL));
	FILE* archi;
	int op=0;
	setlocale(LC_ALL,"spanish");
	do{
		menu(op);
		switch(op){
				case 1: 
				system("cls");
				crear_fichero(f,r);
				;break;
	          	case 2:  
	          	system("cls");
				leer_fichero(f,r);;break;
		        case 3: 
		        system("cls");
				modificar(f,r);break;
		        case 4: 
				borrar_datos(f,aux, r );
				break;
		        case 5: break;
		}
	
	}while(op!=5);

    return 0;
}


//PROCEDIMIENTO CREAR FICHERO BINARIO
void crear_fichero(FILE* f,datos r){

int i,n;
if((f=fopen("fichero.dat","ab"))==NULL)
{
    cout<<"error en apertura !!!";
}
else {
	cout<<"Cuantos datos desea guardar ";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
	    cout<<" "<<endl;
		r.codigo= 1000+rand()%(1000-9000+1);
		cout<<"   INGRESE DEL PRODUCTO N°"<<i<<endl;
		cout<<"Ingrese su nombre ";
		fflush(stdin);  //para liberar memoria
		cin>>r.nombre;
		fflush(stdin);
		cout<<"Ingrese tipo de marca  : ";
		fflush(stdin);
		cin>>r.marca;
		fflush(stdin);
		cout<<"Ingrese su precio :";
		cin>>r.precio;
		cout<<"Ingrese la cantidad en stock : ";
		cin>>r.stok;
		cout<<"Ingrese al proveedor  : ";
		fflush(stdin);
		cin>>r.proveedor;
		fflush(stdin);
		fwrite(&r,sizeof(r),1,f); //para determinar memoria /sizeof/ y guarda espacio de memoria
	}	
}

fclose(f);
}
//PROCEDIMIENTO LEER DE FICHERO BINARIO
void leer_fichero(FILE* f,datos r)
{

if((f=fopen("fichero.dat","rb"))==NULL)
{
    cout<<"error en apertura";
}
else{

	cout<<"============== LISTA DE ALMACEN============="<<endl;
	cout<<"============================================="<<endl;
	cout<<"CODIGO  | NOMBRE	| MARCA	        |  PRECIO | STOCK | PROVEEDOR |"<<endl;
	fread(&r,sizeof(r),1,f);
	while(!feof(f)){
		cout<<r.codigo<<"\t|"<<r.nombre<<"   \t|"<<r.marca<<" \t|"<<r.precio<<"      |"<<r.stok<<"      |"<<r.proveedor<<endl;
		fread(&r,sizeof(r),1,f);
	}
}
fclose(f);
}

/*procedimiento para modificar fichero ; normalmente el codigo no se modifica */
void modificar(FILE *f,datos r)
{
	
int i,co,pos ;
bool bandera =false;
if((f=fopen("fichero.dat","r+b"))==NULL)
{
    cout<<"error en apertura !!!";
}
else {
	cout<<"INGRESE EL CODIGO DEL ARTICULO QUE DESEA MODIFICAR  :"<<endl;
	cin>>co;
	fread(&r,sizeof(r),1,f);
	    while(!feof(f)&& bandera ==false){
		//comparar si el codigo que deseamos buscar
		   if(co==r.codigo){
		       cout<<"Los datos que puede modificar son ";
		       cout<<"Precio : ";cin>>r.precio;
		       cout<<"Stock : ";cin>>r.stok;
		       pos=ftell(f)-sizeof(r);
		       //principipo del fichero 
		       fseek(f,pos,SEEK_SET);
		       fwrite(&r,sizeof(r),1,f);
		       bandera=true;
		       cout<<"LOS DATOS FUERON MOIDIFICADOS CORECTAMENTE !!";
		       break;
		    }
		    fread(&r,sizeof(r),1,f); 
		}
		if(bandera==false)
		cout<<" EL DATO NO SE ENCUETRA "<<endl;
       fclose(f);  
       } 
       
}

void borrar_datos(FILE *f ,FILE *aux,datos r )
{
    int i,co,pos ;
    f=fopen("empresa.dat","rb");
    aux=fopen("empresa.dat","wb");

    if((f=fopen("empresa.dat","r+b"))==NULL);
    {
    cout<<"error en apertura !!!";
    }  
    else 
	{
		cout<<"INGRESE EL CODIGO DEL ARTICULO QUE DESEA MODIFICAR  :";cin>>co;
	    fread(&r,sizeof(r),1,f);
	    while(!feof(f))
		{
		    if(co==r.codigo){
		 	      cout<<"El articulo se eleminara del fichero "<<endl;
		 	     cout<<"Codigo : ";cout<<r.codigo;
		 	     cout<<"Nombre :"; cout<r.nombre;
		 	     cout<<"Registro se elimino correctamente !!"<<endl;
		    }
		    else
			{
	     	fwrite(&r,sizeof(r),1,aux);
	    	} 
	     	fread(&r,sizeof(r),1,f); 
		} 
    }
   	fclose(f);
    fclose(aux);    
	f=fopen("empresa.dat","wb");
	aux=fopen("empresa.dat","rb");
	if((f=fopen("empresa.dat","wb"))==NULL)
	{
		cout<<"error en apertura, del fichero ";
	}
	else
	{
		fread(&r,sizeof(r),1,aux);
		while(!feof(aux))
		{
			fwrite(&r,sizeof(r),1,f);
			fread(&r,sizeof(r),1,aux);
		}
	}
	fclose(f);
	fclose(aux);
}




//procdeimiento menu
void menu(int &opcion)
{
	cout<<"__________________________________________"<<endl;
	cout<<"             MENU DE OPCIONES                          "<<endl;
	cout<<"__________________________________________"<<endl;
	cout<<"    1.-GUARDAR DATOS DEL FICHERO     "<<endl;
	cout<<"    2.-MOSTRAR DATOS DEL FICHERO     "<<endl;
	cout<<"    3.-MODIFICAR DATOS DEL FICHERO   "<<endl;
	cout<<"    4.-BORRAR DATOS DEL FICHERO      "<<endl;
	cout<<"    5.-SALIR     "<<endl;
	cout<<"_________________________________________"<<endl;
	cout<<"      ELIJA UNA OPCION DEL MENU "<<endl;
	cin>>opcion;
}

