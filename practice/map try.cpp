#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v={2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8};
	map<int,int>m;
	{
		for(int x:v)
		{
			m[x]++;
		}
	}
	map<string, vector<string>> myMap;
    myMap["fruits"] = {"apple", "banana", "apple", "orange", "banana", "apple"};
    myMap["animals"] = {"cat", "dog", "dog", "fish", "cat", "dog"};
    myMap["colors"] = {"red", "blue", "red", "green", "blue", "red", "blue"};
    
	//map<int,int> m;
    //m[1]=2;
    //m[2]=3;
    
    /*for(auto itr=m.begin();itr!=m.end();itr++)
    	{
    		cout<<itr->first<<" : "<<itr->second<<"\n";
		}
		
	cout<<"\n";*/
	for(auto p:m)
	{
		cout<<p.first<<" : "<<p.second<<"\n";
	}
	cout<<"\n";
	
	for(auto [key,value]:m)
	{
		cout<<key<<" : "<<value<<"\n";
	}
	
    for(auto pair:myMap)
    {
    	
    	cout<<pair.first<<" : ";
    	for(auto s:pair.second)
    	{
    		cout<<s<<" , ";
		}
		cout<<"\n";
	}
	cout<<m[11]<<endl;
	return 0;
}