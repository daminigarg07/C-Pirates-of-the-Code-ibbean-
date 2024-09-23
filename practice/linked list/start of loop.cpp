Node* start(Node* head)
    {
        Node* meet=loop(head);
        if(!meet)return nullptr;
        
        Node* cur=head;
        while(cur!=meet)
        {
            cur=cur->next;
            meet=meet->next;
        }
        return cur;
    }