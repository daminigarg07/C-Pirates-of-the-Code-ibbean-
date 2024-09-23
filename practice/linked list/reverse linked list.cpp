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

class Linkeddlist
{
	private:
		Node* head;
		
	public:
		Linkeddlist()
		{
			this->head=nullptr;
		}
		
		void insertAtB(int data)
		{
			Node* newnode=new Node(data);
			newnode->next=head;
			head=newnode;
		}
		
		void reversee()
		{
			Node* prev = nullptr;
            Node* curr = head;
            Node* next = nullptr;
    
            while (curr != nullptr) {
                next = curr->next; // Store the next node
                curr->next = prev; // Reverse the link
                prev = curr;       // Move pointers one step ahead
                curr = next;
            }
            head=prev;
    }
		
		
		void print()
		{
			Node* temp=head;
			while(temp!=nullptr)
			{
				cout<<temp->data<<"\t";
				temp=temp->next;
			}
			cout<<endl<<endl;
		}
};

int main()
{
	Linkeddlist l;
	l.insertAtB(6);
	l.insertAtB(7);
	l.insertAtB(8);
	l.print();
	l.reversee();
	l.print();
	return 0;
}