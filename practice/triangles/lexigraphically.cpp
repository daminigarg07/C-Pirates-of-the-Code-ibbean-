#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cout<<"AB:   ";
    cin>>a>>b;
    a=tolower(a);
    b=tolower(b);
    if(a<b)return -1;
    else if(a>b) return 1;
    else return 0;
    return 0;
    
}