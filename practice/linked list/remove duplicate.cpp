ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr)
            return nullptr;
        ListNode* temp = head;
        while (temp != nullptr && temp->next != nullptr) 
        {
            if (temp->val == temp->next->val) 
            {
                ListNode* del = temp->next;
                temp->next = del->next;
                delete del;
            } 
            else 
            {
                temp = temp->next;
            }
        }
        return head;
    }