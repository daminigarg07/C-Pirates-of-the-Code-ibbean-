#include<bits/stdc++.h>
using namespace std;
int OperationsBinaryString(char* str)
{
    if(str==NULL)return -1;
    int a=*str-'0';
    str++;
    while(*str!='\0')
    {
        char p=*str;
        str++;
        if(p=='A') a&=*str-'0';
        else if(p=='B') a|=*str-'0';
        else if(p=='C') a^=*str-'0';
        str++;
    }
    return a;
}
int main()
{
    string s;
    cout<<"string:  ";
    cin>>s;
    cout<<OperationsBinaryString(&s[0]);
    return 0;
   
}