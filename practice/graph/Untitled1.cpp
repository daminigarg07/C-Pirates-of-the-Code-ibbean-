#include<bits/stdc++.h>
using namespace std;
void make_graph(map<int,vector<int>> &mpp,int node,int edges)
{
    mpp[node].push_back(edges);
}
void display_graph(map<int,vector<int>> &mpp)
{
    for(auto it:mpp)
    {
        cout<<it.first<<"->";
        for(auto e:it.second)
        {
            cout<<e<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void make_adjacency_matrix(vector<vector<int>> &vec,int node,int edge)
{
    vec[node][edge] = 1;
    vec[edge][node] = 1;
}
void display_matrix(vector<vector<int>> &vec)
{
    for(int i=0;i<vec.size();i++)
    {
        for(int j=0;j<vec[0].size();j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    map<int,vector<int>> mpp;
    make_graph(mpp,0,1);
    make_graph(mpp,0,4);
    make_graph(mpp,1,2);
    make_graph(mpp,1,3);
    make_graph(mpp,1,4);
    make_graph(mpp,2,3);
    make_graph(mpp,3,4);
    display_graph(mpp);
    vector<vector<int>> vec(5,vector<int>(5,0));
    make_adjacency_matrix(vec,0,1);
    make_adjacency_matrix(vec,0,4);
    make_adjacency_matrix(vec,1,2);
    make_adjacency_matrix(vec,1,3);
    make_adjacency_matrix(vec,1,4);
    make_adjacency_matrix(vec,2,3);
    make_adjacency_matrix(vec,3,4);
    display_matrix(vec);
    return 0;
}