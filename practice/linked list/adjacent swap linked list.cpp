#include <bits/stdc++.h>
using namespace std;

class Node
{
	public:
		int data;
		Node* next;
		
		Node(int data)
		{
			this->data=data;
			this->next=nullptr;
		}
};

class Linkedlist
{
	private:
		Node* head;
	public:
	
		Linkedlist()
		{
			this->head=nullptr;
		}
		
		void insert(int data)
		{
			Node* newNode=new Node(data);
			newNode->next=head;
			head=newNode;
		}
		
		void insertB(int data)
		{
			Node* newNode=new Node(data);
			if(head==nullptr)
			{
				head=newNode;
				return;
			}
			Node* temp=head;
			while(temp->next!=nullptr)
			{
				temp=temp->next;
			}
			temp->next=newNode;
		}
		
		void adjacent()
		{
			if(head==nullptr||head->next==nullptr)
			{
				return;
			}
			Node* prev=head;
			Node* curr=head->next;
			Node* new_head=head->next;
			Node* nex=curr->next;
			while(nex != nullptr)
			{
			
			if(curr->next==nullptr||nex->next==nullptr)
			{
				curr->next=prev;
				prev->next=nex;
				break;
			}
			prev->next=nex->next;
			prev=nex;
			curr=prev->next;
			curr->next=prev;
		}
		
		head=new_head;
		}
		
		void print()
		{
			Node* temp=head;
			while(temp!=nullptr)
			{
				cout<<temp->data<<"   ";
				temp=temp->next;
			}
			cout<<endl;
		}
};

int main()
{
	Linkedlist l;
	l.insert(1);
	l.insert(2);
	l.insert(3);
	l.insert(4);
	l.print();
	l.adjacent();
	l.print();
	return 0;
}

