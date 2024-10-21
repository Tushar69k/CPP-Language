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

Node* deleteBST(Node* root , int val) {
    if (root == NULL) {
        return NULL;
    }

    if (val > root->data) {
        root->right = deleteBST(root->right , val);
    }
    else if (val < root->data) {
        root->left = deleteBST(root->left , val);
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
            int rightMin = minElement(root->right);
            root->data = rightMin;
            deleteBST(root->right , rightMin);
        }
    }
    return root;
}

int minElement(Node* root) {
    if (root == NULL) {
        return -1;
    }

    Node* temp = root;

    while (temp->left != NULL) {
        temp = temp->left;
    }

    return temp->data;
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