//2.- se desea contar el numero de letras de a y el numero de letras de c de una frase determinada
#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;
void contar_letras(char cade[],int t);
int main(){
	char frase[25];
	int letra_a=0,letra_c=0;
	
	cout<<"INGRESE UNA FRASE DETERMINADAA EN UN PUNTO :"<<endl;
	cin.getline(frase,25,'\n');
	for(int i=0;i<25;i++){
		switch(frase[i]){
		case 'a':letra_a++;
		break;
		case 'c':letra_c++;
		break;
		}
	}
	cout<<"letra a se repite"<<letra_a<<"veces"<<endl;
	cout<<"letra c se repite"<<letra_c<<"veces"<<endl;
getch();
return 0;
}


