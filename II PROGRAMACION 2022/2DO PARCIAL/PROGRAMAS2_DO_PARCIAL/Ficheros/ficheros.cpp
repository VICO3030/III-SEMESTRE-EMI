#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
	char dato;
	int n;
	
	
	FILE *archi;// declaracion de un  puntero al fichero
	archi=fopen(" MIS_DATOS","w");
	if (archi==NULL) //comando que me permite abrir al fichero una funcion fopen _ apertua del fichero
	{
	 cout<<"ERROR EN LA APERTURA DEL FICHERO , ES POSIBBLE QUE NO EXISTA EL FICHERO ";
	}
	else{
	//escribir o anadir datos del fichero
	cout<<"cuantos caracteres se guardara en el fichero "<<endl;
	cin>>n;
	
	for(int i=1;i<=n;i++){
	cout<<"dato que quiere guardar en el fichero ";
	cin>>dato;	
	fputc(dato,archi);
	}

	//escribir o añadir datos al fichero 	
    }
    //leer datos del ficheero
    dato=fgetc(archi);
	while(dato!=EOF){
		cout<<dato<<endl;
		dato=fgetc(archi);
	}
    //cerrar fichero 
	fclose(archi); //cerrar el ficheo
	return 0;
}
