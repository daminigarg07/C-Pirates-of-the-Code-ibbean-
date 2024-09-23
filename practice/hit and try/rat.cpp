#include<bits/stdc++.h>
using namespace std;
int food(int r,int unit,int a[],int n)
{
    if(n==0) return -1;
    int req=r*unit;
    int now=0;
    int i=0;
    for(i=0;i<n;i++)
    {
        now+=a[i];
        if(now>=req)
        {
            break;
        }
    }
    if (now<req) return -1;
    return i+1;
    
}
int main()
{
    int r,unit,n;
    cout<<"rat:  ";
    cin>>r;
    cout<<"unit:  ";
    cin>>unit;
    cout<<"n:  ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >>a[i];
    }
    cout<<food(r,unit,a,n);
    return 0;
}