#include<graphics.h>
#include<dos.h>
int main()
{
int gd=DETECT, gm;
initgraph(&gd, &gm, (char*)"");
for(int i=0;i<=700;i++)
{
line(0+i,400,700+i,400); //road
line(50+i,350,110+i,350); //base 1 front
arc(140+i,350,0,180,30);
line(170+i,350,230+i,350); //base2 mid
arc(260+i,350,0,180,30);
line(290+i,350,350+i,350); //base3 back end
line(50+i,350,50+i,310); // front
line(50+i,310,100+i,240); //slant
line(100+i,240,220+i,240); //top
line(350+i,350,350+i,310); //back
line(220+i,240,350+i,310);// back slant
circle(140+i,350,25); //tyer
circle(260+i,350,25); //tyer
rectangle(100+i,250,160+i,290);
rectangle(170+i,250,230+i,290);
cleardevice();
}
for(int i=500;i>=0;i--)
{
line(0+i,400,700+i,400); //road
line(50+i,350,110+i,350); //base 1 front
arc(140+i,350,0,180,30);
line(170+i,350,230+i,350); //base2 mid
arc(260+i,350,0,180,30);
line(290+i,350,350+i,350); //base3 back end
line(50+i,350,50+i,310); // front
line(50+i,310,100+i,240); //slant
line(100+i,240,220+i,240); //top
line(350+i,350,350+i,310); //back
line(220+i,240,350+i,310);// back slant
circle(140+i,350,25); //tyer
circle(260+i,350,25); //tyer
rectangle(100+i,250,160+i,290);
rectangle(170+i,250,230+i,290);
cleardevice();
}
delay(1000);
getch();
closegraph();
return 0;
}