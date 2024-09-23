#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n, int index = 0) {
  
    if (index == n) {
        return;
    }
    cout << arr[index] << " ";

    // Recursive call to print the next element
    printArray(arr, n, index + 1);
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	printArray(a,n);
	return 0;
}