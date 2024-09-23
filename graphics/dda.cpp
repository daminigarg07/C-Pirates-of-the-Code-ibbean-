#include<graphics.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	float x,y,x1,y1,x2,y2,dx,dy,step;
	cout<<"enter values: "<<endl;
	cin>>x1>>y1>>x2>>y2;
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	if(dx>=dy)
	{
		step=dx;
	}
	else
	{
		step=dy;
	}
	dx=dx/step;
	dy=dy/step;
	x=x1;
	y=y1;
	int i=1;
	while(i<=step)
	{
		putpixel(x,y,5);
		x=x+dx;
		y=y+dy;
		i++;
	}
	getch();
	getch();
	closegraph();
	return(0);
}