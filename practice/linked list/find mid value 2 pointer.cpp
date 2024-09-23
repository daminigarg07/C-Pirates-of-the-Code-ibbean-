Node* slow=head;
Node* fast=head;
while(fast!=nullptr&& fast->next!=nullptr)
{
	slow=slow->next;
	fast=fast->next->next;
}
int mid=slow->data;