#include <iostream>
using namespace std;
// Definition for singly-linked list node
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode dummy(0); // Dummy node to act as the start of the result list
    ListNode* sum = &dummy; // Pointer to traverse and build the result list
    int carry = 0; // Initialize carry to 0

    while (l1 || l2 || carry) { // Continue as long as there are nodes to process or a carry
        int s = carry; // Start with the carry value

        if (l1) {
            s += l1->val; // Add value from l1 if available
            l1 = l1->next; // Move to the next node in l1
        }

        if (l2) {
            s += l2->val; // Add value from l2 if available
            l2 = l2->next; // Move to the next node in l2
        }

        carry = s / 10; // Calculate new carry
        s %= 10; // Get the single digit to store in the node

        sum->next = new ListNode(s); // Create a new node with the single digit
        sum = sum->next; // Move the sum pointer to the next node
    }

    return dummy.next; // Return the next node of the dummy, which is the head of the result list
}

// Helper function to print the linked list
void printList(ListNode* head) {
    while (head) {
         cout << head->val << " ";
        head = head->next;
    }
     cout <<  endl;
}

// Main function for testing
int main() {
    // Create first number: 342 (stored as 2 -> 4 -> 3)
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    // Create second number: 465 (stored as 5 -> 6 -> 4)
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    // Add the two numbers
    ListNode* result = addTwoNumbers(l1, l2);

    // Print the result: 807 (stored as 7 -> 0 -> 8)
    printList(result);

    return 0;
}
