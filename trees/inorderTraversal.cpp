#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* left;
    Node* right;

  
    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

void inorder(Node* node) {
    if (node == nullptr) {
        return;
    }

    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}


int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);

    cout << "Inorder traversal of the binary tree: ";
    inorder(root);  // Output should be: 4 2 5 1 6 3

    return 0;
}
