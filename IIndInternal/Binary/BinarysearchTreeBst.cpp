#include<iostream>
using namespace std;


class Node {
public:
    Node* left;
    Node* right;
    int data;

    Node(int val) {
        this->data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insertBST(Node* root , int val) {
    if (root == NULL) {
        return new Node(val);
    }

    if (val > root->data) {
        root->right = insertBST(root->right , val);
    }
    else if (root->data > val) {
        root->left = insertBST(root->left , val);
    }

    return root;

}

void InOrder(Node* root) {
    if (root == NULL) {
        return;
    }
    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);
}

void PreOrder(Node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}

void PostOrder(Node* root) {
    if (root == NULL) {
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
}



int main() {
    Node* root = NULL;
    root = insertBST(root , 5);
    root = insertBST(root , 4);
    root = insertBST(root , 2);
    root = insertBST(root , 8);

    cout << "InOrder : ";
    InOrder(root);
    cout << "\nPreOrder : ";
    PreOrder(root);
    cout << "\nPostOrder : ";
    PostOrder(root);



    return 0;
}