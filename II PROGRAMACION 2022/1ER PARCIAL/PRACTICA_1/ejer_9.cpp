//ejercicio9
#include<iostream>
using namespace std;
void menu();

int main() {
	int opcion,n;
	menu();
	cout<<"ELIJA EL COLEGIO = "<<endl;
	cin>>opcion;
	switch(opcion) {
		case 1:
			cout<<"Ingrese el nro de su  categoria "<<endl;
			cin>>n;
			if (n==1) {
				cout<<"EL PAGO DE SU EXAMEN DE ADMISION ES DE 300"<<endl;
			}
			if (n==2) {
				cout<<"EL PAGO DE SU EXAMEN DE ADMISION ES DE 200"<<endl;
			}
			if (n==3) {
				cout<<"EL PAGO DE SU EXAMEN DE ADMISION ES DE 100"<<endl;
			}
			//lamada
			break;
		case 2:
			cout<<"Ingrese el la categoria "<<endl;
			cin>>n;
			if (n==1) {
				cout<<"EL PAGO DE SU EXAMEN DE ADMISION ES DE 400"<<endl;
			}
			if (n==2) {
				cout<<"EL PAGO DE SU EXAMEN DE ADMISION ES DE 300"<<endl;
			}
			if (n==3) {
				cout<<"EL PAGO DE SU EXAMEN DE ADMISION ES DE 200"<<endl;
			}
			//lamada
			break;
		default:
			cout<<"ERROR OPCION  NO VALIDA .....!!!!!! ";
			break;
			return 0;
	}
}

void menu() {
	cout<<"-----------------------CATEGORIA------------------"<<endl;
	cout<<""<<endl;
	cout<<"[COLEGIO]            [1]         [2]         [3]"<<endl;
	cout<<" 1.Estatal           300         200         100 "<<endl;
	cout<<" 2.Particular        400         300         200"<<endl;
	cout<<"--------------------------------------------------"<<endl;
}
