#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
   
    
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    
}
string merge (string s1, string s2)
{
    string res="";
    int n=s1.size();
    int m=s2.size();
    int i=0;int j=0;
    while(i<n && j<m)
    {
        res+=s1[i];
        i++;
        res+=s2[j];
        j++;
    }
    if(j==m)
    {
        for(int i=m;i<n;i++)
        res+=s1[i];
    }
    else if(i==n)
    {
        for(int i=n;i<m;i++)
        res+=s2[i];
    }
    return res;
}