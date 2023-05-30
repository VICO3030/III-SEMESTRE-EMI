#include <iostream>
#include<stdio.h>
using namespace std;
//estructura de lista de clientes
struct datos{
int num;                          
char nombre[20];
char genero;
char ci[7];
};

void crear_fichero(FILE* f,datos r);
void leer_fichero(FILE* f,datos r);
//PROGRAMA PRINCIPAL
int main()
{
FILE *f;	
datos r;
    cout << "ARCHIVOS BINARIOS" << endl;

    crear_fichero(f,r);
    leer_fichero(f,r);
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

		r.num=i;
		cout<<"Ingrese su nombre ";
		fflush(stdin);  //para liberar memoria
		cin>>r.nombre;
		fflush(stdin);
		cout<<"Genero M--> masculino F--> femenino ";
		cin>>r.genero;
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
	cout<<"==================================="<<endl;
	cout<<"===LISTA DE ESTUDIANTES ===="<<endl;
	cout<<"==================================="<<endl;
	cout<<" NUMERO	NOMBRE	GENERO"<<endl;
	fread(&r,sizeof(r),1,f);
	while(!feof(f)){
		cout<<r.num<<"\t"<<r.nombre<<"\t"<<r.genero<<endl;
		fread(&r,sizeof(r),1,f);
	}
}

fclose(f);
}


