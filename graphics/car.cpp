#include<graphics.h>
#include<dos.h>
int main()
{
int gd=DETECT, gm;
initgraph(&gd, &gm, (char*)"");
line(0,400,700,400); //road
line(50,350,110,350); //base 1 front
arc(140,350,0,180,30);
line(170,350,230,350); //base2 mid
arc(260,350,0,180,30);
line(290,350,350,350); //base3 back end
line(50,350,50,310); // front
line(50,310,100,240); //slant
line(100,240,220,240); //top
line(350,350,350,310); //back
line(220,240,350,310);// back slant
circle(140,350,25); //tyer
circle(260,350,25); //tyer
rectangle(100,250,160,290);
rectangle(170,250,230,290);

getch();
closegraph();
return 0;
}