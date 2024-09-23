#include <graphics.h>

#include <dos.h> 
int main()

{

int gd=DETECT,gm;

initgraph(&gd, &gm, (char*)"");
setfillstyle (LTSLASH_FILL, RED);
line (20,200,60,130); 
line (60,130,100,200);
line (20,200, 100,200); //triangle
floodfill(61,140,WHITE); 
line (40,200,40,300); 
line (40,300,250,300); //base
line (250,300,250,200);
line (250,200,100,200);
setfillstyle(LTSLASH_FILL, YELLOW);
floodfill(250,200,WHITE);
line (60,130,260,130); 
line (260,130,290,200);
line(290,200,250,200);
line (250,200,290,200);
line(100,200,60,130);
floodfill(100,140,WHITE);
setfillstyle(HATCH_FILL, MAGENTA);
rectangle (60,300,90,250);

rectangle(120,220,220,270);
circle(87,270,2);
line (120,245,220,245);
line (170,270,170,220);
getchar();
return 0;}