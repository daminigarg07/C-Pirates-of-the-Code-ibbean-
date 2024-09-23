ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr||head->next==nullptr)return head;
        ListNode* temp=head;
        int n=1;
        while(temp->next!=nullptr)
        {
            n++;
            temp=temp->next;
        }
        k=k%n;
        if(k==0)return head;
        temp->next=head;
        ListNode* A=head;
        int x=n-k;
        for(int i=1;i<x;i++)
        {
            A=A->next;
        }
        head=A->next;
        A->next=nullptr;
        return head;
    }