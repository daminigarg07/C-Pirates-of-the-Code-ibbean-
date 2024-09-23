#include<bits/stdc++.h>
using namespace std;
int findCount(vector<int> v, int length, int num, int diff)
{
    if(diff<0)return -1;
    int count=0;
    for(int x:v)
    {
        if(abs(x-num)<=diff) count++;
    }
    return (count>0)?count:-1;
}
int main()
{
    int length,num,diff;
    cout<<"val:  ";
    cin>>length>>num>>diff;
    vector<int> v(length);
    for(int i =0;i<length;i++)
    {
        cin>>v[i];
    }
    cout<<findCount(v,length,num,diff);
    return 0;
}