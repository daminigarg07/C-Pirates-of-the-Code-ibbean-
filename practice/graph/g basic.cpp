#include <bits/stdc++.h>
using namespace std;

map<int, vector<int>> AdjacencyList(vector<int> &vertex, vector<vector<int>> &edge) {
    map<int, vector<int>> aj;
    for (auto v : vertex) {
        aj[v] = vector<int>();
    }
    for (auto e : edge) {
        int v1 = e[0];
        int v2 = e[1];
        int w = e[2];
        aj[v1].push_back(v2);
        if(v1 != v2) // Avoid adding self-loops twice
            aj[v2].push_back(v1);
    }
    return aj;
}

map<int, map<int, int>> weighted_list(vector<int> &vertex, vector<vector<int>> &edge) {
    map<int, map<int, int>> wl;
    for (auto v : vertex) {
        wl[v] = map<int, int>();
    }
    for (auto e : edge) {
        int s = e[0];
        int d = e[1];
        int w = e[2];
        wl[s][d] = w;
        wl[d][s] = w;
    }
    return wl;
}

vector<vector<int>> AM(vector<int> &vertex, vector<vector<int>> &edge) {
    int n = vertex.size();
    vector<vector<int>> am(n, vector<int>(n, 0));
    for (auto e : edge) {
        int v1 = e[0];
        int v2 = e[1];
        am[v1][v2] = 1;
        am[v2][v1] = 1;
    }
    return am;
}

vector<vector<int>> AMW(vector<int> &vertex, vector<vector<int>> &edge) {
    int n = vertex.size();
    vector<vector<int>> amw(n, vector<int>(n, 0));
    for (auto e : edge) {
        int v1 = e[0];
        int v2 = e[1];
        int w = e[2];
        amw[v1][v2] = w;
        amw[v2][v1] = w;
    }
    return amw;
}

void print_wl(map<int, map<int, int>> &wl) {
    for (auto pair : wl) {
        cout << pair.first << " -> ";
        for (auto n : pair.second) {
            cout << "(" << n.first << ", " << n.second << ") ";
        }
        cout << endl;
    }
}

void print_matrix(vector<vector<int>> &am) {
    for (auto row : am) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

void print_list(map<int, vector<int>> &adjacencyList) {
    for (auto &pair : adjacencyList) {
        cout << pair.first << "-> ";
        for (auto &neighbor : pair.second) {
            cout << neighbor << " ";
        }
        cout << endl;
    }
}

void dfs(int node, map<int, vector<int>> &adj, vector<bool> &visited) {
    visited[node] = true;
    cout << node << " ";

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited);
        }
    }
}

void dfsGraph(map<int, vector<int>> &adj,int v) {
    vector<bool> visited(adj.size(), false);
    for (auto &pair : adj) {
        int node = v;
        if (!visited[node]) {
            dfs(node, adj, visited);
        }
    }
}
void dfsm(int v, vector<vector<int>> &am,vector<bool> &visited)
{
	visited[v]=true;
	cout<<v<<"  ";
	for(int i=0;i<am[v].size();i++)
	{
		if(am[v][i] && !visited[i])
		{
			dfsm(i,am,visited);
		}
	}
}
void dfsMat(vector<vector<int>> &am,int v)
{
	vector<bool> visited(am.size(),false);
		if(!visited[v])
		{
			dfsm(v,am,visited);
		}	
}

void bfs(map<int, vector<int>> &adj,int v)
{
	int n=adj.size();
	vector<bool> visited(n,false);
	queue<int> q;
	visited[v]=true;
	q.push(v);
	while(!q.empty())
	{
		int v=q.front();
		cout<<v<<"  ";
		q.pop();
		for(int i=0;i<adj[v].size();i++)
		{

			int ver=adj[v][i]; //access each node in vector of map at particular key
			if(!visited[ver])
			{
			visited[ver]=true;
			q.push(ver);
		}
		}
	}
}
void bfsMat(vector<vector<int>> &am,int v)
{
	int n=am[0].size();
	vector<bool> visited(n,false);
	queue<int> q;
	visited[v]=true;
	q.push(v);
	while(!q.empty())
	{
		int v=q.front();
		cout<<v<<" ";
		q.pop();
		for(int i=0;i<am[v].size();i++)
		{
			if(am[v][i] && !visited[i])
			{
				visited[i]=true;
				q.push(i);
			}
		}
	}
}
int main() {
    vector<int> vertex = {0, 1, 2, 3, 4, 5};
    vector<vector<int>> edge = {{0, 1, 8}, {0, 2, 6}, {0, 3, 4}, {1, 4, 5}, {1, 5, 3}, {2, 5, 4}, {3, 4, 7}};

    map<int, vector<int>> adjacencyList = AdjacencyList(vertex, edge);
    vector<vector<int>> am = AM(vertex, edge);
    map<int, map<int, int>> wl = weighted_list(vertex, edge);
    vector<vector<int>> amw = AMW(vertex, edge);

    cout << "Adjacency List:" << endl;
    print_list(adjacencyList);
    cout << endl;

    cout << "Adjacency Matrix:" << endl;
    print_matrix(am);
    cout << endl;

    cout << "Weighted List:" << endl;
    print_wl(wl);
    cout << endl;

    cout << "Weighted Matrix:" << endl;
    print_matrix(amw);
    cout << endl;

    cout << "DFS traversal starting from vertex :" << endl;
    dfsGraph(adjacencyList,3);
    cout << endl;
    
    cout<<endl;
    cout << "DFS traversal starting from vertex using matrix :" << endl;
    dfsMat(am,3);
    cout << endl;
    
    cout<<endl;
    cout << "BFS traversal starting from vertex using list :" << endl;
    bfs(adjacencyList,4);
    cout << endl;
    
    cout<<endl;
    cout << "BFS traversal starting from vertex using matrix :" << endl;
    bfsMat(am,4);
    cout << endl;
    return 0;
}
