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