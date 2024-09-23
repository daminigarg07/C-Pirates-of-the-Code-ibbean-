#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* bottom;
    Node(int x) : data(x), next(nullptr), bottom(nullptr) {}
};

// Utility function to merge two sorted linked lists
Node* mergeTwoLists(Node* a, Node* b) {
    // Base cases
    if (!a) return b;
    if (!b) return a;

    // Choose either 'a' or 'b', and recur
    Node* result;
    if (a->data < b->data) {
        result = a;
        result->bottom = mergeTwoLists(a->bottom, b);
    } else {
        result = b;
        result->bottom = mergeTwoLists(a, b->bottom);
    }
    return result;
}

// Function to flatten the linked list
Node* flatten(Node* root) {
    // Base case: if root is NULL or there is only one list
    if (!root || !root->next) return root;

    // Recur for the list on right
    root->next = flatten(root->next);

    // Merge this list with the list on right
    root = mergeTwoLists(root, root->next);

    // Return the root, it will be in turn merged with its left
    return root;
}

// Utility function to print the flattened linked list
void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->bottom;
    }
    cout << endl;
}

int main() {
    // Creating list with bottom pointers
    Node* head = new Node(5);
    head->bottom = new Node(7);
    head->bottom->bottom = new Node(8);
    head->bottom->bottom->bottom = new Node(30);

    head->next = new Node(10);
    head->next->bottom = new Node(20);

    head->next->next = new Node(19);
    head->next->next->bottom = new Node(22);
    head->next->next->bottom->bottom = new Node(50);

    head->next->next->next = new Node(28);
    head->next->next->next->bottom = new Node(35);
    head->next->next->next->bottom->bottom = new Node(40);
    head->next->next->next->bottom->bottom->bottom = new Node(45);

    // Flatten the list
    head = flatten(head);

    // Print the flattened list
    printList(head);

    return 0;
}
//Steps to Flatten the Linked List
//Understand the structure: Each node in the main linked list contains a pointer to the next node and a pointer to the head of a sub-linked list (bottom pointer). 
Each sub-linked list is sorted.
//
//Merge sub-linked lists: To flatten the linked list into a single sorted list, we can use a merge technique similar to merging two sorted arrays.
//
//Recursive approach: We will recursively merge the current node's sub-linked list with the flattened list of the next nodes.