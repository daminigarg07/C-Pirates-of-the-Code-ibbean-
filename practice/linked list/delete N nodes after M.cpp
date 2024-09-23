void linkdelete(struct Node  *head, int M, int N)
    {
        if(M==0)
        {
            while(head)
            {
                Node* temp=head;
                head=head->next;
                delete temp;
            }
            return;
        }
        Node* temp = head;

    while (temp) {
        // Skip M nodes
        for (int i = 1; i < M && temp != nullptr; i++) {
            temp = temp->next;
        }

        // If we've reached the end of the list, break
        if (temp == nullptr) {
            break;
        }

        // Start deleting the next N nodes
        Node* deleteStart = temp->next;
        for (int i = 0; i < N && deleteStart != nullptr; i++) {
            Node* del = deleteStart;
            deleteStart = deleteStart->next;
            delete del;
        }

        // Connect the M-th node to the node after the N deleted nodes
        temp->next = deleteStart;
        temp = deleteStart;
    }
    }