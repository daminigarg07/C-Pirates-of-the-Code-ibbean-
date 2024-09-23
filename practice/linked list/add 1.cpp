// Function to reverse the linked list
Node* reversee(Node* head) {
    Node* prev = nullptr;
    Node* cur = head;
    Node* next = nullptr;
    
    while (cur) {
        next = cur->next;  // Store the next node
        cur->next = prev;  // Reverse the current node's pointer
        prev = cur;        // Move prev and cur one step forward
        cur = next;
    }
    
    return prev;  // Return the new head of the reversed list
}

// Function to add 1 to the number represented by the linked list
Node* addOne(Node* head) {
    // Reverse the linked list
    Node* res = reversee(head);
    Node* temp = res;
    
    // Traverse the reversed list and add 1
    while (temp) {
        temp->data += 1;
        
        if (temp->data == 10 && temp->next == nullptr) {
            // If the current node becomes 10 and it is the last node,
            // set current node's data to 0 and add a new node with data 1
            temp->data = 0;
            temp->next = new Node(1);
            return reversee(res);  // Reverse the list again and return
        } else if (temp->data == 10) {
            // If the current node becomes 10, set it to 0 and move to the next node
            temp->data = 0;
            temp = temp->next;
        } else {
            // If no carry, reverse the list again and return
            return reversee(res);
        }
    }
    
    return reversee(res);  // Return the head of the final list
}