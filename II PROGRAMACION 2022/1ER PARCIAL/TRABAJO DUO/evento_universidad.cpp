#include <iostream>
#include<locale.h>
using namespace std;

/*procedimiento leer*/
void leer(string &ta,int &nt){
 cout<<"\nTipo de asistente? ";
 cout<<"\nEstudiante || Externo || Profesional : ";
 fflush(stdin);
 cin>>ta;
 fflush(stdin);
 cout<<"\nCuantos tutoriales tomara? ";
 cin>>nt;
}

/*Funcion que calcula el costo del evento*/
float costo_asist(string tipo_asist,int cant_t){
float costo=0;
if(cant_t<5)
 {
 if(tipo_asist=="Estudiante")
    costo=10*6.96*cant_t;
 if(tipo_asist=="Externo")
    costo=15*6.96*cant_t;
 if(tipo_asist=="Profesional")
    costo=20*6.96*cant_t;
 }
else
 {
 if(tipo_asist=="Estudiante")
    costo=(10-10*0.1)*6.96*5;
 if(tipo_asist=="Externo")
    costo=(15-15*0.1)*6.96*5;
 if(tipo_asist=="Profesional")
    costo=(20-20*0.1)*6.96*5;
 }
return costo;
}

/*Procedimiento totalizar */
void evento(int np ,float &rec,float &ree,float &rpr,float &montot){
    int i,nt=0;
    rec=0,ree=0,rpr=0;
    string ta;
    for(i=1;i<=np;i++){
    cout<<"\n----------------------------------------";
    cout<<"\nDatos del asistente "<<i;
    leer(ta,nt);
    if(ta=="Estudiante")
    {
    rec=rec+costo_asist(ta,nt);
    cout<<"\nTotal a pagar del Estudiante EMI es = "<<costo_asist(ta,nt);
    }
    if(ta=="Externo"){
    ree=ree+costo_asist(ta,nt);
    cout<<"\nTotal a pagar del Externo  es = "<<costo_asist(ta,nt);
    }
    if(ta=="Profesional"){
    rpr=rpr+costo_asist(ta,nt);
    cout<<"\nTotal a pagar del profesional es = "<<costo_asist(ta,nt);
    }
    montot=rec+ree+rpr;
}
}
/*PROGRAMA PRINCIPAL*/
int main()
{ int a;
  float cec=0,cee=0,cpr=0,cte;
    cout<<"Cuantos asistentes tiene el evento? ";
    cin>>a;
    evento(a,cec,cee,cpr,cte);
    cout<<"\n----------------------------------------------------------\n";
    cout<<"MONTOS RECAUDADOS POR  TIPO DE ASISTENTES \n";
    cout<<"----------------------------------------------------------\n";
    cout<<"Monto recaudado del tipo ESTUDIANTES EMI es = "<<cec;
    cout<<"\nMonto recaudado del tipo ESTUDIANTES EXTERNOS es = "<<cee;
    cout<<"\nMonto recaudado del tipo PROFESIONALES "<<cpr;
    cout<<"\n-----------------------------------------------------------\n";
    cout<<"MONTO TOTAL RECAUDADO EN EL EVENTO ES = "<<cte;
    cout<<"\n---------------------------------------------------------\n";
    return 0;
}


