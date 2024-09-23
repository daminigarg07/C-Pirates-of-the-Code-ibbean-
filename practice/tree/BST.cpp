#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int x) {
        this->data = x;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class BST {
public:
    Node* root;
    BST() {
        root = nullptr;
    }

    Node* insert(Node* root, int val) {
        if (root == nullptr) {
            return new Node(val);
        }
        if (val < root->data) {
            root->left = insert(root->left, val);
        } else {
            root->right = insert(root->right, val);
        }
        return root;
    }

    bool search(Node* root, int val) {
        if (root == nullptr) return false;
        if (root->data == val) return true;
        if (root->data > val) return search(root->left, val);
        else return search(root->right, val);
    }

    void inorder(Node* root) {
        if (root == nullptr) return;
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
    
};

int main() {
    BST b;
    b.root = b.insert(b.root, 3);
    b.root = b.insert(b.root, 1);
    b.root = b.insert(b.root, 4);
    b.root = b.insert(b.root, 2);
    b.root = b.insert(b.root, 0);

    cout << "In-order traversal of the BST: ";
    b.inorder(b.root);
    cout << endl;

    int searchValue = 2;
    if (b.search(b.root, searchValue)) {
        cout << searchValue << " is found in the BST." << endl;
    } else {
        cout << searchValue << " is not found in the BST." << endl;
    }

    searchValue = 5;
    if (b.search(b.root, searchValue)) {
        cout << searchValue << " is found in the BST." << endl;
    } else {
        cout << searchValue << " is not found in the BST." << endl;
    }

    return 0;
}
