ListNode* deleteDuplicates(ListNode* head) 
    {
        if(head==nullptr)return nullptr;
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* prev=dummy;
        while(head!=nullptr)
        {
            bool dup=false;
            while(head->next!=nullptr && head->val==head->next->val)
            {
                dup=true;
                head=head->next;
            }
            if(dup)
            {
                prev->next=head->next;
            }
            else
            {
                prev=prev->next;
            }
            head=head->next;
        }
        ListNode* newhead=dummy->next;
        delete dummy;
        return newhead;
    }