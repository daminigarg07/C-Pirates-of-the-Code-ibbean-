#include<bits/stdc++.h>
using namespace std;
vector<int> input(int n)
{
	int a;
	vector<int> v; 
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a); 
    }
    return v;
}
void print(vector<int> &v)
{
	for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; 
    }
	cout<<"\n";
}
int main()
{
    int n;
    cin >> n;
    vector<int> v=input(n);
    print(v);
    reverse(v.begin(),v.end());
    print(v);
    return 0;
}