#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <iomanip>
using namespace std;

/*PROTOTIPOS DE FUNCIONES Y PROCEDIMIENTOS*/
void crear_cuenta(FILE *fich);
void mostrar_cuenta(FILE *fich);
void menu();
void modifica_cuenta(FILE *fich);
void elimina_cuenta(FILE *fich,FILE *fichaux);
void modificarFichero(FILE* f,cajero r);
/*CREACION DE LA ESTRUCTURA*/
struct Cajero{
    char usuario[10];
    char contrasena[20];
    float npag;
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
    case 1: crear_cuenta(fichero);break;
    case 2: modifica_cuenta(fichero);break;
    case 3: elimina_cuenta(fichero,auxiliar);break;
    case 4: mostrar_cuenta(fichero);break;
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
cout<<"  1- Crear Cuenta  Nueva   \n";
cout<<"  2- Modificar Cuenta Creada \n";
cout<<"  3- Eliminar Cuenta  \n";
cout<<"  4- Mostrar Cuenta    \n";
cout<<"  5- Salir                \n";
cout<<"--------------------------\n";
cout<<" Que desea hacer? ";
}
/*PROCEDIMIENTO CREAR ARCHIVO*/
void crear_cuenta( FILE *fich) {
    int i,n;
    Cajero a;//variable de tipo Cajero
    if ((fich = fopen("biblio.dat", "wb")) == NULL)
    {
    cout<<"Error en apertura del fichero para escritura\n";
    }
    else
    {
    cout<<"Cuantas cuentas desea crear ? ";
    cin>>n;
    for (i=1; i <=n; i++){
        cout<<"Ingrese su usuario : ";
        fflush(stdin);
        gets(a.usuario);
        fflush(stdin);
        cout<<"Ingrese su contraseña : ";
        fflush(stdin);
        gets(a.contrasena);
        fflush(stdin);
        cout<<"Ingrese el monto de dinero que va depositar : ";
        cin>>a.npag;
        fwrite(&a, sizeof(a), 1, fich);
        }
        fclose (fich);
      }
        }

/*PROCEDIMIENTO MOSTRAR ARCHIVO*/
void mostrar_cuenta( FILE *fich) {
 Cajero a;
 if ((fich = fopen("biblio.dat", "rb")) == NULL)
    {
    cout<<"Error en apertura del fichero para lectura \n";
     }
else
    {
     fread (&a, sizeof(Cajero), 1, fich);
     cout<<"-------------------------------------------------------------------------\n";
     cout<<"                            CAJERO VIRTUAL                               \n";
     cout<<"-------------------------------------------------------------------------\n";
     cout<<"  USUARIO     CONTRASEÑA           MONTO DE DINERO     \n";
     cout<<"-------------------------------------------------------------------------\n";
     
     while (!feof(fich)) {
     cout<<setw(5)<<a.usuario<<setw(15)<<a.contrasena<<setw(18)<<a.npag<<endl;
     fread (&a, sizeof(Cajero), 1, fich);
      }
     fclose (fich);
     }
     }

/*MODIFICA  REGISTRO DE ARCHIVO*/
void modifica_cuenta( FILE *fich){
    char cod[10];
    Cajero a;
    int band=0,pos=0;
    fich=fopen("biblio.dat","r+b");
    if (fich==NULL)
    exit(1);
    cout<<"\nIngrese la constraseña de su cuenta : ";
    fflush(stdin);
    gets(cod);
    fflush(stdin);
    fread(&a, sizeof(Cajero), 1, fich);
    while(!feof(fich)&& band==0)
    {
        if (strcmp(cod,a.contrasena)==0)
        {
        cout<<"Los campos que puede modificar son: "<<endl;
		cout<<"USUARIO  : ";
		fflush(stdin);
		gets(a.usuario);
		fflush(stdin);
		cout<<"CONTRASEÑA  NUEVA :  ";
        fflush(stdin);
		gets(a.contrasena);
        fflush(stdin);
		cout<<endl;
        pos=ftell(fich)-sizeof(Cajero);//obtiene la posicion del registro que se quiere modificar
        fseek(fich,pos,SEEK_SET);
        fwrite(&a, sizeof(Cajero), 1, fich);
        cout<<"El registro se modifico exitosamente!!!\n";
        band=1;
        }
        fread(&a, sizeof(a), 1, fich);
    }
    if (band==0)
       cout<<"CONTRASEÑA INCORECTA  !!!\n";
    fclose(fich);
}
//ELIMINA UN REGISTRO DEL FICHERO
void elimina_cuenta(FILE *fich,FILE *fichaux){

Cajero a;
char cod[10];
cout<<"Ingrese su contraseña si desea Eleminar la cuenta  :  ";
fflush(stdin);
gets(cod);
fflush(stdin);
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
    if (strcmp(cod,a.contrasena)==0){
     cout<<"SE eliminara sus datos se cuenta :"<<endl;
     cout<<"Contraseña  :  "<<a.contrasena<<endl;
     cout<<"el usuario  "<<a.usuario<<" fue eliminado exitosamente!!!"<<endl;
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





