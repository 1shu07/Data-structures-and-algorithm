#include <iostream>
using namespace std;

// Define the structure for a tree node
struct Node {
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Preorder traversal: Root -> Left -> Right
void preorder(Node* node) {
    if (node == nullptr) {
        return;
    }

    cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
}

// Main function
int main() {
    

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);

    cout << "Preorder traversal of the binary tree: ";
    preorder(root);  // Output: 1 2 4 5 3 6

    return 0;
}
