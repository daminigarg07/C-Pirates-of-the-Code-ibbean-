void rearrangeEvenOdd(Node *head)
    {
       if(!head||!head->next) return head;
       Node * oddH=nullptr;
       Node *oddT=nullptr;
       Node *evenH=nullptr;
       Node *evenT=nullptr;
       Node* curr=head;
       int pos=1;
       while(curr)
       {
       if(pos%2)
       {
           if(!oddH)
           {
               oddH=oddT=curr;
           }
           else
           {
               oddT->next=curr;
               oddT=oddT->next;
           }
       }
       else
       {
           if(!evenH)
           {
               evenH=evenT=curr;
           }
           else
           {
               evenT->next=curr;
               evenT=evenT->next;
           }
       }
       curr=curr->next;
       pos++;
    }
    
    if(oddT) oddT->next=evenH;
    if(evenT) evenT->next=nullptr;
    return (oddH)?oodH:evenH;
    }