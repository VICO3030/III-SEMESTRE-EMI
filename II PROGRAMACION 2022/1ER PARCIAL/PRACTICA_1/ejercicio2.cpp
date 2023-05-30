#include <iostream>
using namespace std;
//prototipo de funciones 

float nota_progra(float e , float t1,float t2,float t3);
float mate(float e2 ,float m1,float m2, float m3, float m4, float m5);
int main(){
	float e , t1, t2, t3,e2, m1,m2,m3,m4,m5,resu,resumate,p;
	//programacion
	cout<<"ingrese nota de su examen de programacion "<<endl;
	cin>>e;
	cout <<"ingrese las notas de sus tareas  "<<endl;
	cin>>t1,t2,t3;
	//matematica
	cout <<"ingrese la nota de su examen matematica  "<<endl;
	cin>>e2;
	cout <<"ingrese las notas de sus tareas  "<<endl;
	cin>>m1,m2,m3,m4,m5;
		//llamado a la funcion 
	cout<<"Su nota de progrmacion es :"<<endl;
	resu=nota_progra(e,t1,t2,t3);
	cin>>resu;
	cout<<"si nota de matematica es : "<<endl;
	resumate=mate(e2,m1,m2,m3,m4,m5);
	cin>>resumate;
	cout<<"el promedio de las dos materias es de "<<endl;
	p=(resu+resumate)/2;
	cin>>p;
	return 0;
}

//implementacion de la funciones 
float nota_progra(float e , float t1,float t2,float t3){
	float np,pt;
	pt=(t1+t2+t3)/3;
	np=e*50/100+pt*50/100;
	return np;

}
float mate(float e2 ,float m1,float m2, float m3, float m4, float m5){
	float mp,pt;
	pt=(m1+m2+m3+m4+m5)/3;
	mp=e2*80/100+pt*20/100;
	return mp;
}
 

