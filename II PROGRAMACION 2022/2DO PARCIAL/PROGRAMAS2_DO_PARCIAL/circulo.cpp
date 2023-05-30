#include<graphics.h>
int main()
{
	int gd=DETECT, gm;
	initgraph(&gd,&gm,(char*)"");
	rectangle(320,240,200,128);
	rectangle(320,240,200,128);
	getch();
	closegraph();
	return 0;
}
