#include <bits/stdc++.h>
using namespace std;
//node class
class Node
{
	public:
		int data;
		Node *next; //pointer
		
		Node(int data)
		{
			this->data=data;
			this->next=nullptr;
		}
};

//linked list class
class Linkedlist
{
	private:
		Node *head; //pointer
		
	public:
	Linkedlist()
	{
		this->head=nullptr;
		}	
		
	void insertAtBegin(int data)
	{
		Node *newNode=new Node(data);
		newNode->next=head;
		head=newNode;
		}
	
	void insertAtEnd(int data)
	{
		Node *newNode=new Node(data);
		if(head==nullptr)
		{
			head=newNode;
			return;
		}
		Node *temp=head; //traverse till last node
		while(temp->next!=nullptr)
		{
			temp=temp->next;
		}
		temp->next=newNode;
		}
			
		void deleteAtB()
		{
			if(head==nullptr)
			{
				return;
			}
			Node *temp=head;
			head=head->next;
			delete temp;
		}
		
		void deleteAtEnd()
		{
			if (head == nullptr) {
            cout << "List is empty. Cannot delete from an empty list." << endl;
            return;
        }
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }
        Node* temp = head;
        Node* prev = nullptr;
        while (temp->next != nullptr) {
            prev = temp;
            temp = temp->next;
        }
        delete temp;
        prev->next = nullptr;
    }
		
		void print()
		{
			Node *temp=head;
			while(temp!=nullptr)
			{
				cout<<temp->data<<"\t";
				temp=temp->next;
			}
			cout<<endl;
		}			
};

int main()
{
	Linkedlist list;
	
	list.insertAtBegin(3);
	list.insertAtBegin(9);
	list.insertAtBegin(4);
	list.insertAtEnd(1);
	list.print();
	list.deleteAtB();
	list.print();
	list.deleteAtEnd();
	list.print();

	
	return 0;
}








