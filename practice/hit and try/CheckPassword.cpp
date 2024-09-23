#include<bits/stdc++.h>
using namespace std;
bool CheckPassword(string s, int n)
{
    if(n<4) return false;
    if(isdigit(s[0])) return false;
    int d=0,cap=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==' '||s[i]=='/') return false;
        else if(isupper(s[i])) cap++;
        else if(isdigit(s[i]))d++;
    }
    return cap>0 && d>0;
}
int main()
{
    string s;
    getline(cin,s);
    int n=s.size();
    cout<<CheckPassword(s,n);
    return 0;
}