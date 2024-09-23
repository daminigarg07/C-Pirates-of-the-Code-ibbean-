#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* left;
	Node* right;
	
	Node(int data):data(data),left(nullptr),right(nullptr){}
};
	
Node* insert(Node* root,int data)
{
	if(root==nullptr)
	{
		return new Node(data);
	}
	if(data<root->data)
	{
		root->left=insert(root->left,data);
	}
	else
	{
		root->right=insert(root->right,data);
	}
	return root;
}

void inorder(Node* root)
{
	if(root==nullptr)
	{
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void preorder(Node* root)
{
	if(root==nullptr)
	{
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

void postorder(Node* root)
{
	if(root==nullptr)
	{
		return;
	}
	preorder(root->left);
	preorder(root->right);
	cout<<root->data<<" ";
}


int main() {
    Node* root = nullptr;
    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 2);
    root = insert(root, 4);

   cout << "Inorder traversal: ";
    inorder(root);
    cout <<endl;
    
    preorder(root);
    cout <<endl;
    
    postorder(root);
    cout <<endl;


    return 0;
}
