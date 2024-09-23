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