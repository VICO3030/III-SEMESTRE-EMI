#include <iostream>
#include <locale.h>
using namespace std;

/*Funcion que calcula el precio del helado*/
float precio_helado(string  tipo_helado,int cant_p){
float precio=0;
if(cant_p<=5)
 {
 if(tipo_helado=="Leche")
    precio=5*cant_p;
 if(tipo_helado=="Agua")
    precio=3*cant_p;
 if(tipo_helado=="Crema")
    precio=7.5*cant_p;
 }
else
 {
 if(tipo_helado=="Leche")
    precio=(5-5*0.1)*cant_p;
 if(tipo_helado=="Agua")
    precio=(3-3*0.1)*cant_p;
 if(tipo_helado=="Crema")
    precio=(7.5-7.5*0.1)*cant_p;
 }
return precio;
}
/*Procedimiento */
void compra_helado(int leche,int agua,int crema,float &costo_pedido){
    int i;
    int pl,pa,pc;
    float pretl=0,preta=0,pretc=0;
    cout<<"----------------------------------------------"<<endl;
    for(i=1;i<=leche;i++){
    cout<<"¿Cuantas porciones del helado "<<i<<" de Leche? ";
    cin>>pl;
    pretl=pretl+precio_helado("Leche",pl);
    }
    cout<<"----------------------------------------------"<<endl;
    for(i=1;i<=agua;i++){
    cout<<"¿Cuantas porciones del helado "<<i<<" de Agua? ";
    cin>>pa;
    preta=preta+precio_helado("Agua",pa);
    }
    cout<<"----------------------------------------------"<<endl;
    for(i=1;i<=crema;i++){
    cout<<"¿Cuantas porciones del helado "<<i<<" de Crema? ";
    cin>>pc;
    pretc=pretc+precio_helado("Crema",pc);
    }
    costo_pedido=pretl+preta+pretc;
}
/*PROGRAMA PRINCIPAL*/
int main()
{ int l,a,c;
  float pt=0;
  setlocale(LC_ALL,"spanish");
    cout<<"Cuantos helados de Leche desea? ";
    cin>>l;
    cout<<"Cuantos helados de Agua desea? ";
    cin>>a;
    cout<<"Cuantos helados de Crema desea? ";
    cin>>c;
    compra_helado(l,a,c,pt);
    cout<<"----------------------------------------------"<<endl;
    cout<<"El costo total del pedido es =  "<<pt;
    return 0;
}
