#include<graphics.h>
#include<math.h>
#define TAU 6.283185307
/*En mi propia experiencia escribiendo código que funciona con ángulos y rotaciones,
 descubrí que usar Tau da como resultado un código mucho más limpio. Algunos ejemplos*/
class complejo {

    public:
    float real=0, imag=0;
    complejo(float r = 0, float i =0)  
	{
		real = r;
		imag = i;
	}
    complejo operator + (complejo const &obj) 
	{
         complejo solu;
         solu.real = real + obj.real;
         solu.imag = imag + obj.imag;
         return solu;
    }
    complejo operator - (complejo const &obj) 
	{
         complejo res;
         res.real = real - obj.real;
         res.imag = imag - obj.imag;
         return res;
    }
    complejo operator * (complejo const &obj) 
	{
		//La palabra clave const especifica que el valor de una variable es constante y 
		//le dice al compilador que evite que el programador lo modifique.
         complejo res;
         res.real = real*obj.real - imag*obj.imag;
         res.imag = real*obj.imag + imag*obj.real;
         return res;
    }
    complejo operator / (complejo const &obj) 
	{
         complejo res;
         res.real = (real*obj.real + imag*obj.imag) / (obj.real*obj.real + obj.imag*obj.imag);
         res.imag = (-real*obj.imag + imag*obj.real) / (obj.real*obj.real + obj.imag*obj.imag);
         return res;
    }
};

float abs(complejo z)
{
	return sqrt(z.real*z.real+z.imag*z.imag);//raizcuadrada
}

float arg(complejo z)
{
	return atan2(z.imag,z.real);
	/* atan2 calcula el valor principal del arco tangente y/x,
    utilizando los signos de ambos argumentos para determinar el cuadrante del valor devuelto.*/
}

/*funcion Calcula x elevado a la potencia de y.
 Puede producirse un error de dominio si x es negativo e y no es un valor entero*/
complejo pow(complejo z, int n)
{
	int i;
	complejo z1=complejo(1,0);
	for(i=0;i<n;i++)
		z1=z1*z;
	return z1;	
}
//funcion 
complejo f(complejo z)
{
//	return pow(z,5)-1;
	return pow(z,3)-1;
}
//derivada
complejo df(complejo z)
{
	return z*z*3;
	//return pow(z,4)*5;
}

int main()
{
	int i,j,k,iter=100,shift=5,gd,gm; //iterar, cambio
	float tol=0.0001;
	complejo z;
	detectgraph(&gd,&gm);     //detectagrafo
	initgraph(&gd,&gm,NULL);  //grafico inicial
	delay(1000);
	for( i=0;i<=675;i++)
	{
		for(j=0;j<=675;j++)
		{
			z = complejo(i*4.0/675-2,-j*4.0/675+2);
			//le mandamos a la clase los parametros
			for(k=0;k<iter;k++)
			{
				if(abs(f(z)) < tol)
					break;
				z=z-f(z)/df(z);
				//esta derivando la funcion 
			}
			if(k!=iter)
			{
				putpixel(i,j,1+(k+shift)%14);
				putpixel(i+675,j,1+int(shift+tol+(arg(z)*14/TAU+8))%14);
				//pintamos el fractal
				//color especifica el valor del color del píxel
			}
		}
	}
	getch();
	closegraph();
	return 0;
}
