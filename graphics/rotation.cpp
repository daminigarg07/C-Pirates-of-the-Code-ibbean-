#include<graphics.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int gd=DETECT, gm;
initgraph(&gd, &gm, (char*)"");
int x1,x2,x3,y3,y1,y2,r;
cout<<"enter values"<<endl;
cout<<"x1 ";cin>>x1;
cout<<"y1 ";cin>>y1;
cout<<"x2 ";cin>>x2;
cout<<"y2 ";cin>>y2;
cout<<"x3 ";cin>>x3;
cout<<"y3 ";cin>>y3;

cout<<"r ";cin>>r;

line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
r=(3.14*r)/180;
x1=abs(x1*cos(r)-y1*sin(r));
x2=abs(x2*cos(r)-y2*sin(r));
x3=abs(x3*cos(r)-y3*sin(r));
y1=abs(y1*sin(r)+x1*cos(r));
y2=abs(y2*sin(r)+x2*cos(r));
y3=abs(y3*sin(r)+x3*cos(r));

setcolor(YELLOW);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
getch();
closegraph();
return 0;
}