#include <iostream>
using namespace std;
float programacion(float e,float t1,float t2,float t3);
float matematica (float em,float tm1,float tm2,float tm3,float tm4,float tm5);
int main(){
	float e,t1,t2,t3,resu_progra,em,tm1,tm2,tm3,tm4,tm5,resumate;
	cout<<"**************PROGRAMACION********************"<<endl;
	cout<<"ingrese la nota de sus tareas de programacion"<<endl;
	cin>>t1;
	cin>>t2;
	cin>>t3;
	cout<<"ingrese la nota de su examen de programacion"<<endl;
	cin>>e;
	resu_progra=programacion(e, t1, t2,t3);
	cout<<"su promedio final de la materia de programacion es de "<<resu_progra<<endl;
	cout<<"--------------MATEMATICA---------------"<<endl;
	cout<<"ingrese la nota de sus tareas de matematicas"<<endl;
	cin>>tm1;
	cin>>tm2;
	cin>>tm3;
	cin>>tm4;
	cin>>tm5;
	cout<<"ingrese la nota de su examen de matematica"<<endl;
	cin>>em;
	resumate=matematica(em,tm1,tm2,tm3,tm4,tm5);
	cout<<"Su promedio final de la materia de matematica es de:"<<resumate<<endl;
	cout<<"------------------------------------------------------------"<<endl;
	cout<<"el promedio de las dos materias es de "<<(resu_progra+resumate)/2<<endl;
	return 0;
}

//funcion de programacion
float programacion(float e,float t1,float t2,float t3){
	float pt,nf;
	pt=(t1+t2+t3)/3;
	nf=pt*0.5+e*0.5;
	return nf;
}

//funcion matematica
float matematica (float em,float tm1,float tm2,float tm3,float tm4,float tm5){
	float pt,nfm;
	pt=(tm1+tm2+tm3,tm4,tm5)/5;
	nfm=pt*0.20+em*0.80;
	return nfm;
}
