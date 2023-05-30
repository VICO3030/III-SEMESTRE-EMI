#include<iostream>
#include<conio.h>
#include <math.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>
using namespace std;
int RESULTADO;
float RESULTADO2;
 
int Numero1;
int Numero2;
float Numero3;
float Numero4;
 
int Multiplic(int a, int b)
{
    return (a) * (b);
}
 
int Divis(int a, int b)
{
    return (a) / (b);
}
 
int Sum(int a, int b)
{
    return (a) + (b);
}
 
int Rest(int a, int b)
{
    return (a) - (b);
}
 
float RaizCu(float a)
{
    return sqrt(a);
}
 
float Potenc(float base, float exponente)
{
    return pow(base, exponente);
}
void gotoxy(int x, int y)
{
 COORD coord;
 coord.X = x;
 coord.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
} 
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
void getup()
{
    system("cls");
    gotoxy(10,2);
    cout<<"Presiona X para Salir, ESPACIO para Saltar";
    gotoxy(62,2);
    cout<<"PUNTOS : ";
    gotoxy(1,25);
    for(int x=0;x<79;x++)
    cout<<"ß";
}
 
int t,speed=40;
void ds(int jump=0)
{
    static int a=1;
 
    if(jump==0)
        t=0;
    else if(jump==2)
        t--;
    else t++;
    gotoxy(2,15-t);
    cout<<"                 ";
    gotoxy(2,16-t);
    cout<<"         ÜÛßÛÛÛÛÜ";
    gotoxy(2,17-t);
    cout<<"         ÛÛÛÛÛÛÛÛ";
    gotoxy(2,18-t);
    cout<<"         ÛÛÛÛÛßßß";
    gotoxy(2,19-t);
    cout<<" Û      ÜÛÛÛÛßßß ";
    gotoxy(2,20-t);
    cout<<" ÛÛÜ  ÜÛÛÛÛÛÛÜÜÜ ";
    gotoxy(2,21-t);
    cout<<" ßÛÛÛÛÛÛÛÛÛÛÛ  ß ";
    gotoxy(2,22-t);
    cout<<"   ßÛÛÛÛÛÛÛß     ";
    gotoxy(2,23-t);
    if(jump==1 || jump==2){
    cout<<"    ÛÛß ßÛ       ";
    gotoxy(2,24-t);
    cout<<"    ÛÜ   ÛÜ      ";
    }else if(a==1)
    {
    cout<<"    ßÛÛß  ßßß    ";
    gotoxy(2,24-t);
    cout<<"      ÛÜ         ";
    a=2;
    }
    else if(a==2)
    {
    cout<<"     ßÛÜ ßÛ      ";
    gotoxy(2,24-t);
    cout<<"          ÛÜ     ";
    a=1;
    }
    gotoxy(2,25-t);
    if(jump!=0){
        cout<<"                ";
    }
    else
    {
         
        cout<<"ßßßßßßßßßßßßßßßßß";
    }
    delay(speed);
}
void obj()
{
    static int x=0,scr=0;
    if(x==56 && t<4)
    {
    scr=0;
    speed=40;
    gotoxy(36,8);
    cout<<"GAME OVER";
    getch();
    gotoxy(36,8);
    cout<<"         ";
    }
    gotoxy(74-x,20);
    cout<<"Û    Û ";
    gotoxy(74-x,21);
    cout<<"Û    Û ";
    gotoxy(74-x,22);
    cout<<"ÛÜÜÜÜÛ ";
    gotoxy(74-x,23);
    cout<<"  Û    ";
    gotoxy(74-x,24);
    cout<<"  Û  ";
    x++;
    if(x==73)
    {
    x=0;
    scr++;
    gotoxy(70,2);
    cout<<"     ";
    gotoxy(70,2);
    cout<<scr;
    if(speed>20)
        speed--;
    }
}

