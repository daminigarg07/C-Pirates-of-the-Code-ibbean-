int getDecimalValue(ListNode* head) 
    {
        if(head==nullptr) return 0;
        int ans=0;
        ListNode* temp=head;
        while(temp!=nullptr)
        {
            ans=(ans*2)+(temp->val);
            temp=temp->next;
        }
        return ans;
    }