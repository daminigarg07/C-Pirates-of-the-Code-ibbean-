#include<graphics.h>
int main()
{
int gd=DETECT, gm;
initgraph(&gd, &gm, (char*)"");
ellipse(250,200,0,360,100,50);
setcolor(RED);
circle (320,240,50);
setcolor(YELLOW );
circle (320,240,40);
setcolor(LIGHTGREEN);
circle (320,240,30);
setcolor(LIGHTBLUE);
circle (320,240,20);
setcolor(BLUE);
circle (320,240,10);
setcolor(MAGENTA);
circle (320,240,1);
getch();
closegraph();
return 0;
}