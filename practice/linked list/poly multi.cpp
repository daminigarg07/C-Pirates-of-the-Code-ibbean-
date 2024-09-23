#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int coff;
	int ex;
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
	while(cur->next&&cur->next->ex>ex)
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

Node* multi(Node* p1,Node* p2)
{
	if(!p1||!p2)return nullptr;
	Node* res=nullptr;
	
	for(Node* a=p1;a!=nullptr;a=a->next)
	{
		for(Node* b=p2;b!=nullptr;b=b->next)
		{
			int c=a->coff*b->coff;
			int e=a->ex+b->ex;
			insert(res,c,e);
		}
	}
	return res;
}

void print(Node* head)
{
	while(head)
	{
		cout<<head->coff<<"x^"<<head->ex;
		if(head->next)
		cout<<" + ";
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
        int coef, exp;
        cout << "Enter coefficient and exponent for term " << i + 1 << ": ";
        cin >> coef >> exp;
        insert(head, coef, exp);
    }
    return head;
}


int main() {
    cout << "Enter the first polynomial:" << endl;
    Node* poly1 = readPolynomial();
    
    cout << "Enter the second polynomial:" << endl;
    Node* poly2 = readPolynomial();
    
    // Multiplying the polynomials
    Node* result = multi(poly1, poly2);
    
    // Printing the result
    cout << "Polynomial 1: ";
    print(poly1);
    cout << "Polynomial 2: ";
    print(poly2);
    cout << "Result: ";
    print(result);
    
    return 0;
}
