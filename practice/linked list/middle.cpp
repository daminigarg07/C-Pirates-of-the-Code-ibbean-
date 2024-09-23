#include <iostream>
#include <vector>

using namespace std;

// Definition for singly-linked list node.
class ListNode {
public:
    int val;
    ListNode* next;
    
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to find the middle of the linked list.
// You need to implement this function.
ListNode* middleNode(ListNode* head) {
    int n=0;
    if(!head) return head;
    ListNode* temp=head;
    while(temp)
    {
    	n++;
    	temp=temp->next;
	}
	int mid=n/2;
	for(int i =0;i<mid;i++)
	{
		head=head->next;
	}
	return head;
}

// Helper function to create a linked list from a vector of values
ListNode* createLinkedList(const vector<int>& values) {
    if (values.empty()) return nullptr;
    
    ListNode* head = new ListNode(values[0]);
    ListNode* current = head;
    
    for (size_t i = 1; i < values.size(); ++i) {
        current->next = new ListNode(values[i]);
        current = current->next;
    }
    
    return head;
}

// Helper function to print the linked list
void printLinkedList(ListNode* head) {
    ListNode* current = head;
    cout<<current->val;
    cout << endl;
}

int main() {
    // Example usage:
    // Creating a linked list 1 -> 2 -> 3 -> 4 -> 5
    vector<int> values = {1, 2,5,10, 4, 5};
    ListNode* head = createLinkedList(values);
    
    cout << "Original Linked List:" << endl;
    printLinkedList(head);
    
    // Call your function here
    ListNode* middle = middleNode(head);
    
    cout << "\nMiddle of the Linked List:" << endl;
    printLinkedList(middle);
    
    return 0;
}
