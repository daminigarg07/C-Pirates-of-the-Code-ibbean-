#include<bits/stdc++.h>
using namespace std;
class Node
{
	public:
	int data;
	Node* left;
	Node* right;
	Node(int x)
	{
		this->data=x;
		this->left=nullptr;
		this->right=nullptr;
	}
};

Node* makeNode()
{
	Node* root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->left=new Node(6);
	root->right->right=new Node(7);
	return root;
	
}
void preorder(Node * root)
{
	if(root==nullptr) return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);

}
void inorder(Node* root)
{
	if(root==nullptr)return ;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
void postorder(Node* root)
{
	if(root==nullptr)return ;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
	
}
void BFS(Node * root)
{
	if(root==nullptr) return;
	queue<Node*>q;
	q.push(root);
	while(!q.empty())
	{
		Node* curr=q.front();
		cout<<curr->data<<" ";
		q.pop();
		if(curr->left!=nullptr)
		{
			q.push(curr->left);
		}
		if(curr->right!=nullptr)
		{
			q.push(curr->right);
		}
	}
}
void levelwise(Node* root)
{
	if(root==nullptr)return;
	queue<Node*>q;
	q.push(root);
	while(!q.empty())
	{
		int n=q.size();
		for(int i=0;i<n;i++)
		{
			Node* curr=q.front();
			cout<<curr->data<<" ";
			q.pop();
		
		if(curr->left!=nullptr)
		{
			q.push(curr->left);
		}
		if(curr->right!=nullptr)
		{
			q.push(curr->right);
		}
	}
	cout<<" \n";
	}
}

queue<pair<Node*,int>> findlevel(Node* root)
{
	queue<pair<Node* ,int>> q;
	if(root==nullptr)
	{
		return q;
	}
	queue<pair<Node* ,int>> result;
	q.push({root,0});
	while(!q.empty())
	{
		Node* curr=q.front().first;
		int level=q.front().second;
		q.pop();
		result.push({curr, level});
	if(curr->left!=nullptr)
	{
		q.push({curr->left,level+1});
	}
	if(curr->right!=nullptr)
	{
		q.push({curr->right,level+1});
	}
   }
   return result;
}
void printLevelWise(queue<pair<Node*, int>>& q) {
    while (!q.empty()) {
        Node* node = q.front().first;
        int level = q.front().second;
        q.pop();
        cout << "Node " << node->data << " at level " << level << endl;
    }
}
int heightt(Node* root)
{
	if(root==nullptr)
	{
		return 0;
	}
	int l=heightt(root->left);
	int r=heightt(root->right);
	return max(l,r)+1;	
}
int width(Node* root)
{
		if(root==nullptr)return 0;
		int maxW=0;
		queue<Node*>q;
		q.push(root);
		while(!q.empty())
		{
			int width=q.size();
			maxW=max(width,maxW);
			for(int i=0;i<width;i++)
			{
				Node* curr=q.front();
				q.pop();
				if(curr->left!=nullptr)
				{
					q.push(curr->left);
				}
				if(curr->right!=nullptr)
				{
					q.push(curr->right);
				}
			}
		}
		return maxW;
}
void topview(Node* root)
{
	if(root==NULL)
	{
		return;
	}
	map<int,int>mapV;
	queue<pair<Node*,int>>q;
	q.push({root,0});
	while(!q.empty())
	{
		pair<Node*,int>curr=q.front();
		q.pop();
		Node* temp=curr.first;
		int hd=curr.second;
		
		//first node{if not in map}
		if(mapV.find(hd)==mapV.end())
		{
			mapV[hd]=temp->data;
		}
		if(temp->left!=nullptr)
		{
			q.push({temp->left,hd-1});
		}
		if(temp->right!=nullptr)
		{
			q.push({temp->right,hd+1});
		}
	}
	for(auto p:mapV)
	{
		cout<<p.second<<" ";
	}
}

void leftview(Node* root)
{
	if(root==nullptr)return;
	queue<Node*>q;
	q.push(root);
	while(!q.empty())
	{
		int n=q.size();
		for(int i=0;i<n;i++)
		{
			Node* curr=q.front();
			q.pop();
			if(i==0)
			{
				cout<<curr->data<<" ";
			}
			if(curr->left!=nullptr)
			{
				q.push(curr->left);
			}
			if(curr->right!=nullptr)
			{
				q.push(curr->right);
			}
		}
	}
}


int main() {
    // Create the binary tree
    Node* root = makeNode();
    cout<<"preorder:  ";
    preorder(root);
    cout<<"\n";
    cout<<"inorder:  ";
    inorder(root);
    cout<<"\n";
    cout<<"postorder:  ";
    postorder(root);
    cout<<"\n";
    cout<<"BFS:  ";
    BFS(root);
    cout<<endl<<endl;
    cout<<"level wise:  ";
    levelwise(root);
    cout<<endl;
    cout<<"level  ";
    queue<pair<Node*, int>> levelQueue = findlevel(root);
    printLevelWise(levelQueue);
    cout<<"height:  ";
    cout<<heightt(root)<<"\n";
    cout<<"width:  ";
    cout<<width(root)<<"\n";
    cout<<"topview:  ";
	topview(root);
	cout<<"\n";
    cout<<"Leftview:  ";
    leftview(root);
    
    
    return 0;
}