int main(){
	int op;
	char resp;
	char b;
	
	system("cls");/*limpiar pantalla*/
	cout<<"---------------------------"<<endl;
	cout<<"   MENU DE OPCIONES        "<<endl;
	cout<<"---------------------------"<<endl;
	cout<<" 1.- Calculadora cientifica\n";
	cout<<" 2.- Juego Dino Rex				  \n";
	cout<<" 4.- Salir				  \n";
	cout<<"---------------------------\n";
	cout<<"Elija una opcion "<<endl;
	cin>>op;
	switch(op){
	
	case 1:int a;
    char b;
        cout<<"             _____      _            _           _\n             / ____|    | |          | |         | |\n            | |     __ _| | ___ _   _| | __ _  __| | ___  _ __ __ _ \n";
		cout<<"            | |    / _` | |/ __| | | | |/ _` |/ _` |/ _ \\| '__/ _` |\n            | |___| (_| | | (__| |_| | | (_| | (_| | (_) | | | (_| |\n             \\_____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__,_|\\___/|_|  \\__,_|\n\n\n";
		cout<<"                    _____ _            _   _  __ _ \n                   / ____(_)          | | /_// _(_)\n                  | |     _  ___ _ __ | |_ _| |_ _  ___ __ _ \n";
		cout<<"                  | |    | |/ _ \\ '_ \\| __| |  _| |/ __/ _` |\n                  | |____| |  __/ | | | |_| | | | | (_| (_| |\n                   \\_____|_|\\___|_| |_|\\__|_|_| |_|\\___\\__,_|\n\n\n";
    cout << "Que operacion desea realizar?" << endl;
	cout << "1 - Sumar" << endl; 
    cout << "2 - Restar" << endl;
    cout << "3 - Multiplicar" << endl;
    cout << "4 - Dividir" << endl;
    cout << "5 - Raiz Cuadrada" << endl;
    cout << "6 - Potencia" << endl;
    cout << "7 - Seno" << endl;
    cout << "8 - Coseno" << endl;
    cout << "9 - Tangente" << endl;
	cin >> a;
   
    switch(a)
    {
             case 1:
             cout << "Ingrese el primer numero:" << endl;
             cin >> Numero1;
             
             cout << "Ingrese el segundo numero:" << endl;
             cin >> Numero2;
             RESULTADO = Sum(Numero1, Numero2);
             cout << "Resultado: " << RESULTADO << endl;
             break;
             
             case 2:
             cout << "Ingrese el minuendo:" << endl;
             cin >> Numero1;
             
             cout << "Ingrese el sustraendo:" << endl;
             cin >> Numero2;
             
             RESULTADO = Rest(Numero1, Numero2);
             cout << "Resultado: " << RESULTADO << endl;
             break;
             
             case 3:
             cout << "Ingrese el primer factor:" << endl;
             cin >> Numero1;
             
             cout << "Ingrese el segundo factor:" << endl;
             cin >> Numero2;
             
             RESULTADO = Multiplic(Numero1, Numero2);
             cout << "Resultado: " << RESULTADO << endl;
             break;
             
             case 4:
             cout << "Ingrese el dividendo:" << endl;
             cin >> Numero1;
             
             cout << "Ingrese el divisor:" << endl;
             cin >> Numero2;
             
             RESULTADO = Divis(Numero1, Numero2);
             cout << "Resultado: " << RESULTADO << endl;
             break;
             
             case 5:
             cout << "Ingrese el numero para realizar la raiz:" << endl;
             cin >> Numero3;
             
             RESULTADO2 = RaizCu(Numero3);
             cout << "Resultado: " << RESULTADO2 << endl;
             break;
             
             case 6:
             cout << "Ingrese el numero a potenciar:" << endl;
             cin >> Numero3;
             
             cout << "Ingrese el exponente:" << endl;
             cin >> Numero4;
             
             RESULTADO2 = Potenc(Numero3, Numero4);
             cout << "Resultado: " << RESULTADO2 << endl;
             break;
             
             case 7:
             cout << "Ingrese el angulo de seno:" << endl;
             cin >> Numero3;
             
             RESULTADO2 = sin(Numero3);
             cout << "Resultado: " << RESULTADO2 << endl;
             break;
             
             case 8:
             cout << "Ingrese el angulo de Coseno:" << endl;
             cin >> Numero3;
             
             RESULTADO2 = cos(Numero3);
             cout << "Resultado: " << RESULTADO2 << endl;
             break;
             
             case 9:
             cout << "Ingrese el angulo de Tangente:" << endl;
             cin >> Numero3;
             
             RESULTADO2 = tan(Numero3);
             cout << "Resultado:" << RESULTADO2 << endl;
             break;
 
             default:
             cout << "Operacion incorrecta. Vuelva a intentarlo... n" << endl;
             cout << "********************************************" << endl;
             cout << "******************************************** n" << endl;
             main();
             }
             
             cin.get();
             cout << "Desea salir? (1 - Si, 2 - No)" << endl;
             cin >> b;
             
             switch(b){
                       case '1':
                            return 0;
                            break;
                       case '2':
                            cout << "-------------------------------" << endl;
                            cout << "------------------------------- n" << endl;
                            main();
                            break;
                            }
		   break;
	case 2:
	system("mode con: lines=29 cols=82");
    char ch;
    int i;
    getup();
    while(true)
    {
        while(!kbhit())
        {
            ds();
            obj();
        }
        ch=getch();
        if(ch==' ')
        {
            for(i=0;i<10;i++)
            {
            ds(1);
            obj();
            }
            for(i=0;i<10;i++)
            {
            ds(2);
            obj();
            }
        }
        else if (ch=='x')
            return(0);
    } 
		   break;
	case 3:break;
	default :cout<<"OPCION NO VALIDA VUELVA A INTENTAR!!";
	break; 	
	}
	
return 0;	
}
