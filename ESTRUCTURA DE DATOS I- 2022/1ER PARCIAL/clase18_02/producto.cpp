#include <iostream >
using namespace std ;
int  multiplicacion(int a, int b )
{
	if (a>1){
		return multiplicacion (a-1,b)+b;
	}
	else
	{   return b;
	}
}
int main (){
	cout<<mutliplicacion(40,516);
	return 0 ;
}
