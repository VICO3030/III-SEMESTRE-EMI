#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

class Calificar
{
	string *name;
	int *notas;
	public :
		Calificar()
		{   name= new string[20];
		    notas=new int[20];
		    for(int j=0;j<20;j++){
			*(notas+j)=1+rand()%(0+100);
			}
			name[0]="juan peres";
			name[1]="jesus paco";
			name[2]="manuel mollo";
			name[3]="jael soliz";
			name[4]="Santiago nicolas";
			name[5]="jhaz ayala";
			name[6]="alenjandro toranzo";
			name[7]="ana jala";
			name[8]="andrez gutierrez";
			name[9]="jhoan mamani";
			name[10]="Erika mamani";
			name[11]="sergio opaci";
			name[12]="luis mamani";
			name[13]="cesar cervantes";
			name[14]="Victor adolfo";
			name[15]="juanpa cervantes";
			name[16]="concepciona mora";
			name[17]="Dilan sandoval";
			name[18]="beymar mora";
			name[19]="celeste paco";
		}
	    void impresion(string m[],int n[],int t){
	        for (int p=0;p<t;p++){
	     	cout<<"[ "<<name[p]<<" ]  --> Tiene la nota de  = "<<*(n+p)<<endl;
	        }
        }
        
    void reporte(){
	int tamAp=0,tamRep=0;
	string *nomAp=new string[20];
	string *nomRep=new string[20];
	int *notAp=new int [20];
	int *notRep=new int [20];
	cout<<"-------------------------------------"<<endl;
	cout<<"LA NOSTAS SON "<<endl;
	impresion(name,notas,20);
	aprobados(nomAp,notAp,tamAp);
	reprobados(nomRep,notRep,tamRep);
	cout<<"-------------------------------------"<<endl;
	cout<<"LAS NOTAS DE LOS APROBADOS SON :"<<endl;
	cout<<endl;
	impresion (nomAp,notAp,tamAp);
	cout<<endl;
	cout<<"LA NOTAS DE LOS REPROBADOS SON :"<<endl;
	cout<<endl;
	impresion(nomRep,notAp,tamRep);
	cout<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"La mayor nota es : "<<obtenerMayor()<<endl;
	cout<<"La menor nota es :"<<obtenerMenor()<<endl;//nosotros elaboramis
	
	
	if(tamAp==0){
		cout<<"No existe promedio de aprobados"<<endl;
		cout<<"Tampoco se tienen estudiantes con notas mayores a 80"<<endl;
	}
	else{  
		cout<<promedioAp(notAp,tamAp)<<endl;
		cout<<"LISTA DE NOTAS MAYORES A 80"<<endl;
		listaMayores(nomAp,notAp,tamAp);
	}
}
        
        
        
        
        

        
        
        
        //debemos crear el void de aprobados ojito pendientes
       void aprobados(string t[],int e[],int &ta)
       {
	      for(int i=0;i<20;i++){
		    if(notas[i]>50){
		    	e[ta]=notas[i];
			    t[ta]=name[i];
			    ta++;
		    }
	      }
       }
       //vector de resprobados
        void reprobados(string t[],int e[],int &ta)
        {
	        for(int i=0;i<20;i++){
		         if(notas[i]<50){
			    e[ta]=notas[i];
			    t[ta]=name[i];
			    ta++;
	          	}
        	}
        }
        //obteniendo la mayor nota
        int obtenerMayor(){
	      int ma;
		  ma=notas[0];
	      for(int k=0;k<20;k++){
	        	if(ma<notas[k]){
			     ma=notas[k];
		        }
	      }
      	   return ma;
        }
        //obteniendo la menor nota
        int obtenerMenor()
        {
        	int menor;
        	menor=notas[0];
        	for(int i=0;i<20;i++)
        	{
        		if(menor>notas[i])
        		menor=notas[i];
			}
			return menor;
		}
	float promedioAp(int v[],int ta){
		float acum=0;
		for (int p=0;p<ta;p++){
			acum=acum+v[p];
		}
		return acum/ta;
	}		
		
	void listaMayores(string name[],int v[],int ta)
	{   for (int p=0;p<ta;p++){
		  if (v[p]>80){
		  	cout<<name[p]<<" con nota de : "<<v[p]<<endl;
		  }
	   }
	}
   




};



main()
{
	srand(time(NULL));
	Calificar notas;
	notas.reporte();
	return 0;
}
