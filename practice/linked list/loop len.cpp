#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
};

// Function to detect the cycle and find the meeting point
Node* detectCycle(Node* head) {
    if (!head) return nullptr;

    Node* slow = head;
    Node* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return slow; // Meeting point of slow and fast pointers
        }
    }
    return nullptr;
}

// Function to calculate the size of the loop
int loopSize(Node* head) {
    Node* meetingPoint = detectCycle(head);
    if (!meetingPoint) return 0; // No cycle detected

    // Count the number of nodes in the loop
    int size = 1;
    Node* current = meetingPoint;
    while (current->next != meetingPoint) {
        current = current->next;
        size++;
    }
    return size;
}

// Helper function to create a new node
Node* newNode(int data) {
    return new Node(data);
}

// Helper function to print a linked list
void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    // Test case 1: Creating a circular linked list with a loop
    Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);
    head->next->next->next->next->next = head->next->next; // Creating the loop

    int size = loopSize(head);
    if (size > 0) {
        cout << "The size of the loop is: " << size << endl;
    } else {
        cout << "The list is not circular." << endl;
    }

    // Test case 2: Creating a non-circular linked list
    Node* head2 = newNode(1);
    head2->next = newNode(2);
    head2->next->next = newNode(3);
    head2->next->next->next = newNode(4);
    head2->next->next->next->next = newNode(5);

    size = loopSize(head2);
    if (size > 0) {
        cout << "The size of the loop is: " << size << endl;
    } else {
        cout << "The list is not circular." << endl;
    }

    return 0;
}
