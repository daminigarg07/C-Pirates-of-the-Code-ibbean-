#include<bits/stdc++.h>
using namespace std;
int distance(int x1,int y1,int x2,int y2)
{
	return (((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
}
string isSquare(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4)
{
	vector<int> v({distance(x1,y1,x2,y2),distance(x1,y1,x3,y3),distance(x1,y1,x4,y4),distance(x2,y2,x3,y3),distance(x4,y4,x2,y2),distance(x4,y4,x3,y3)});
	sort(v.begin(),v.end());
	if(v[0]>0&&v[0]==v[1]&&v[1]==v[2]&&v[2]==v[3]&&v[4]==v[5]&&v[4]==2*v[0])
	{
		return "yes";
	}
	return "no";
}
int main()
{
	int x1,y1,x2,y2,x3,y3,x4,y4;
	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
	cout<<endl<<isSquare(x1,y1,x2,y2,x3,y3,x4,y4);
	return 0;
}
