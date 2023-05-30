#include<iostream>
#include<stdlib.h>
#define N 100
#define MAX 1000
using namespace std;

struct Estudiantes{
	string sigla;
	string nombre;
	string fono;
	int edad;
	string carrera;
	double n1;
	double n2;
	double n3;
	}est[20];//VECTOR DE ESTRUCTURAS

/*procedimiento para llenar un arreglo de registros*/
void llenar_resgistro(Estudiantes e[],int tam){
    int i;
   for (i=0;i<tam;i++){
    cout<<"Ingreso de datos estudiante "<<i ;
    cout<<"\nSigla = "; cin>>e[i].sigla;
	cout<<"Nombre? :  "; cin>>e[i].nombre;
	cout<<"Edad : ";cin>>e[i].edad;
	cout<<"Carrera?"; cin>>e[i].carrera;
	cout<<"Fono?"; cin>>e[i].fono;
	cout<<"Nota1? "; cin>>e[i].n1;
	cout<<"Nota2? "; cin>>e[i].n2;
	cout<<"Nota3? "; cin>>e[i].n3;
    cout<<"--------------------------------\n";
	}
}

/*mostrar datos del arreglo de registros*/
void mostrar_registro(Estudiantes e[],int tam){
    int i;
    float prom;
    for (i=0;i<tam;i++){
    prom=(est[i].n1+est[i].n2+est[i].n3)/3;
	cout<<"  "<<i;
	cout<<"\t"<<est[i].sigla;
	cout<<"\t"<<est[i].nombre;
	cout<<"\t"<<est[i].edad;
	cout<<"\t"<<est[i].fono;
	cout<<"\t"<<est[i].carrera;
	cout<<"\t"<<prom<<endl;
	}
}
/*INTERCAMBIO DE DATOS PARA EL ORDENAMIENTO DEL VECTOR*/
void intercambio(Estudiantes v[],int i, int j){
int ed;
double notas;
string aux;
    aux=v[i].nombre;
    v[i].nombre=v[j].nombre;
    v[j].nombre=aux;
    aux=v[i].sigla;
    v[i].sigla=v[j].sigla;
    v[j].sigla=aux;
    ed=v[i].edad;
    v[i].edad=v[j].edad;
    v[j].edad=ed;
    aux=v[i].fono;
    v[i].fono=v[j].fono;
    v[j].fono=aux;
    aux=v[i].carrera;
    v[i].carrera=v[j].carrera;
    v[j].carrera=aux;
    notas=v[i].n1;
    v[i].n1=v[j].n1;
    v[j].n1=notas;
    notas=v[i].n2;
    v[i].n2=v[j].n2;
    v[j].n2=notas;
    notas=v[i].n3;
    v[i].n3=v[j].n3;
    v[j].n3=notas;
}

/*ordenamiento por metodo intercambio directo*/
void ordenamiento(Estudiantes v[],int tam){
  string aux;
  int i,j;
  for(i=0;i<tam;i++){
    for(j=i+1;j<=tam;j++){
      if(v[i].nombre>=v[j].nombre){
        intercambio(v,i,j);
      }
    }
  }
}//fin ordenamiento

/*BUSQUEDA DE UN DATO EN EL VECTOR*/
int busqueda(Estudiantes v[],int tam,string dato){
int c=1,p=-1;
bool band=false;
while(c<=tam && band==false){
if (v[c].nombre==dato){
 band=false;
 p=c;
}
c++;
}
return p;
}//fin busqueda

/*procedimiento mover datos en vector para insercion de dato*/
void mover(Estudiantes v[],int i){

    v[i+1].nombre=v[i].nombre;
    v[i+1].sigla=v[i].sigla;
    v[i+1].edad=v[i].edad;
    v[i+1].fono=v[i].fono;
    v[i+1].carrera=v[i].carrera;
    v[i+1].n1=v[i].n1;
    v[i+1].n2=v[i].n2;
    v[i+1].n3=v[i].n3;

}

/*procedimiento pedir datos par insertar al vector*/
void insertar(Estudiantes v[],int p){
    cout<<"Datos de  estudiante a insertar "<<endl ;
    cout<<"\nSigla? "; cin>>v[p].sigla;
	cout<<"Nombre? "; cin>>v[p].nombre;
	cout<<"Edad?";cin>>v[p].edad;
	cout<<"Carrera?"; cin>>v[p].carrera;
	cout<<"Fono?"; cin>>v[p].fono;
	cout<<"Nota1? "; cin>>v[p].n1;
	cout<<"Nota2? "; cin>>v[p].n2;
	cout<<"Nota3? "; cin>>v[p].n3;

}

//procedimiento insercion de datos en la estructura
void insercion(Estudiantes v[],int *tam,int pos){
int i=*tam;
while(i>=pos){
 mover(v,i);
 i--;
}
insertar(v,pos);
*tam=*tam+1;
}

void Shell( Estudiantes v[], int tam)
{
	int j,k,salt,aux;
	bool fin;
	salt =tam;
	while(salt > 0){
		salt=salt/2;
		do
		{
			fin=true;
			k= tam-salt;
			for(int i=0;i<k;i++)
			{
				j=i+salt;
				if(v[i].edad>v[j].edad)
				{
					aux =v[i].edad;
					v[i].edad=v[j].edad;
					v[j].edad=aux;
					fin = false;
					
				}
			}
		}
		while( fin!=true);
	}
}



/*PROGRAMA PRINCIPAL*/
int main()
{
    int n,posi=0;
    string dato;
	cout<<"Numero de estudiantes?";
	cin>>n;
	cout<<"\nINGRESO DE DATOS DE LOS ESTUDIANTES\n";
    llenar_resgistro(est,n);
    cout<<"\nDATOS DE LOS ESTUDIANTES\n";
    cout<<"\nNRO SIGLA   NOMBRE    EDAD   FONO     CARRERA    PROMEDIO  \n";
    mostrar_registro(est,n);
    cout<<"\nBUSQUEDA DE DATOS DEL ESTUDIANTE EN EL VECTOR ";
    cout<<"\nNombre a buscar \n ";
    cin>>dato;
//    posi=busqueda(est,n,dato);
//    if(posi==-1)
//    	cout<<"\nDATOS DEL ESTUDIANTE SE ENCUENTRAN EN EL VECTOR!!!: \n"<<posi<<endl;
//	
//    else
//    cout<<"\nDATOS DEL ESTUDIANTE SE ENCUENTRAN EN LA POSICION: "<<posi<<endl;
//    cout<<"\nDATOS DEL ESTUDIANTE ORDENADO POR NOMBRE\n";
//    ordenamiento(est,n);
//    cout<<"\nNRO\t   SIGLA\tNOMBRE\tEDAD\tFONO\t\tCARRERA\tPROMEDIO"<<endl;
//    mostrar_registro(est,n);
//    cout<<"POSICION DONDE INSERTAR DATOS?";
//    cin>>posi;
//    insercion(est,&n,posi);
//    mostrar_registro(est,n);
	mostrar_registro(est,n);
	if(n<1){
		cout<<"NOSE PUEDE ORDENAR DEBIDO AQUE SOLO HAY UN DATO "<<endl;
	}
	else {
	cout<<" ===================EL ORDENAMIENTO POR EDAD ============================ "<<endl;
    Shell(est,n);
     mostrar_registro(est,n);
	}


    
    
    
    system("pause");
    
    
    return 0;
}


