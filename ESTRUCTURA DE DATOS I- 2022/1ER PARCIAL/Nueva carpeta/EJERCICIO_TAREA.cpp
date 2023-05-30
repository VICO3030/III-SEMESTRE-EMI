#include<iostream>
#include<string.h>
#include<time.h>
using namespace std;
class Postulante{
	float porcentaje,preg_correc,total_pregun;
	int n,op=0;
	public :
		void porcentajes();
		void postulantes();
};
void Postulante::postulantes()
{
	do{
	cout<<"ingrese la cantidad de postulantes  : ";
    cin>>n;
    if (n<=0)	cout<<"Error, no se aceptan negativos o ceros, vuelva a ingresar !"<<endl;
    break;
	}while(0<=n);
	system ("pause");
}
// implementacion de los porcentajes
void Postulante::porcentajes(){
	while(op!=n){
	cout << "Ingresa el valor de preguntas correctas: ";
    cin >> preg_correc;
    cin.get();
    cout << "Ingresa el valor de total de preguntas: ";
    cin >> total_pregun;
    cin.get();
    porcentaje=100.0*preg_correc/total_pregun;
    if(porcentaje>=90)
        cout << "-----Nivel maximo---" << endl;
    if(porcentaje>=75&&porcentaje<90)
        cout << "------Nivel medio----" << endl;
    if(porcentaje>=50&&porcentaje<75)
        cout << "----Nivel regular----" << endl;
    if(porcentaje<50)
        cout << "----Fuera de nivel---" << endl;
    cout << "Valor de porcentaje: " << porcentaje << endl;
    cout << endl;
    op=op+1;
   }
    system ("pause");
}
int main(){
	Postulante mostrar;
	mostrar.postulantes();
	mostrar.porcentajes();
	return 0;
}

