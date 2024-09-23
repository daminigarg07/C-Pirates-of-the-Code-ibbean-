#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
};

Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* curr = head;
    Node* next = nullptr;

    while (curr != nullptr) {
        next = curr->next; // store next node
        curr->next = prev; // reverse the link
        prev = curr;       // move prev and curr one step forward
        curr = next;
    }
    return prev; // prev will be the new head of the reversed list
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
Node* newNode(int data) {
    Node* node = new Node(data);
    node->next = nullptr;
    return node;
}

int main() {
    // Creating list
    Node* list = newNode(1);
    list->next = newNode(2);
    list->next->next = newNode(3);
    list->next->next->next = newNode(4);
    list->next->next->next->next = newNode(5);
    list->next->next->next->next->next = newNode(6);

    cout << "Original List: ";
    printList(list);

    list = reverseList(list);

    cout << "Reversed List: ";
    printList(list);

    return 0;
}
