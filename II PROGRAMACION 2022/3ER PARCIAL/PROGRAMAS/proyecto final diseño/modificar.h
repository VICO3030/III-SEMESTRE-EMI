#include <iostream>
#include <string.h>
//#include "structs.h"
#include<locale.h>
using namespace std;


void modif_fichero(FILE* f,Productos r) {
	int i,pos;
	char co[10];
	bool bandera;
	system("cls");
	if((f=fopen("Products.dat","r+b"))==NULL) {
		
		cout<<"\t\terror en apertura";
	} else {
		cout<<endl;
		cout<<"\n\t\t________________________________________________________________"<<endl;
		cout<<"\t\t|                        CHARMAVENTAS                           |"<<endl;
		cout<<"\t\t|_______________________________________________________________|"<<endl;
		cout<<"\t\tINGRESE EL NOMBRE  DEL PRODUCTO  QUE DESEA MODIFICAR : "<<endl;
		cout<<"\t\t";cin>> co;
		fread(&r,sizeof(r),1,f);
		while(!feof(f)&& !bandera ) {
			if (strcmp(co,r.NombreProducto) == 0 ) {
				cout<<"\n\t\t----------------------------------------------------------"<<endl;
				cout<<"\t\tLOS DATOS QUE PUEDE MODIFICAR SON: "<<endl;
				cout<<" "<<endl;
				cout<<"\t\tPRODUCTO: "<<r.NombreProducto<<endl;
				cout<<" "<<endl;
				cout<<"\t\tPRECIO: "<<r.productPrice<<endl;
				cout<<" "<<endl;
				cout<<"\n\t\t-----------------------------------------------------------"<<endl;
				cout<<"\t\tMODIFIQUE LOS DATOS "<<endl;
				cout<<"\t\tPRODUCTO: ";cin>>r.NombreProducto;
				cout<<" "<<endl;
				cout<<"\t\tPRECIO: ";cin>>r.productPrice;
				cout<<" "<<endl;
				cout<<"\n\t\t----------------------------------------------------------------"<<endl;
				pos = ftell(f)-sizeof(r);
				fseek(f,pos,SEEK_SET);
				fwrite(&r,sizeof(r),1,f);
				bandera=true;
				cout<<"\t\tLOS DATOS FUERON MODIFICADOS CORRECTAMENTE "<<endl;
				break;
			}
			if(feof(f) || bandera == false) {
				cout<<"\n\t\tCodigo no se encuentra en el fichero!!!!"<<endl;
			}

			fread(&r,sizeof(r),1,f);

		}
	}
	fclose(f);
}

void Mostra_Producto(FILE* f,Productos r)
{
	if((f= fopen("Products.dat","rb"))== NULL)
	{
		cout<<"\n\t\tError en apertura del fichero para la lectura"<<endl;
	}
	else{
		fread(&r, sizeof(Productos),1, f);
		cout<<"\n\t-------------------------------------------------------------------------------------------------------------------\n"<<endl;
		cout<<"\t                          PRODUCTOS REGISTRADOS 									"<<endl;
		cout<<"\t---------------------------------------------------------------------------------------------------------------------\n"<<endl;
		cout<<"\t[ ID  ]\t\t[ Nombre del Producto ] \t\t[ Precio ]\t\t"<<endl;
		cout<<"\n\t-------------------------------------------------------------------------------------------------------------------\n"<<endl;
		while(!feof(f)){
		cout<<"\t["<<r.id<<" ]\t\t\t["<<r.NombreProducto<<"]\t\t\t\t["<<r.productPrice<<"]"<<endl;
		cout<<"\n\t-------------------------------------------------------------------------------------------------------------------\n"<<endl;
		fread (&r, sizeof(Productos), 1, f);
		}
		fclose (f);
	}	
}

void Mostrar_Usuario(FILE *f, Usuarios u)
{
	setlocale(LC_ALL,"spanish");
	if ((f = fopen("UsersData.dat", "rb")) == NULL)
	{
		cout<<"\n\t\tError en apertura del fichero para la lectura"<<endl;
	}
	else{
		fread(&u, sizeof(Usuarios),1, f);
		cout<<"\n\t-----------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
		cout<<"\t                        									  USUARIOS REGISTRADOS  									"<<endl;
		cout<<"\t-------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
		cout<<"\t[  ID	]\t\t[ Nombre ] \t\t[  Telefono  ]\t\t\t[Email ] \t\t\t [ Contraseña ]"<<endl;
		cout<<"\n\t-----------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
		while(!feof(f)){
		cout<<"\t["<<u.id<<" ]\t\t\t["<<u.nombreUsuario<<"]\t\t\t ["<<u.telefono<<"]"<<"\t\t["<<u.email<<"]\t\t  ["<<u.psw<<"]"<<endl;
		cout<<"\n\t-----------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
		fread (&u, sizeof(Usuarios), 1, f);
		}
		fclose (f);
	}	
}




