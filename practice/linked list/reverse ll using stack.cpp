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
		Node * head;
	linkedlist()
	{
		this->head=nullptr;
	}
	Node* reversee()
	{
		if(head==nullptr) return nullptr;
		stack<Node *> s;
		Node* temp=head;
		while(temp!=nullptr)
		{
			s.push(temp);
			temp=temp->next;
		}
		head=s.top();
		s.pop();
		temp=head;
		while(!s.empty())
		{
			temp->next=s.top();
			s.pop();
			temp=temp->next;
		}
		temp->next=nullptr;
		return head;
	}
	void print()
	{
		Node* temp=head;
		while(temp!=nullptr)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<"\n";
	}
};

int main()
{
	linkedlist l;
	Node * head=new Node(0);
	l.head=head;
	Node * temp1=head;
	for(int i=1;i<6;i++)
	{
		Node* temp=new Node(i);
		temp1->next=temp;
		temp1=temp;
	}
	l.print();
	l.reversee();
	l.print();
	}