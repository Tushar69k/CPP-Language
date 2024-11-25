#include<iostream>
using namespace std;

class Node {
public:
    Node* next;
    int data;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

void push(Node*& top , int ele) {
    Node* new_node = new Node(ele);
    new_node->next = top;
    top = new_node;
}

void pop(Node*& top) {
    Node* temp = top;
    top = temp->next;
    temp = NULL;
    free(temp);
}

void display(Node*& top) {
    Node* temp = top;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}


int main() {
    Node* top = NULL;
    push(top , 10);
    push(top , 20);
    pop(top);
    push(top , 30);
    push(top , 40);
    display(top);

    return 0;
}