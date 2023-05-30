#include<iostream>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<cstdlib>



using namespace std;

//CONSTANTES : son  DIMENSIONES DE  NUESSTRA PANTALLA
const-int WIDTH=800, HEIGHT=600;

//dimensiones de nuestros pixeles
const int dW=8 , dH=16

//800/8=100 y 600/16=37.5; para crear nuestro mapa


void gotoxy(int x, int y ){
HANDLE hcon= GetStdHandle(STD_OUTPUT_HANDLE);
    COORD  dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);f
}

void convertir(int P[2],float x,float y)
{
	P[0] = int(x)/dW;   //solo agrramos la parte entera
	P[1] = int(y)/dH;
}

void convertir(int p[2] ,int x, int y)    //floatantes a enteros 
{
	p[0]  = x/dW;
	p[1]  = y/dH;
}
 
 /*funcion dibujar , se encarhga de dibujar los mapas , los captus 
 los obajetos las aves  entre otros*/
 void drawpoint(char plano[HEIGHT/dH][WIDTH/dW+1],int A, int B, char c)//alto ,ancho
 {
 	B=HEIGHT/dH-1-B;
 	if(A<0||B<0|| A>= WIDTH /dW ||B>= HEIGHT /dH )return ;//verifica a y b no se salen de nuestro mapa
    plano[B][A]=c;
    
    
 }  

class Mapa
{
	private:
		float n(float x)
		{
			return 0;
		}
	
	public:
		float f(float x)
		{
			return (n(x)+1.0f)/2.0f;// definicion  el 1 y 2 en flotantes f referencia
		}
		
		void dibujar(char plano[HEIGHT/dH][WIDTH/dW+1])
		{
			for(int i =0;i<WIDTH/dW;i++)
			{
				int P[2];
				int j_inicio=f(i*dW)/dH;
				
				for(int j=j_inicio;j>=0;j--)
				{
					convertir(P,i*dW,j*dH);
					drawpoint(planno,P[0],P[1],'o');
				}
				convertir(P,i*dW,j_inicio*dH);
				drawpoint(planno,P[0],P[1],'#');
			}
		}
		
};






int main()
{
	Mapa map;
	char plano[HEIGHT/dH][WIDTH/dW+1];//altura 37 anchop tiene 100+1 =101;
	for(int i=0;i<HEIGHT/dH;i++)
	{
		plano[i][WIDTH/dW]='\n';
	}
	plano[HEIGHT/dH+1][WIDTH/dW]='\O';//altura +1 
	
	while(true)
	{
		gotoxy(0,0);
		for(int i=0;i<HEIGHT/dH; i++)
		{
			for(int j=0;i<WIDTH/dW; j++)
			{
				plano[i][j]='*';
			}
		}
	}
	map.dibujar(plano);
	puts (plano[0]);  //nos diuja un array
	
	return 0;}
