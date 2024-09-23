ListNode* swapPairs(ListNode* head) 
    {
        if(head==nullptr||head->next==nullptr) return head;
        ListNode* a=head;
        ListNode* b=head->next;
        a->next=b->next;
        b->next=a;
        head=b;
        ListNode* temp=a;
        while(temp->next!=nullptr&& temp->next->next!=nullptr)
        {
            a=temp->next;
            b=a->next;
            a->next=b->next;
            b->next=a;
            temp->next=b;
            temp=a;
        }
        return head;
    }