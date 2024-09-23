#include<bits/stdc++.h>
using namespace std;
class Node
{
	public:
		int data;
		Node * next;
	Node(int data)
	{
		this->data=data;
		this->next=nullptr;
	}
};

class linkedlist
{
	public:
		Node* head;
	linkedlist()
	{
		this->head=nullptr;
	}
void insert(int n,int data)
	{
		Node * newNode=new Node(data);
		if(n<0)
		{
			cout<<"invalid"<<"\n";
			return;
		}
		if(n==0)
		{
			newNode->next=head;
			head=newNode;
		}
		else
		{
			Node * temp=head;
			int index=0;
			while(temp->next!=nullptr  && index<n-1)
			{
				temp=temp->next;
				index++;	
			}
			if(temp==nullptr)
			{
				cout<<"index out of bound \n";
				temp->next=newNode;
			}
			else
			{
				newNode->next=temp->next;
				temp->next=newNode;
			}
		}
	}
void print()
{
	Node * temp=head;
	while(temp!=nullptr)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"\n";
}

bool search(int val)
{
	Node* temp=head;
	while(temp!=nullptr)
	{
		if(temp->data==val)
		{
			return true;
		}
		temp=temp->next;
	}
	return false;
	
}

bool searchh(Node* temp,int val)
{
	if(temp->next==nullptr)
	{
		return false;
	}
	if(temp->data==val)
	{
		return true;
	}
	return searchh(temp->next,val);
}

bool deletee(int val)
{
	Node * temp=head;
	if(head==nullptr)
	{
		cout<<"empty list \n";
		return false;
	}
	if(head->data==val)
	{
		Node * temp=head;
		head=head->next;
		delete temp;
		return true;
	}
	
		while(temp->next!=nullptr && temp->next->data!=val)
		{
			temp=temp->next;
		}
		if(temp->next!=nullptr)
		{
			Node* del=temp->next;
			temp->next=del->next;
			delete del;
			return true;
		}
	
	return false;
}
};
int main()
{
	linkedlist l;
    Node* head = new Node(0);
    l.head=head;
    Node*temp1=head;
    for(int i=1;i<=5;i++)
    {
        Node *temp = new Node(i);
        temp1->next=temp;
        temp1=temp;
    }
    l.insert(3,10);
    l.insert(5,-1);
    l.insert(0,11);
    l.print();
    cout<<(l.search(-1)?"Found":"not found")<<endl;
    cout<<(l.searchh(head,10)?"found":"not found")<<"\n";
    cout<<(l.deletee(5)?"deleted":"cant found")<<"\n";
    l.print();
    return 0;

}