ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* A = headA;
        ListNode* B = headB;
        while (A != B) {
            if (A == nullptr)
                A = headB;
            else
                A = A->next;
            if (B == nullptr)
                B = headA;
            else
                B = B->next;
        }
        return A? A:-1; //if no intersev=ction A=nullptr so return -1 otherwise A will not be nullptr
    }