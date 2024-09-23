#include<bits/stdc++.h>
using namespace std;
void max_heap(int *a,int m,int n)
{
	int left,parent;
	parent=a[m];
	left=2*m;
	 while (left <= n)
	  {
      if (left < n && a[left+1] > a[left]) //left+1=right
         left = left + 1;
      if (parent > a[left])
         break;
      else if (parent <= a[left]) {
         a[left / 2] = a[left]; //swap
         left = 2 * left;
      }
   }
   a[left/2] = parent;
   return;
}
void build_maxheap(int *a,int n) {
   int k;
   for(k = n/2; k >= 1; k--) {
      max_heap(a,k,n);
   }
}
int main() {
   int n, i;
   cout<<"enter no of elements of array\n";
   cin>>n;
   int a[30];
   for (i = 1; i <= n; i++) {
      cout<<endl;
      cin>>a[i];
   }
   build_maxheap(a,n);
   cout<<"Max Heap\n";
   for (i = 1; i <= n; i++) 
   {
      cout<<a[i]<<endl;
   }
}