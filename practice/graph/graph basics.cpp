#include<bits/stdc++.h>
using namespace std;
map<int,vector<int>> AL(vector<int> &vertex,vector<vector<int>> &edge)
{
    map<int,vector<int>> al;
    for(auto v:vertex)
    {
        al[v]=vector<int>();
    }
    for(auto e:edge)
    {
        int s=e[0];
        int d=e[1];
        al[s].push_back(d);
        if(s!=d)
        al[d].push_back(s);
    }
    return al;
}

map<int,map<int,int>> ALW(vector<int> &vertex,vector<vector<int>> &edge)
{
	map<int,map<int,int>> alw;
	for(auto v:vertex)
	{
		alw[v]=map<int,int>();
	}
	for(auto e:edge)
	{
		int s=e[0];
		int d=e[1];
		int w=e[2];
		alw[s][d]=w;
		if(s!=d)
		alw[d][s]=w;
	}
	return alw;
}
void print_al(map<int,vector<int>> &al)
{
    for(auto m:al)
    {
        cout<<m.first<<" -> ";
        for(auto val:m.second)
        {
            cout<<val<<"  ";
        }
        cout<<endl;
    }
}

void print_alw(map<int,map<int,int>> &alw)
{
	for(auto k:alw)
	{
		cout<<k.first<<" -> ";
		for(auto val:k.second)
		{
			cout<<"("<<val.first<<" "<<val.second<<")  ";
		}
		cout<<endl;
	}
}
int main()
{
    vector<int> vertex={1,2,3,4,5,6};
    vector<vector<int>> edge={{0, 1,8}, {0, 2,6}, {0, 3,4}, {1, 4,5}, {1, 5,3}, {2, 5,4},{3,4,7},{6,6,2}};
    map<int,vector<int>> al=AL(vertex,edge);
    map<int,map<int,int>> alw=ALW(vertex,edge);
    
    
    cout<<"adjacency list: "<<endl;
    print_al(al);
    cout<<endl;
    cout<<endl<<"adjacency weighted list:"<<endl;
    print_alw(alw);
    cout<<endl;
}