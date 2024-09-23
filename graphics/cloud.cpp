#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	setcolor(15);
setfillstyle(SOLID_FILL,11);

ellipse(100,50,0,180,25,20);

ellipse(125,70,260,90,20,20);

ellipse(100,90,180,360,20,20);

ellipse(80,70,90,270,20,20);


floodfill(126,71,15);	getch();
	closegraph();
	return(0);
}