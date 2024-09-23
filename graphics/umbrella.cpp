#include<graphics.h>
int main()
{
int gd=DETECT, gm;
initgraph(&gd, &gm, (char*)"");
arc (320,240,0,180,50);
line(270,240,370,240);
line(320,240,320,290);
arc(310,290,180,0,10);
getch();
closegraph();
return 0;
}