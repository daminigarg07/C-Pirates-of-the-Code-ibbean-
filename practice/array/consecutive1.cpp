#include<bits/stdc++.h>
using namespace std;
int consecutive1(vector<int> v)
{
	int n=v.size();
	int max=0;
	int k=0;
	for(int i=0;i<n;i++)
	{
		if(v[i]==0)
		{
			if (k>max)
			max=k;
			k=0;
		}
		else
		k++;
	}
	// to make changes done at last appear
	if(k>max)
	max=k;
	return max;
}
int main()
{
		vector<int> v;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    cout<<endl<<consecutive1(v);
    
    cout << endl;
    return 0;
}