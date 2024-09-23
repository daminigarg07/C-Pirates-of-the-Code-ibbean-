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