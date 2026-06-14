#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* left;
                       
    node* right;

    node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node* buildTree(node* root) {
    cout << "Enter data: ";
    int data;
    
    if (data == -1) {
        return NULL;
    }

    root = new node(data);

    cout << "Enter data for left child of " << data << ": " << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for right child of " << data << ": " << endl;
    root->right = buildTree(root->right);

    return root;
}

int main() {
    node* root = NULL;
    root = buildTree(root);
}