
#include<bits/stdc++.h>
using namespace std;

bool pal(vector<int> v,int start,int end)
{
	if(start>=end)
	return true;
	if(v[start]!=v[end])
	{
		return false;
	}
	return pal(v,start+1,end-1);
}
int main() {
   vector<int> vec1 = {1,2, 3, 3, 2, 1};
   int n=vec1.size();

    cout << "vec1 is palindrome: " <<pal(vec1,0,n-1) << endl;

    return 0;
}