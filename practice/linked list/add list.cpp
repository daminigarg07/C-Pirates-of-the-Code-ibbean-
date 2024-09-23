#include <iostream>
#include <stack>
using namespace std;

// Define the structure of a linked list node
struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
};

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

// Function to add two numbers represented by linked lists
Node* addTwoNumbers(Node* l1, Node* l2) {
    stack<int> s1, s2;

    // Push the elements of the first list into stack s1
    while (l1 != nullptr) {
        s1.push(l1->data);
        l1 = l1->next;
    }

    // Push the elements of the second list into stack s2
    while (l2 != nullptr) {
        s2.push(l2->data);
        l2 = l2->next;
    }

    int carry = 0;        // Initialize carry to 0
    Node* result = nullptr;  // Initialize the result linked list to null

    // Pop elements from both stacks and add them
    while (!s1.empty() || !s2.empty() || carry) {
        int sum = carry;
        if (!s1.empty()) {
            sum += s1.top();  // Add the top element of s1 to sum
            s1.pop();         // Remove the top element from s1
        }
        if (!s2.empty()) {
            sum += s2.top();  // Add the top element of s2 to sum
            s2.pop();         // Remove the top element from s2
        }
        carry = sum / 10;     // Calculate the carry for the next iteration
        Node* newNode = new Node(sum % 10);  // Create a new node with the current digit
        newNode->next = result;  // Link the new node to the front of the result list
        result = newNode;     // Update the result list to point to the new node
    }

    return result;  // Return the head of the result linked list
}

int main() {
    // Test case 1: 190 + 25 = 215
    Node* num1 = newNode(1);
    num1->next = newNode(9);
    num1->next->next = newNode(0);

    Node* num2 = newNode(2);
    num2->next = newNode(5);

    // Add the two numbers represented by the linked lists
    Node* result = addTwoNumbers(num1, num2);

    // Print the result linked list
    cout << "Sum: ";
    printList(result); // Output should be 2 1 5

    return 0;
}
