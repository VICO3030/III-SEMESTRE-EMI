#include<iostream>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<cmath>
#include<cstdlib>

using namespace std;

//CONSTANTES : son  DIMENSIONES DE  NUESSTRA PANTALLA
const int WIDTH=800, HEIGHT=600;

//dimensiones de nuestros pixeles
const int dW=8 , dH=16;

//800/8=100 y 600/16=37.5; para crear nuestro mapa

char dino[2][11][21]={
                     {
                   	  "        мллллллм    ",
                   	  "        ллпллллл    ",
                   	  "        лллллллл    ",
                   	  "        лллллппп    ",
                   	  "л      мллллппп     ",
                   	  "л     мллллл        ",
                   	  "ллм  мллллллпл      ",
                   	  "лллллллллллл п      ",
                   	  " плллллллллп        ",
                   	  "  плллллллп         ",
                     },
                     {
                   	  "                    ",
                   	  "                    ",
                   	  "                    ",
                   	  "                    ",
                   	  "л           млпллллм",
                   	  "ллл  мммммм лллллллл",
                   	  "лллллллллллллллллппп",
                   	  " пллллллллллллллппп ",
                   	  "  плллллллллллл     ",
                   	  "   ллллллллплмпп    ",
					 }
				     };

char saltod[3][2][15] =
					{
	                    {
	                     "   ллп пл     ",
	                     "    мм  мм    ",
	                    },
	                    {
	                     "   ппп пл     ",
	                     "        лм    ",
						},
						{
	                     "   пллп ппп   ",
	                     "    лм        ",
						}
				    };

char trees[5][9][23]=
               {
                   	{
                   	"                     ",
                   	"          л          ",
                   	"    л     лл     л   ",
                   	" л лл   л лл л   лл л",
                   	" л лл л л лл л л лл л",
                   	" лллл л лллллл л лллл",
                   	"   лллл   лл   лллл  ",
                   	"   лл     лл     лл  ",
                   	"   лл     лл     лл  ",
                    },
                    {
                    "                     ",
                  	"      л   л       л  ",
                   	"    л л л лл   л лл  ",
                   	" л лллл лллл л л лл л",
                   	" л лл     лл л л лл л",
                   	" л лл     лл л лллл л",
                   	" л лл     лллл   лллл",
                   	" лллл     лл     лл  ",
                   	"   лл     лл     лл  ",
                    },
                    {
                    "                     ",
					"          л       л  ",
                   	"    л     лл л л лл л",
                   	" л лл л л лл л л лллл",
                   	" л лл л л лллл л лл  ",
                   	" л лллл лллл   лллл л",
                   	" лллл     лл     лл л",
                   	"   лл     лл     лллл",
                   	"   лл     лл     лл  ",
                       }
                   };
char pajaro[2][12][25]=
                    {
                        {
                        "                     ",
                       	"                     ",
                    	"                     ",
                        "   л                 ",
                        "  ллл                ",
                        " ллллл               ",
                        "лллллллллллллллллллл ",
                        "   плллллллллллллпп  ",
                        "     лллп            ",
                        "     ллп             ",
                        "     лп              ",
                        "                     ",
                        },
                        {
                        "                     ",
                       	"                     ",
                    	"                     ",
                        "   л   лп            ",
                        "  ллл  ллп           ",
                        " ллллл лллп          ",
                        "лллллллллллллллллллл ",
                        "   плллллллллллллпп  ",
                        "                     ",
                        "                     ",
                        "                     ",
                        "                     ",
                        }
                    };
struct coord
{

	int x;
	int y;

};
struct pieza
{
	coord peri[93];
	char D[93];
};

pieza car1[2];
pieza car2[3];
pieza car3[5];

void gotoxy(int x, int y )
{
    HANDLE hcon= GetStdHandle(STD_OUTPUT_HANDLE);
    COORD  dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}

