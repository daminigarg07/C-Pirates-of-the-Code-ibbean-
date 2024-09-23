#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	circle(150,150,60);
	circle(130,135,5);
	circle(170,135,5);
	ellipse(150,160,180,0,35,20);
	getch();
	closegraph();
	return(0);
}