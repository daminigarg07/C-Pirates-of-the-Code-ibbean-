#include<bits/stdc++.h>
using namespace std;
string transform(string s)
{
    int n=s.size();
    s[0]=toupper(s[0]);
   for(int i=1;i<n-1;i++)
   {
       if (s[i]==' '&& isalpha(s[i + 1]))
       s[i+1]=toupper(s[i+1]);
   }
   return s;
}
int main() {
    string s ;
    
    getline(cin,s);
    cout << transform(s) << endl;
    return 0;
}