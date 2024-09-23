ListNode* partition(ListNode* head, int x) 
    {
        ListNode lessdummy(0),greaterdummy(0);
        ListNode *less=&lessdummy,*greater=&greaterdummy;
        while(head!=nullptr)
        {
            if(head->val<x)
            {
                less->next=head;
                less=less->next;
            }
            else
            {
                greater->next=head;
                greater=greater->next;
            }
            head=head->next;
        }
        greater->next=nullptr;
        less->next=greaterdummy.next;
        return lessdummy.next;

    }