#include<bits/stdc++.h>
using namespace std;
int floorIdx(vector<int> v,int k)
{
	int s=0;
	int e=v.size()-1;
	int floor_idx=-1;
	while(s<=e)
	{
		int mid=s+(e-s)/2;
		if(v[mid]<=k)
		{
			floor_idx=mid;
			s=mid+1;
		}
		else
		{
			e=mid-1;
		}
		
	}
	return floor_idx;
}



int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array in sorted order: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    int index = floorIdx(nums, target);
    cout << "Index of target " << target << " is: " << index << endl;
    
    return 0;
}