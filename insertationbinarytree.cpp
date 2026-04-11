#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = NULL;
    }
};

// Insert function
Node* insert(Node* root, int value) {
    // If tree is empty, create new node
    if (root == NULL) {
        return new Node(value);
    }

    // If value is smaller, go to left subtree
    if (value < root->data) {
        root->left = insert(root->left, value);
    }
    // If value is greater, go to right subtree
    else {
        root->right = insert(root->right, value);
    }

    return root;
}

// Inorder traversal (to check result)
void inorder(Node* root) {
    if (root == NULL) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Main function
int main() {
    Node* root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    cout << "Inorder Traversal: ";
    inorder(root);

    return 0;
}