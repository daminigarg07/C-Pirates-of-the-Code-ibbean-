#include<graphics.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int gd=DETECT, gm;
initgraph(&gd, &gm, (char*)"");
int x1,x2,y1,y2,tx,ty;
cout<<"enter values"<<endl;
cout<<"x1";cin>>x1;
cout<<"y1";cin>>y1;
cout<<"x2";cin>>x2;
cout<<"y2";cin>>y2;
cout<<"tx";cin>>tx;
cout<<"ty";cin>>ty;
line(x1,y1,x2,y2);
x1=x1+tx;
y1=y1+ty;
x2=x2+tx;
y2=y2+ty;
setcolor(YELLOW);
line(x1,y1,x2,y2);
getch();
closegraph();
return 0;
}