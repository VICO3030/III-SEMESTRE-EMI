#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <iomanip>
using namespace std;

/*PROTOTIPOS DE FUNCIONES Y PROCEDIMIENTOS*/
void crear_biblio(FILE *fich);
void mostrar_biblio(FILE *fich);
void menu();
void modifica_biblio(FILE *fich);
void elimina_biblio(FILE *fich,FILE *fichaux);

/*CREACION DE LA ESTRUCTURA*/
struct Biblioteca {
    char codigo[10];
    char nombre[20];
    char apellido[20];
    int anio;
    int sueldo=2500;
    int Bono=20;
    int iva=325;
    
 };

/*PROGRAMA PRINCIPAL*/
int main()
{FILE *fichero;
FILE *auxiliar;
    system("color 5e");
    setlocale(LC_ALL,"spanish");//comando para mejora mensajes de salida
    int opcion;
    do{
    //system("cls");
    menu();
    cin>> opcion;
    switch(opcion){
    case 1: 
    system("cls");
	crear_biblio(fichero);break;
    case 2:
    system("cls");
	 modifica_biblio(fichero);break;
    case 3: 
    system("cls");
	elimina_biblio(fichero,auxiliar);break;
    case 4:

	mostrar_biblio(fichero);break;
    case 5:break;
    }
   }while(opcion!=5);
    return 0;
}
/*PROCEDIMIENTO MENU DE OPCIONES*/
void menu(){
cout<<"--------------------------\n";
cout<<"\n   MENU DE OPCIONES     \n";
cout<<"--------------------------\n";
cout<<"  1- Ingreso de datos de empleado     \n";
cout<<"  2- Modificar datos de empleado \n";
cout<<"  3- Eliminar datos de empleado  \n";
cout<<"  4- Mostrar datos de empleado \n";
cout<<"  5- Salir                \n";
cout<<"--------------------------\n";
cout<<" Que desea hacer? ";
}
/*PROCEDIMIENTO CREAR ARCHIVO*/
void crear_biblio( FILE *fich) {
    int i,n;
    
    Biblioteca a;//variable de tipo Biblioteca
    if ((fich = fopen("AGENDA.txt", "wb")) == NULL)
    {
    cout<<"Error en apertura del fichero para escritura\n";
    }
    else
    {
    cout<<"Cuantas agendas desea crear ? ";
    cin>>n;
    for (i=1; i <=n; i++){
    	cout<<"AGENDA # "<<i<<endl;
        cout<<"Ingrese su Codigo: ";
        fflush(stdin);
        gets(a.codigo);
        fflush(stdin);
        cout<<"Ingrese su Nombre: ";
        fflush(stdin);
        gets(a.nombre);
        fflush(stdin);
        cout<<"Ingrese su apellido : ";
        fflush(stdin);
        gets(a.apellido);
        fflush(stdin);
        cout<<"Ingrese ano de nacimiento: ";
        cin>>a.anio;
        }
        fclose (fich);
      }
        }

/*PROCEDIMIENTO MOSTRAR ARCHIVO*/
void mostrar_biblio( FILE *fich) {
 Biblioteca a;
 if ((fich = fopen("AGENDA.txt", "rb")) == NULL)
    {
    cout<<"Error en apertura del fichero para lectura \n";
     }
else
    {
     float cal ;
    cal=a.anio-2022;
     fread (&a, sizeof(Biblioteca), 1, fich);
     cout<<"-------------------------------------------------------------------------\n";
     cout<<"                          EMPLEADO                                       \n";
     cout<<"-------------------------------------------------------------------------\n";
     while (!feof(fich)) {
     cout<<endl;
     cout<<"CODIGO DEL EMPLEADO : "<<a.codigo<<endl;
     cout<<"NOMBRE : "<<a.nombre; cout<<"\t\tAPELLIDO : "<<a.apellido<<endl;
     cout<<"SUELDO BASE  : "<<a.sueldo; cout<<"AÑO: "<<cal<<endl;
     cout<<"BONO : "<<a.Bono;  cout<<"IVA"<<a.iva<<endl;
	      cout<<"-------------------------------------------------------------------------\n";
     fread (&a, sizeof(Biblioteca), 1, fich);
    }
     fclose (fich);
     }
}

/*MODIFICA  REGISTRO DE ARCHIVO*/
void modifica_biblio( FILE *fich){
    char cod[10];
    Biblioteca a;
    int band=0,pos=0;
    fich=fopen("AGENDA.txt","r+b");
    if (fich==NULL)
     exit(1);
    cout<<"\nIngrese el codigo del libro que desea modificar: ";
    cin>>cod;
    fread(&a, sizeof(Biblioteca), 1, fich);
    while(!feof(fich)&& band==0)
    {
        if (strcmp(cod,a.codigo)==0)
        {
        cout<<"Los campos que puede modificar son: "<<endl;
		cout<<"AÑO ?\n";cin>>a.anio;
		cout<<"CODIGO ?\n ";
        fflush(stdin);
		gets(a.codigo);
        fflush(stdin);
		cout<<endl;
        pos=ftell(fich)-sizeof(Biblioteca);//obtiene la posicion del registro que se quiere modificar
        fseek(fich,pos,SEEK_SET);
        fwrite(&a, sizeof(Biblioteca), 1, fich);
        cout<<"El registro se modifico exitosamente!!!\n";
        band=1;
        }
        fread(&a, sizeof(a), 1, fich);
    }
    if (band==0)
       cout<<"No existe un libro con ese codigo!!!!\n";
    fclose(fich);
}


//ELIMINA UN REGISTRO DEL FICHERO
void elimina_biblio(FILE *fich,FILE *fichaux){

Biblioteca a;
char cod[10];
cout<<"Ingrese codigo del libro que desea eliminar ";
cin>>cod;
if((fichaux=fopen("biblioaux.txt", "wb"))==NULL)
     {
    cout<<"Error en apertura del fichero para escritura \n";
    exit(1);
    }
if ((fich = fopen("AGENDA.txt", "rb")) == NULL)
    {
    cout<<"Error en apertura del fichero para lectura \n";
    exit(1);
    }
 fread(&a, sizeof(a),1, fich);
 while(!feof(fich)){
    if (strcmp(cod,a.codigo)==0){
     cout<<"SE eliminara los datos del empleado :"<<endl;
     cout<<"COdigo: "<<a.codigo<<endl;
     cout<<"Codigo del empleado"<<cod<<" fue eliminado exitosamente!!!"<<endl;
    }
    else{
    fwrite(&a, sizeof(a),1,fichaux);
    }
 fread(&a, sizeof(a),1, fich);
 }
 fclose(fich);
 fclose(fichaux);
 fichaux=fopen("biblioaux.txt","rb");
 fich=fopen("AGENDA.txt","wb");
 fread(&a, sizeof(a), 1, fichaux);
 while(!feof(fichaux))
 {
 fwrite(&a, sizeof(a),1, fich);
 fread(&a, sizeof(a), 1, fichaux);
 }
fclose(fich);
fclose(fichaux);
}

