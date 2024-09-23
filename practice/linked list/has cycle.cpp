bool hasCycle(ListNode *head) 
    {
        if(head==nullptr)return false;
        ListNode* i=head;
        ListNode* j=head;
        while(j!=nullptr&& j->next!=nullptr)
        {
            i=i->next;
            j=j->next->next;
            if(i==j)
            {
                return true;
            }
        }
        return false;
    }