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
        left->right = bst(root->left , val);
    }

    return root;
}


inorder(Node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data;
    inorder(root->right);

}

Node* delbst(Node* root , int val) {
    if (root == NULL) {
        return NULL;
    }

    if (val > root->data) {
        root->right = delbst(root->right , val);
    }

    if (val < root->data) {
        root->left = delbst(root->left , val);
    }

    else {
        if (root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }
        else if (root->left == NULL) {
            root = root->right;
        }
        else if (root->right == NULL) {
            root = root->left;
        }
        else {
            int rightmin = min(root->right);
            root->data = rightmin;
            delbst(root->right , rightmin);
        }
    }
    return root;
}

int min(Node* root) {
    if (root == NULL) {
        return -1;
    }

    Node* temp = root;

    while (temp->left != NULL) {
        temp = temp->left;
    }

    return temp->data;

}


//  TODO : Ad main() function