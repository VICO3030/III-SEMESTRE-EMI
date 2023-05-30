#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <iomanip>
using namespace std;

struct Cajero{
    char usuario[10];
    char contrasena[20];
    float npag;
};
void menu(){
cout<<"--------------------------\n";
cout<<"\n   MENU DE OPCIONES     \n";
cout<<"--------------------------\n";
cout<<"  1-Iniciar cesion \n";
cout<<"  2- Mostrar Cuenta    \n";
cout<<"  3- Salir                \n";
cout<<" Que desea hacer? ";
}
void crear_cuenta( FILE *fich) {
    int i,n;
    Cajero a;//variable de tipo Cajero
    if ((fich = fopen("biblio.dat", "wb")) == NULL)
    {
    cout<<"Error en apertura del fichero para escritura\n";
    }
    else{
    cout<<"Cuantas cuentas desea crear ? ";
    cin>>n;
    for (i=1; i <=n; i++){
        cout<<"Ingrese su usuario : ";fflush(stdin);gets(a.usuario);fflush(stdin);
        cout<<"Ingrese su contraseña : ";fflush(stdin);gets(a.contrasena);fflush(stdin);
        cout<<"Ingrese el monto de dinero que va depositar : ";cin>>a.npag;
        fwrite(&a, sizeof(a), 1, fich);
        }
        fclose (fich);
      }
    }
void modifica_cuenta( FILE *fich){
    char cod[10];float retiro;
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
        cout<<"Ingrese el monto que desea retirar de dinero   : ";cin>>retiro;cout<<endl;
        cout<<"Saldo actual es de  : "<<a.npag-retiro;
        pos=ftell(fich)-sizeof(Cajero);//obtiene la posicion del registro que se quiere modificar
        fseek(fich,pos,SEEK_SET);
        fwrite(&a, sizeof(Cajero), 1, fich);
        cout<<"\nEl retiro del dinero se dio Correctamente!!!\n";
        band=1;
        }
        fread(&a, sizeof(a), 1, fich);
    }
    if (band==0)
       cout<<"CONTRASEÑA INCORECTA  !!!\n";
    fclose(fich);
}

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
      modifica_cuenta(fich);
     fread (&a, sizeof(Cajero), 1, fich);
      }
     fclose (fich);
     }
     
}


int main()
{FILE *fichero;
FILE *auxiliar;
    system("color 2e");
    setlocale(LC_ALL,"spanish");//comando para mejora mensajes de salida
    int opcion;
    do{
    menu();
    cin>> opcion;
    switch(opcion){
    case 1: system("cls");crear_cuenta(fichero);break;
    case 2: system("cls");mostrar_cuenta(fichero);break;
	case 3:system("pause");break;
    
	}
   }while(opcion!=3);
    return 0;
}

