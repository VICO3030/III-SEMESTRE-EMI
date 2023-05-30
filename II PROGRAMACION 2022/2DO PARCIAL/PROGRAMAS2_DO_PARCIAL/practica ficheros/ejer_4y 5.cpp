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
    char titulo[20];
    char autor[20];
    char editorial[20];
    char anio[6];
    int npag;
 };

/*PROGRAMA PRINCIPAL*/
int main()
{FILE *fichero;
FILE *auxiliar;
    system("color 2e");
    setlocale(LC_ALL,"spanish");//comando para mejora mensajes de salida
    int opcion;
    do{
    //system("cls");
    menu();
    cin>> opcion;
    switch(opcion){
    case 1: crear_biblio(fichero);break;
    case 2: modifica_biblio(fichero);break;
    case 3: elimina_biblio(fichero,auxiliar);break;
    case 4: mostrar_biblio(fichero);break;
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
cout<<"  1- Crear Biblioteca     \n";
cout<<"  2- Modificar Biblioteca \n";
cout<<"  3- Eliminar Biblioteca  \n";
cout<<"  4- Mostrar Biblioteca   \n";
cout<<"  5- Salir                \n";
cout<<"--------------------------\n";
cout<<" Que desea hacer? ";
}
/*PROCEDIMIENTO CREAR ARCHIVO*/
void crear_biblio( FILE *fich) {
    int i,n;
    Biblioteca a;//variable de tipo Biblioteca
    if ((fich = fopen("biblio.dat", "wb")) == NULL)
    {
    cout<<"Error en apertura del fichero para escritura\n";
    }
    else
    {
    cout<<"Cuantos libros tendra la Biblioteca? ";
    cin>>n;
    for (i=1; i <=n; i++){
        cout<<"Ingrese codigo del libro: ";
        fflush(stdin);
        gets(a.codigo);
        fflush(stdin);
        cout<<"Ingrese titulo del libro: ";
        fflush(stdin);
        gets(a.titulo);
        fflush(stdin);
        cout<<"Ingrese autor del libro: ";
        fflush(stdin);
        gets(a.autor);
        fflush(stdin);
        cout<<"Ingrese editorial: ";
        cin>>a.editorial;
        cout<<"Ingrese año de publicacion: ";
        cin>>a.anio;
        cout<<"Ingrese numero de paginas: ";
        cin>>a.npag;
        fwrite(&a, sizeof(a), 1, fich);
        }
        fclose (fich);
      }
        }

/*PROCEDIMIENTO MOSTRAR ARCHIVO*/
void mostrar_biblio( FILE *fich) {
 Biblioteca a;
 if ((fich = fopen("biblio.dat", "rb")) == NULL)
    {
    cout<<"Error en apertura del fichero para lectura \n";
     }
else
    {
     fread (&a, sizeof(Biblioteca), 1, fich);
     cout<<"-------------------------------------------------------------------------\n";
     cout<<"               LIBROS DE LA BIBLIOTECA                                 \n";
     cout<<"-------------------------------------------------------------------------\n";
     cout<<"  CODIGO   TITULO       AUTOR       EDITORIAL       AÑO     NRO_PAGINAS   \n";
     cout<<"-------------------------------------------------------------------------\n";
     while (!feof(fich)) {
     cout<<setw(5)<<a.codigo<<setw(15)<<a.titulo<<setw(10)<<a.autor<<setw(15)<<a.editorial<<setw(10)<<a.anio<<setw(10)<<a.npag<<endl;
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
    fich=fopen("biblio.dat","r+b");
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
		cout<<"EDITORIAL?\n ";
        fflush(stdin);
		gets(a.editorial);
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
if((fichaux=fopen("biblioaux.dat", "wb"))==NULL)
     {
    cout<<"Error en apertura del fichero para escritura \n";
    exit(1);
    }
if ((fich = fopen("biblio.dat", "rb")) == NULL)
    {
    cout<<"Error en apertura del fichero para lectura \n";
    exit(1);
    }
 fread(&a, sizeof(a),1, fich);
 while(!feof(fich)){
    if (strcmp(cod,a.codigo)==0){
     cout<<"SE eliminara al libro:"<<endl;
     cout<<"TITULO : "<<a.titulo<<endl;
     cout<<"LIBRO de codigo "<<cod<<" fue eliminado exitosamente!!!"<<endl;
    }
    else{
    fwrite(&a, sizeof(a),1,fichaux);
    }
 fread(&a, sizeof(a),1, fich);
 }
 fclose(fich);
 fclose(fichaux);
 fichaux=fopen("biblioaux.dat","rb");
 fich=fopen("biblio.dat","wb");
 fread(&a, sizeof(a), 1, fichaux);
 while(!feof(fichaux))
 {
 fwrite(&a, sizeof(a),1, fich);
 fread(&a, sizeof(a), 1, fichaux);
 }
fclose(fich);
fclose(fichaux);
}

