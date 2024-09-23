#include<bits/stdc++.h>
using namespace std;
vector<int> unionn(int arr1[],int arr2[],int n,int m)
{
	vector<int> a;
	set<int> s(arr1,arr1+n);
	s.insert(arr2,arr2+m);
	for(auto i:s)
	{
		a.push_back(i);
	}
	return a;
}

	

int main() {
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	   
	    vector<int> ans = unionn(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	
	
	return 0;
}