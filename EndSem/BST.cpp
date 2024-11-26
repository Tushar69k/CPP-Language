#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }

};


void bst(Node* root , int val) {
    if (root == NULL) {
        return new Node(val);
    }

    if (val > root->data) {
        root->right = bst(root->right , val);
    }

    if (val < root->data) {
        root->left = bst(root->left , val);
    }

    return root;

}


void inorder(Node* root) {
    inorder(root->left);
    cout << root->data;
    inorder(roor->right);
}

void preorder(Node* root) {

    if (root == NULL) {
        return;
    }

    cout << root->data;
    preorder(root->left);
    preorder(root->right);
}




int main() {


    return 0;
}