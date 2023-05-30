#include <iostream>
using namespace std;

float emit=0, ext=0, pt=0;

void est_emi(){
	cout<<"Cuantos cursos desea tomar?:"<<endl;
	int c;
	float monto;
	cin>>c;
	if(c<=5){
		if(c==5){
			cout<<"Toma los 5 cursos, tiene descuento de 10%"<<endl;
			monto=50-50*0.1;
			cout<<"Usted paga: "<<monto<<" $."<<endl;
			cout<<endl;
		}
		else{
			cout<<"No tiene descuento, toma solo "<<c<<" cursos."<<endl;
			monto=c*10;
			cout<<"Usted paga: "<<monto<<" $."<<endl;
			cout<<endl;
		}
	}
	else{
		cout<<"Solo se tiene 5 cursos disponibles, tomará los 5."<<endl;
		monto=50-50*0.1;
		cout<<"Usted paga: "<<monto<<" $."<<endl;
		cout<<endl;
	}
	
	emit=emit+monto;
}

void externo(){
	cout<<"Cuantos cursos desea tomar?:"<<endl;
	int c;
	float monto;
	cin>>c;
	if(c<=5){
		if(c==5){
			cout<<"Toma los 5 cursos, tiene descuento de 10%"<<endl;
			monto=75-75*0.1;
			cout<<"Usted paga: "<<monto<<" $."<<endl;
			cout<<endl;
		}
		else{
			cout<<"No tiene descuento, toma solo "<<c<<" cursos."<<endl;
			monto=c*15;
			cout<<"Usted paga: "<<monto<<" $."<<endl;
			cout<<endl;
		}
	}
	else{
		cout<<"Solo se tiene 5 cursos disponibles, tomará los 5."<<endl;
		monto=75-75*0.1;
		cout<<"Usted paga: "<<monto<<" $."<<endl;
		cout<<endl;
	}
	
	ext=ext+monto;
}

void profesional(){
	cout<<"Cuantos cursos desea tomar?:"<<endl;
	int c;
	float monto;
	cin>>c;
	if(c<=5){
		if(c==5){
			cout<<"Toma los 5 cursos, tiene descuento de 10%"<<endl;
			monto=100-100*0.1;
			cout<<"Usted paga: "<<monto<<" $."<<endl;
			cout<<endl;
		}
		else{
			cout<<"No tiene descuento, toma solo "<<c<<" cursos."<<endl;
			monto=c*20;
			cout<<"Usted paga: "<<monto<<" $."<<endl;
			cout<<endl;
		}
	}
	else{
		cout<<"Solo se tiene 5 cursos disponibles, tomará los 5."<<endl;
		monto=100-100*0.1;
		cout<<"Usted paga: "<<monto<<" $."<<endl;
		cout<<endl;
	}
	
	pt=pt+monto;
}


int main(){
	int n;
	cout<<"Ingrese el numero de asistentes:"<<endl;
	cin>>n;
	for(int con=0;con<n;con++){
		cout<<endl;
		cout<<"Ingrese que tipo de asistente es el asistente "<<con+1<<":"<<endl;
		cout<<"Ingrese 1, si es estudiante de la E.M.I."<<endl;
		cout<<"Ingrese 2, si es externo."<<endl;
		cout<<"Ingrese 3, si es profesional."<<endl;
		int a;
		cin>>a;
		if(a<=200){
			switch(a){
			case 1:
				est_emi();
				break;
			case 2:
				externo();	
			 	break;
			case 3:
			 	profesional();
				 break;	
			}
		}
		else{
			cout<<"El auditorio solo tiene capacidad para 200 personas."<<endl;
		}
	}
	cout<<"El monto recaudado de estudiantes de la EMI es de: "<<emit<<" $."<<endl;
	cout<<"El monto recaudado de personas externas es de: "<<ext<<" $."<<endl;
	cout<<"El monto recaudado de profesionales es de: "<<pt<<" $."<<endl;
	cout<<"El monto total recaudado es de: "<<emit+ext+pt<<" $."<<endl;
	return 0;
}
