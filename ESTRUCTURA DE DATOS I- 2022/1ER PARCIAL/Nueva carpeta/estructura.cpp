#include <iostream>
#include <stdlib.h>
#include <iostream>
#include <time.h>
using namespace std;


int main (void)
{
    float porcentaje, preguntas_correctas, total_de_preguntas;
    int n,op=0;
        cout<<"ingrese la cantidad de postulantes  : ";
    cin>>n;
    
    while(op!=n){
    	
	
    cout << "Ingresa el valor de preguntas correctas: ";
    cin >> preguntas_correctas;
    cin.get();
    cout << "Ingresa el valor de total de preguntas: ";
    cin >> total_de_preguntas;
    cin.get();
    porcentaje=100.0*preguntas_correctas/total_de_preguntas;
    if(porcentaje>=90)
        cout << "Nivel m\240ximo" << endl;
    if(porcentaje>=75&&porcentaje<90)
        cout << "Nivel medio" << endl;
    if(porcentaje>=50&&porcentaje<75)
        cout << "Nivel regular" << endl;
    if(porcentaje<50)
        cout << "Fuera de nivel" << endl;
    cout << "Valor de porcentaje: " << porcentaje << endl;
    cout << endl;
    op=op+1;
    
   }
    system ("pause");
    
    
    return EXIT_SUCCESS;
}
