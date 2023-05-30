#include<iostream>
using namespace std;
#define ARREGLO_MAX 100
void menu(){
	cout<<"=================================="<<endl;
	cout<<" |        MENU DE OPCIONES      | "<<endl;
	cout<<" |     1.-VISUALIZAR FIGURA 1   | "<<endl;
	cout<<" |     2.-VISUALIZAR FIGURA 2   | "<<endl;
	cout<<" |     3.-VISUALIZAR FIGURA 3   | "<<endl;		
	cout<<" |     4.-   SALIR              | "<<endl;	
	cout<<"=================================="<<endl;
}
void ej1(int a, int b) {
	int i;
	int j;
	int m[ARREGLO_MAX][ARREGLO_MAX];
	for (i=0;i<=a-1;i++) {
		for (j=0;j<=b-1;j++) {
			m[i][j] = (j+1)*(i+1);
		}
	}
	for (i=0;i<=a-1;i++) {
		for (j=0;j<=b-1;j++) {
			cout << "	" << m[i][j];
		}
		cout << "	" << endl;
	}
}

void ej2(int a, int b) {
	int i;
	int j;
	int m[ARREGLO_MAX][ARREGLO_MAX];
	for (i=0;i<=a-1;i++) {
		for (j=0;j<=b-1;j++) {
			m[i][j] = (j+1);
		}
	}
	for (i=0;i<=a-1;i++) {
		for (j=0;j<=b-1;j++) {
			if (i>=j) {
				cout << "	" << m[i][j];
			}
		}
		cout << "	" << endl;
	}
}
void ej3(int a, int b) {
	int i;
	int j;
	int m[ARREGLO_MAX][ARREGLO_MAX];
	int x;
	x = 1;
	i = 0;
	while (i<a) {
		for (j=0;j<=b-1;j++) {
			m[i][j] = x;
			m[i+1][j] = x+1;
			x = x+2;
		}
		i = i+2;
	}
	for (i=0;i<=a-1;i++) {
		for (j=0;j<=b-1;j++) {
			cout << "	" << m[i][j];
		}
		cout << "	" << endl;
	}
}

int main() {
	int c;
	int f;
	int op;
	do{
	system("color 65"); 
	menu();//llamado al menu(invoco al menu)
	cout<<"ELIJA UNA OPCION: ";
	cin >> op;
	switch (op) {
	case 1:
		cout << "Ingrese cantidad de filas" << endl;
		cin >> f;
		cout << "Ingrese cantidad de columnas" << endl;
		cin >> c;
		cout << " " << endl;
		ej1(f,c);
		break;
	case 2:
		cout << "Ingrese cantidad de filas" << endl;
		cin >> f;
		cout << "Ingrese cantidad de columnas" << endl;
		cin >> c;
		ej2(f,c);
	case 3:
		cout << "Ingrese cantidad de filas" << endl;
		cin >> f;
		cout << "Ingrese cantidad de columnas" << endl;
		cin >> c;
		cout << " " << endl;
		ej3(f,c);
	case 4:
		cout << "Hasta luego" << endl;
		break;
	default:
		cout<<"OPCION NO VALIDA!!!"<< endl;
	}
}while(op!=4);
	return 0;
}
