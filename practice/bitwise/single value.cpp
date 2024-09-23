#nclude<bits/stdc++.h>
using namespace std;
int single<vector<int> v>
{
	int a=0;
	for(auto i:v)
	{
		a^=i;
	}
	return a;
}
int main()
{
	vector<int> v;
	int n;
	cout<<"enter no of elemnets: ";
	cin>>n;
	cout<<"enter elements:";
	for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    int a=single(v);
    cout << "single value "<<a;
    
    return 0;
}