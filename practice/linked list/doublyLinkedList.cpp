#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
		int data;
		Node* next;
		Node* prev;
		
	Node(int data)
	{
		this->data=data;
		this->prev=nullptr;
		this->next=nullptr;
		}	
};

class Linkedlist
{
	private:
		Node* head;
		Node* tail;
	public:
		Linkedlist()
		{
			this->head=nullptr;
			this->tail=nullptr;
		}
		
		void insertAtB(int data)
		{
			Node* newNode=new Node(data);
			if(head==nullptr)
			{
				head=newNode;
				tail=newNode;
				return;
			}
			newNode->next=head;
			head->prev=newNode;
			head=newNode;
		}
		
		void insertAtEnd(int data)
		{
			Node* newNode=new Node(data);
			
			if(head==nullptr)
			{
				head=newNode;
				tail=newNode;
				return;
			}
			
			tail->next=newNode;
			newNode->prev=tail;
			tail=newNode;
		}
		
		void deleteFromB()
		{
			if(head==nullptr)
			{
				cout<<"nothing to delete";
				return;
			}
			if(head->next==nullptr)
			{
				delete head;
				head=nullptr;
				tail=nullptr;
				return;
			}
				Node* temp=head;
				head=head->next;
				head->prev=nullptr;
				delete temp;	
		}
		
		void deleteFromEnd()
		{
			if(head==nullptr)
			{
				cout<<"nothing to delete";
				return;
			}
			if(head->next==nullptr)
			{
				delete head;
				head=nullptr;
				tail=nullptr;
				return;
			}
			
			Node* temp=tail;
			tail=temp->prev;
			tail->next=nullptr;
			delete temp;	
		}
		
		void printF()
		{
			Node* temp=head;
			while(temp!=nullptr)
			{
				cout<<temp->data<<"\t";
				temp=temp->next;
			}
			cout<<endl<<endl;
		}
		
		void printB()
		{
		Node* temp = tail;
        while (temp != nullptr)
        {
            cout << temp->data << "\t";
            temp = temp->prev;
        }
        cout << endl<<endl;
		}	
};

int main()
{
	Linkedlist A;
	A.insertAtB(2);
	A.insertAtB(3);
	A.insertAtB(9);
	A.printF();
	A.printB();
	
	A.insertAtEnd(7);
	A.insertAtEnd(4);
	A.printF();
	A.printB();
	
	A.deleteFromB();
	A.printF();
	A.printB();
	
	A.deleteFromEnd();
	A.printF();
	A.printB();
	
	return 0;
}