void convertir(int P[2],float x,float y)
{
	P[0] = int(x)/dW;   //solo agrramos la parte entera
	P[1] = int(y)/dH;
}

void convertir(int P[2] ,int x, int y)    //floatantes a enteros
{
	P[0]  = x/dW;
	P[1]  = y/dH;
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
			return 0.25*sin(x*0.5);
		}

	public:
		float f(float x)
		{
			return 150*(n(x)+1.0f)/2.0f;// definicion  el 1 y 2 en flotantes f referencia
		}
		void dibujar(char plano[HEIGHT/dH][WIDTH/dW+1], float des)
		{
			for(int i =0;i<WIDTH/dW;i++)
			{
				int P[2];
				// 75
				int j_inicio=f(i*dW+des)/dH;

				for(int j=j_inicio;j>=0;j--)
				{
					convertir(P,i*dW,j*dH);
					drawpoint(plano,P[0],P[1],'o');
				}
				convertir(P,i*dW,j_inicio*dH);
				drawpoint(plano,P[0],P[1],'@');
			}
		}
};

class personaje
{
	private:

		int sal=0;
		float ag = 1.0f;
		float x,y;
		float vy;
		float salto = 800.0f;
		float resultado;
		Mapa *mapa;
		public:

			personaje(float x, Mapa* mapa): x(x),mapa(mapa)
			{
				y=mapa->f(x);
			}
			void dibujar(char plano[HEIGHT/dH][WIDTH/dW+1], int offcam)
			{
				int r,t;
				int P[2];
				convertir(P,x,y);
				P[1]++;
				if(ag>=1.0f)
				{
					r=0;
					t=93;
				}
				else
				{
					r=1;
					t=88;
				}
				for(int i=0;i<t;i++)
				{
					drawpoint(plano,(P[0]+car1[r].peri[i].x),(P[1]+car1[r].peri[i].y),car1[r].D[i]);
				}
				if(sal==1)
				{
					for(int i=0;i<9;i++)
					{
						drawpoint(plano,(P[0]+car2[0].peri[i].x),(P[1]+car2[0].peri[i].y),car2[0].D[i]);
					}
				}
				if(offcam==0 && sal ==0)
				{
					for(int i=0;i<7;i++)
					{
						drawpoint(plano,(P[0]+car2[1].peri[i].x),(P[1]+car2[1].peri[i].y),car2[1].D[i]);
					}
				}
				if(offcam==1 && sal ==0)
				{
					for(int i=0;i<9;i++)
					{
						drawpoint(plano,(P[0]+car2[2].peri[i].x),(P[1]+car2[2].peri[i].y),car2[2].D[i]);
					}
				}
			}
			void dibujartrees(char plano[HEIGHT/dH][WIDTH/dW+1], float X)
			{
				int P[2];
				convertir(P,X,y);
				for(int i=0;i<73;i++)
				{
					drawpoint(plano,P[0]+car3[0].peri[i].x,P[1]+car3[0].peri[i].y,car3[0].D[i]);

				}
			}
			void pasar1()
			{
			    for(int t =0;t<2;t++)
				{
				//л   п   м
				    int q=0;
				    int y;
					for(int i=0; i<11;i++)
					{
						y = 11-i;
						for(int j=0;j<21;j++)
						{
							if(dino[t][i][j]== 'л')
							{
								car1[t].peri[q] = {j,y};
								car1[t].D[q] = 'л';
								q++;
							}
							if(dino[t][i][j]== 'п')
							{
								car1[t].peri[q] = {j,y};
								car1[t].D[q] = 'п';
								q++;
							}
							if(dino[t][i][j]== 'м')
							{
								car1[t].peri[q] ={j,y};
								car1[t].D[q] = 'м';
								q++;
							}
						}
					}
				}

			}

