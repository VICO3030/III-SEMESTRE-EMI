# include <iostream>
using namespace std;
void llenar(float v[],int t){
	for (int p=0;p<t;p++){
		cout<<"Ingrese elemento posicion "<<p<<" : ";
		cin>>v[p];
	}
}
void imprimir(float v[], int t){
	for (int p=0;p<t;p++){
		cout<<v[p]<<"  ";
	}
	cout<<endl;
}
void intercambiar(float v[],int pos1, int pos2)
{
	float aux;
	aux=v[pos1];
	v[pos1]=v[pos2];
	v[pos2]=aux;
}
// ESTE ALGORITMO DE LA BURBUJA SE REALIZA t-1 VECES, DONDE t ES EL TAMAÑO DEL ARREGLO
// DENTRO DE ESE CICLO SE VAN COMPARANDO LA POSICION ACTUAL CON LA SIGUIENTE
// Y SI SE ENCUENTRA UN VALOR MAYOR A LA IZQUIERDA ESTE SE INTERCAMBIA CON LA DERECHA.
void burbuja(float v[],int t){
	int i, j,temp;
	for(i=1;i<t ;i++){
		for (j=0;j<t-1;j++){
			if (v[j]>v[j+1]){
				intercambiar(v,j,j+1); // llamada al metodo para intercambiar los valores de la posicion j con la j+1
			}	
		}
	}
}
int main()
{
	float a[20];
	int d;
	cout<<"Ingrese el tamanio del vector : ";
	cin>>d;
	llenar(a,d);  // metodo para ingresar los datos a cada posicion del arreglo
    imprimir(a,d); // metodo que imprime los números ingresados
    cout<<"La burbuja : ";
	burbuja(a,d);  // método que ordena utilizando el ordenamiento de la burbuja
	imprimir(a,d);  // metodo que imprime el vector ordenado
	return 0;	
}
