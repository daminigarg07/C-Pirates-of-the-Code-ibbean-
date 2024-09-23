#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int m,int h)
{
	int n1=m-l+1;
	int n2=h-m;
	int left[n1],right[n2];
	
	for(int i=0;i<n1;i++)
	{
		left[i]=a[l+i];
	}
	
	for(int i=0;i<n2;i++)
	{
		right[i]=a[m+1+i];
	}
	
	int i=0,j=0,k=l;
	while(i<n1 && j<n2)
	{
		if(left[i]<right[j])
		{
			a[k++]=left[i++];
		}
		else
		{
			a[k++]=right[j++];
		}
	}
	
	while(i<n1)
	{
		a[k++]=left[i++];
	}
	
	while(j<n2)
	{
		a[k++]=right[j++];
	}
}

void mergeSort(int arr[],int l,int h)
{
	if(l<h)
	{
		int m=(l+h)/2;
		mergeSort(arr,l,m);
		mergeSort(arr,m+1,h);
		merge(arr,l,m,h);
	}
}
void printArray(int A[], int size) {
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
    cout << endl;
}

int main() {
    int m;
	cout<<"enter size of array: ";
	cin>>m;
	int a[m];
	cout<<"enter element:  ";
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}

    mergeSort(a,0,m-1);

    cout << "Sorted array is \n";
    printArray(a,m);
    return 0;
}