			void pasar2()
			{
				for(int t =0;t<3;t++)
				{
				//л   п   м
				    int q=0;
				    int y;
					for(int i=0; i<2;i++)
					{
						y = 1-i;
						for(int j=0;j<15;j++)
						{
							if(saltod[t][i][j]== 'л')
							{
								car2[t].peri[q] = {j,y};
								car2[t].D[q] = 'л';
								q++;
							}
							if(saltod[t][i][j]== 'п')
							{
								car2[t].peri[q] = {j,y};
								car2[t].D[q] = 'п';
								q++;
							}
							if(saltod[t][i][j]== 'м')
							{
								car2[t].peri[q] ={j,y};
								car2[t].D[q] = 'м';
								q++;
							}
						}
					}
				}
			}
			void pasar3()
			{
				for(int t =0;t<5;t++)
				{
					int q=0;
					int y=0;
					for(int i=0;i<9;i++)
					{
						y=8-i;
						for(int j=0;j<23;j++)
						{
							if(trees[t][i][j] == 'л')
							{
								car3[t].peri[q]={j,y};
								car3[t].D[q]='л';
								q++;
							}
						}
					}
				}
			}
			bool suelo()
			{
				float tem =0.001f;
				float resultado =mapa ->f(x);
				return resultado-tem <=y && y<=resultado+tem;
			}
			void saltar()
			{
				if(suelo())
				{
					if(ag>=1.0f)
					    vy =salto;
					sal = 1;
				}
			}
//192.168.4.69
//192.168.4.1
			void abajo()
		{
				if(suelo())
				{
					y = mapa->f(x); //75
					ag=0.0f;
				}
			}
			void ejecucion(float dt)
			{
				ag+=0.2f;
				//resultado =75;
				vy -= 1150.0f*dt;
				//gotoxy(10,0);cout<<vy;
				resultado=mapa ->f(x);
				y+=dt*vy;
			    //gotoxy(10,1);cout<<vy;
				//gotoxy(10,2);cout<<y;
				if(y<resultado)
				{
					y=resultado;
					sal = 0;
				}
				gotoxy(10,3);cout<<y;
			}

};
//
int main()
{
	char plano[HEIGHT/dH][WIDTH/dW+1];//altura 37 anchop tiene 100+1 =101;
	for(int i=0;i<HEIGHT/dH;i++)
	{
		plano[i][WIDTH/dW]='\n';
	}
	plano[HEIGHT/dH+1][WIDTH/dW]='\O';//altura +1

    Mapa mapa;
	personaje jugador(50.0f,&mapa);

	jugador.pasar1() ;
	jugador.pasar2() ;
	jugador.pasar3() ;

	float fps=24.0f;
	float dt = 1.0f/fps; //0.0416
	float acumulador =0.0f;
	float cambio=0.0f;

	float des=0.0f;
	float X=800.0f;
	int offcam = 0;
	clock_t inicio = clock();

	while(true)
	{
		clock_t final = clock();
		acumulador +=float(final-inicio)/CLOCKS_PER_SEC;
		cambio +=float(final-inicio)/CLOCKS_PER_SEC;
		inicio = final;

		if(acumulador>=0.2f) acumulador =2.0f;
		if(cambio>=0.09f)
		{
			offcam =! offcam;
			cambio = 0.0f;
		}
		while(acumulador >=dt )
		{
			gotoxy(0,0);cout<<acumulador;
			if(GetKeyState(VK_UP)&0x8000)
			{
				jugador.saltar();
			}
			if (GetKeyState(VK_DOWN)&0x8000)
			{
				jugador.abajo();
			}
			des += 500*dt;
			jugador.ejecucion(dt);
			acumulador -=dt;
		}

		gotoxy(0,10);
		for(int i=0;i<HEIGHT/dH; i++)
		{
			for(int j=0;j<WIDTH/dW; j++)
			{
				plano[i][j]='*';
			}
		}

	    mapa.dibujar(plano,des);
	    jugador.dibujartrees(plano,X);
	    jugador.dibujar(plano, offcam);
	    puts (plano[0]);  //nos diuja un array

	}
	return 0;
}

