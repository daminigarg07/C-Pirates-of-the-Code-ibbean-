#include<graphics.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int gd=DETECT, gm;
initgraph(&gd, &gm, (char*)"");
int x1,x2,x3,y3,y1,y2,sx,sy;
cout<<"enter values"<<endl;
cout<<"x1 ";cin>>x1;
cout<<"y1 ";cin>>y1;
cout<<"x2 ";cin>>x2;
cout<<"y2 ";cin>>y2;
cout<<"x3 ";cin>>x3;
cout<<"y3 ";cin>>y3;

cout<<"sx ";cin>>sx;
cout<<"sy ";cin>>sy;
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);

x1=x1*sx;
x2=x2*sx;
x3=x3*sx;
y1=y1*sy;
y2=y2*sy;
y3=y3*sy;

setcolor(YELLOW);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
getch();
closegraph();
return 0;
}