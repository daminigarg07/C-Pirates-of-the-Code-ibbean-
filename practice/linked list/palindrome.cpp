#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct Node {
    char data;
    Node* next;
    Node(char x) : data(x), next(nullptr) {}
};

// Utility function to reverse a linked list
Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* curr = head;
    Node* next = nullptr;
    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

// Function to check if the linked list is a palindrome
bool isPalindrome(Node* head) {
    if (!head || !head->next) return true;
    
    // Find the middle of the linked list
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    // Reverse the second half of the linked list
    Node* secondHalf = reverseList(slow);
    Node* firstHalf = head;
    
    // Compare the first half with the reversed second half
    Node* temp = secondHalf;
    bool palindrome = true;
    while (temp != nullptr) {
        if (firstHalf->data != temp->data) {
            palindrome = false;
            break;
        }
        firstHalf = firstHalf->next;
        temp = temp->next;
    }
    
    // Restore the list to its original state
    reverseList(secondHalf);
    
    return palindrome;
}

// Utility function to print the linked list
void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

// Utility function to create a new node
Node* newNode(char data) {
    Node* node = new Node(data);
    node->next = nullptr;
    return node;
}

int main() {
    // Creating list
    Node* list = newNode('r');
    list->next = newNode('a');
    list->next->next = newNode('d');
    list->next->next->next = newNode('a');
    list->next->next->next->next = newNode('r');

    cout << "Original List: ";
    printList(list);

    bool result = isPalindrome(list);
    if (result) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }

    cout << "List after checking: ";
    printList(list);  // The list should remain unchanged

    return 0;
}
