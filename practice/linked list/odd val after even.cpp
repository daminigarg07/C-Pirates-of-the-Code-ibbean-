Node* divide(int N, Node *head){
        Node dummyeven(0),dummyodd(0);
        Node *even=&dummyeven,*odd=&dummyodd;
        while(head!=nullptr)
        {
            if(head->data%2)
            {
                odd->next=head;
                odd=odd->next;
            }
            else
            {
                even->next=head;
                even=even->next;
            }
            head=head->next;
        }
        odd->next=nullptr;
        even->next=dummyodd.next;
        return dummyeven.next;
    }