#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int ex;
	int coff;
	Node* next;
	Node(int coff,int ex):coff(coff),ex(ex),next(nullptr){}
};
void insert(Node*& head,int coff,int ex)
{
	Node* newNode=new Node(coff,ex);
	if(!head||head->ex<ex)
	{
		newNode->next=head;
		head=newNode;
		return;
	}
	Node* cur=head;
	while(cur->next!=nullptr && cur->next->ex>ex)
	{
		cur=cur->next;
	}
	if(cur->next&&cur->next->ex==ex)
	{
		cur->next->coff+=coff;
		delete newNode;
	}
	else
	{
	   newNode->next=cur->next;
	   cur->next=newNode;
	}
}
Node* add(Node* p1,Node* p2)
{
	if(!p1&&!p2)return nullptr;
	if(!p1) return p2;
	if(!p2) return p1;
	Node* res=nullptr;
	Node* a=p1;
	Node* b=p2;
	while(a && b)
	{
		if(a->ex>b->ex)
		{
		    insert(res,a->coff,a->ex);
			a=a->next;	
		}
		else if(a->ex==b->ex)
		{
			int c=a->coff+b->coff;
			insert(res,c,a->ex);
			a=a->next;
			b=b->next;
		}
		else
		{
			insert(res,b->coff,b->ex);
			b=b->next;
		}
	}
	while(a)
	{
		insert(res,a->coff,a->ex);
			a=a->next;
	}
	while(b)
	{
		insert(res,b->coff,b->ex);
			b=b->next;
	}
	return res;
}

void print(Node* head)
{
	while(head)
	{
		cout<<head->coff<<"x^"<<head->ex;
		if(head->next)
		{
			cout<<" + ";
		}
		head=head->next;
	}
	cout<<endl;
}

Node* readPolynomial() {
    Node* head = nullptr;
    int n;
    cout << "Enter the number of terms in the polynomial: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int coeff, exp;
        cout << "Enter coefficient and exponent for term " << i + 1 << ": ";
        cin >> coeff >> exp;
        insert(head, coeff, exp);
    }
    return head;
}

int main() {
    cout << "Enter the first polynomial:" << endl;
    Node* poly1 = readPolynomial();
    
    cout << "Enter the second polynomial:" << endl;
    Node* poly2 = readPolynomial();
    
    // Adding the polynomials
    Node* result = add(poly1, poly2);
    
    // Printing the result
    cout << "Polynomial 1: ";
    print(poly1);
    cout << "Polynomial 2: ";
    print(poly2);
    cout << "Result: ";
    print(result);
    
    return 0;
}