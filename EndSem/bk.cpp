else {
    int rightmin = min(root->right);
    root->data = rightmin;
    del(root->right , rightmin);
}

int min(Node * root) {



}