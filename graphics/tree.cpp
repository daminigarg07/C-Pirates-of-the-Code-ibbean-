#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	line(60,200,20,180);
	line(60,200,100,180);
	line(20,180,40,180);
	line(100,180,80,180);
	line(40,180,20,160);
	line(80,180,100,160);
	line(20,160,40,160);
	line(80,160,100,160);
	line(40,160,20,140);
	line(80,160,100,140);
	line(20,140,100,140);
	line(50,140,50,100);
	line(70,140,70,100);
	getch();
	closegraph();
	return(0);
}