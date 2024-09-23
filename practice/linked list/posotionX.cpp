#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* next;
	Node(int val):data(val),next(nullptr){}
	
};

Node* createlist(vector<int> v)
{
	if(v.empty())return nullptr;
	int n=v.size();
	Node* head=new Node(v[0]);
	Node* temp=head;
	for(int i=1;i<n;i++)
	{
		temp->next=new Node(v[i]);
		temp=temp->next;
	}
	return head;
}

int positionX(Node* head,int x)
{
	int count=-1;
	if(!head) return count;
	Node* temp=head;
	while(temp)
	{
		count++;
		if(temp->data==x)
		{
			return count;
		}
		temp=temp->next;
	}
	return -1;
}

int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	Node* head=createlist(v);
	int x;
	cin>>x;
	cout<<endl<<"position:  "<<positionX(head,x);
	return 0;
}