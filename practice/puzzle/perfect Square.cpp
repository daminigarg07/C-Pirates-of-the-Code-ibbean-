#include <bits/stdc++.h>
using namespace std;
vector<int> perfectSquare(int N)
{
	vector<int> sq;
	for (int i=1;i<=sqrt(N);i++)
	{
		if(i*i>=N)
		{
			break;
		}
		sq.push_back(i*i);
	}
	return sq;
}
int main()
{
	int N;
	cin>>N;
	vector<int> sq=perfectSquare(N);
	for(int i:sq)
	{
		cout<<i<<"\t";
	}
	return 0;
}