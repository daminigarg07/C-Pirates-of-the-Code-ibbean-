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