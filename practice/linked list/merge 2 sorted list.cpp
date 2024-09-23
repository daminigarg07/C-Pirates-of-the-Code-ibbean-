ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        // Create a dummy node to simplify handling the head of the merged list
        ListNode dummy(0);
        ListNode* temp = &dummy;

        ListNode* l1 = list1;
        ListNode* l2 = list2;

        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val < l2->val) {
                temp->next = l1;
                l1 = l1->next;
            } else {
                temp->next = l2;
                l2 = l2->next;
            }
            temp = temp->next;
        }

        // Attach the remaining elements of l1 or l2, if any
        if (l1 != nullptr) {
            temp->next = l1;
        } else {
            temp->next = l2;
        }

        // The head of the merged list is the next node after the dummy node
        return dummy.next;
    }