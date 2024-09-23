Node *sortedInsert(struct Node* head, int data) 
    {
        Node* newNode=new Node(data);
        if(!head||head->data>data)
        {
            newNode->next=head;
            head=newNode;
            return head;
        }
        Node* cur=head;
        while(cur->next&&cur->next->data<data)
        {
            cur=cur->next;
        }
        newNode->next=cur->next;
        cur->next=newNode;
        return head;
    }