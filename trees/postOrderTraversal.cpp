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

void postorder(Node* node) {
    if (node == nullptr) {
        return;
    }

    postorder(node->left);
    postorder(node->right);
    cout << node->data << " ";
}

int main() {
   
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);

    cout << "Postorder traversal of the binary tree: ";
    postorder(root); 

    return 0;
}
